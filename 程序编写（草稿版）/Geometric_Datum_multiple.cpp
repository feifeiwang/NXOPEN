//Geometric_Datum_multiple

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_ui.h>
// Internal Includes
#include <NXOpen/ListingWindow.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/UI.hxx>

// Internal+External Includes
#include <NXOpen/Annotations.hxx>
#include <NXOpen/Assemblies_Component.hxx>
#include <NXOpen/Assemblies_ComponentAssembly.hxx>
#include <NXOpen/Body.hxx>
#include <NXOpen/BodyCollection.hxx>
#include <NXOpen/Face.hxx>
#include <NXOpen/Line.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/Annotations_DraftingDatum.hxx>
#include <NXOpen/Annotations_DrawingFormatTitleBuilder.hxx>
#include <NXOpen/Selection.hxx>
#include <NXOpen/Annotations_EditSettingsBuilder.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Drafting_BaseEditSettingsBuilder.hxx>
#include <NXOpen/Drafting_SettingsManager.hxx>
#include <NXOpen/Drawings_ViewProjectedArrowSettingsBuilder.hxx>
#include <NXOpen/FontCollection.hxx>
// Std C++ Includes
#include <iostream>
#include <sstream>

using namespace NXOpen;
using std::string;
using std::exception;
using std::stringstream;
using std::endl;
using std::cout;
using std::cerr;


//------------------------------------------------------------------------------
// NXOpen c++ test class 
//------------------------------------------------------------------------------
class MyClass
{
    // class members
public:
    static Session *theSession;
    static UI *theUI;

    MyClass();
    ~MyClass();

	void do_it();
	void print(const NXString &);
	void print(const string &);
	void print(const char*);

private:
	Part *workPart, *displayPart;
	NXMessageBox *mb;
	ListingWindow *lw;
	LogFile *lf;
};

//------------------------------------------------------------------------------
// Initialize static variables
//------------------------------------------------------------------------------
Session *(MyClass::theSession) = NULL;
UI *(MyClass::theUI) = NULL;

//------------------------------------------------------------------------------
// Constructor 
//------------------------------------------------------------------------------
MyClass::MyClass()
{

	// Initialize the NX Open C++ API environment
	MyClass::theSession = NXOpen::Session::GetSession();
	MyClass::theUI = UI::GetUI();
	mb = theUI->NXMessageBox();
	lw = theSession->ListingWindow();
	lf = theSession->LogFile();

    workPart = theSession->Parts()->Work();
	displayPart = theSession->Parts()->Display();
	
}

//------------------------------------------------------------------------------
// Destructor
//------------------------------------------------------------------------------
MyClass::~MyClass()
{
}

//------------------------------------------------------------------------------
// Print string to listing window or stdout
//------------------------------------------------------------------------------
void MyClass::print(const NXString &msg)
{
	if(! lw->IsOpen() ) lw->Open();
	lw->WriteLine(msg);
}
void MyClass::print(const string &msg)
{
	if(! lw->IsOpen() ) lw->Open();
	lw->WriteLine(msg);
}
void MyClass::print(const char * msg)
{
	if(! lw->IsOpen() ) lw->Open();
	lw->WriteLine(msg);
}




//------------------------------------------------------------------------------
// Do something
//------------------------------------------------------------------------------
void MyClass::do_it()
{

	// TODO: add your code here
        //初始化
    UF_initialize();
    // TODO: add your code here
    // 获取UI实例用于访问选择管理器
    UI* theUI = UI::GetUI();

    //打开listing窗口
    UF_UI_open_listing_window();

    try {

        // 获取选中对象的数量
        int numSelected = theUI->SelectionManager()->GetNumSelectedObjects();
        int num_other = 0;
        int num_datum = 0;
        char msg[256];
        // 检查是否有选中对象
        if (numSelected == 0) {
            uc1601("没有选中对象", 1);
            return;
        }
        // 创建存储选中对象的向量
        std::vector<NXOpen::DisplayableObject*> objects1(1);


        // 添加名为blockfont_v1的字体并获取索引
        int fontIndex1;
        fontIndex1 = workPart->Fonts()->AddFont("blockfont_v1", NXOpen::FontCollection::TypeNx);

        NXOpen::NXObject* nXObject2;

        // 获取所有选中的对象并转换为几何公差框类型
        for (int i = 0; i < numSelected; i++) {
            //强制转换选中对象为几何公差框
            objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingDatum*>(theUI->SelectionManager()->GetSelectedTaggedObject(i));


            // 检查转换是否成功
            if (!objects1[0]) {//转换失败
                num_other++;
                sprintf(msg, "第%d个非基准对象，跳过。", num_other);
                UF_UI_write_listing_window(msg);
                UF_UI_write_listing_window("\n");
                //return;
            }
            else {//转换成功
                num_datum++;
                NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
                editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);
                // 设置字体
                editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
                // 设置文本大小
                editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
                // 设置字符间距
                editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
                // 设置文本宽高比
                editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
                //设置间隙
                editSettingsBuilder1->AnnotationStyle()->LineArrowStyle()->SetFirstPosToExtensionLineDistance(1.0);
                //提交修改
                nXObject2 = editSettingsBuilder1->Commit();

                sprintf(msg, "第%d个基准对象，转换成功。", num_datum);
                UF_UI_write_listing_window(msg);
                UF_UI_write_listing_window("\n");
                editSettingsBuilder1->Destroy();

            }
        }


        // 销毁编辑设置构建器以释放资源

        sprintf(msg, "执行完毕。共转换%d个基准对象。", num_datum);
        UF_UI_write_listing_window(msg);
        UF_UI_write_listing_window("\n");
    }
    catch (const NXOpen::NXException& e) {
        // 使用NXException::Message()获取正确的错误信息
        std::string errorMsg = "操作过程中发生错误: " + std::string(e.Message());
        uc1601(errorMsg.c_str(), 1);
    }

    catch (...) {
        // 捕获其他未知异常
        uc1601("操作过程中发生未知错误", 1);
    }
    //退出
    UF_terminate();
}

//------------------------------------------------------------------------------
// Entry point(s) for unmanaged internal NXOpen C/C++ programs
//------------------------------------------------------------------------------
//  Explicit Execution
extern "C" DllExport void ufusr( char *parm, int *returnCode, int rlen )
{
    try
    {
		// Create NXOpen C++ class instance
		MyClass *theMyClass;
		theMyClass = new MyClass();
		theMyClass->do_it();
		delete theMyClass;
	}
    catch (const NXException& e1)
    {
		UI::GetUI()->NXMessageBox()->Show("NXException", NXOpen::NXMessageBox::DialogTypeError, e1.Message());
    }
	catch (const exception& e2)
    {
		UI::GetUI()->NXMessageBox()->Show("Exception", NXOpen::NXMessageBox::DialogTypeError, e2.what());
    }
	catch (...)
    {
		UI::GetUI()->NXMessageBox()->Show("Exception", NXOpen::NXMessageBox::DialogTypeError, "Unknown Exception.");
    }
}


//------------------------------------------------------------------------------
// Unload Handler
//------------------------------------------------------------------------------
extern "C" DllExport int ufusr_ask_unload()
{
	return (int)NXOpen::Session::LibraryUnloadOptionImmediately;
}


