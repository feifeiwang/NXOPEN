//xingweigongcha_single

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
#include <NXOpen/Annotations_DraftingFcf.hxx>
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
	/*
	//NXopen C++
	//录制程序的代码，该程序用于更改选中的行为公差的字体格式
    std::vector<NXOpen::DisplayableObject*> objects1(1);
    UI* theUI = UI::GetUI();

    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);


    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(1);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);

    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    NXOpen::NXObject* nXObject1;
    nXObject1 = editsettingsbuilders1[0]->Commit();

    editSettingsBuilder1->Destroy();
	*/

    /*精简后的单个对象修改
    std::vector<NXOpen::DisplayableObject*> objects1(1);
    UI* theUI = UI::GetUI();

    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);


    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx));
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder1->Commit();

    editSettingsBuilder1->Destroy();
    */



    //editSettingsBuilder1->Destroy();


    /*选中两个
    std::vector<NXOpen::DisplayableObject*> objects1(2);
    UI* theUI = UI::GetUI();

    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(2);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    editsettingsbuilders1[1] = editSettingsBuilder2;
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);


 
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont_v1", NXOpen::FontCollection::TypeNx);

    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    //editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextItalicized(false);

    //editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextLineWidth(NXOpen::Annotations::LineWidthThin);

 
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);

 
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);


    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);


    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder1->Commit();

    NXOpen::NXObject* nXObject2;
    nXObject2 = editSettingsBuilder2->Commit();


    editSettingsBuilder2->Destroy();

    editSettingsBuilder1->Destroy();
    */
/*可以改两个公差框的设置
        // 创建存储两个公差框对象的向量
    std::vector<NXOpen::DisplayableObject*> objects1(2);
    // 获取当前用户界面实例
    UI* theUI = UI::GetUI();

    // 获取并转换前两个选中的对象为几何公差框类型
    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));



    // 创建用于编辑第一个公差框(两个对象)的设置构建器
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

    // 创建仅包含第二个公差框的对象向量
    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));

    // 创建用于编辑第二个公差框(单个对象)的设置构建器
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    // 创建批量处理构建器向量并添加两个构建器
    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(2);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    editsettingsbuilders1[1] = editSettingsBuilder2;

    // 批量处理多个对象的设置
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);

    // 添加名为blockfont_v1的字体并获取索引
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont_v1", NXOpen::FontCollection::TypeNx);

    // 设置第一个公差框的字体(注意：此处使用硬编码索引6，可能与fontIndex1不一致)
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    // 设置第二个公差框的字体和样式
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    // 设置两个公差框的文本大小
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);

    // 设置两个公差框的字符间距
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    // 设置两个公差框的文本宽高比
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    // 提交第二个公差框的修改并获取结果对象
    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder2->Commit();

    // 提交第一个公差框的修改并获取结果对象
    NXOpen::NXObject* nXObject2;
    nXObject2 = editSettingsBuilder1->Commit();

    // 释放构建器资源
    editSettingsBuilder2->Destroy();
    editSettingsBuilder1->Destroy();
    */

/**/
/*
    // 获取UI实例用于访问选择管理器
    UI* theUI = UI::GetUI();

    // 创建包含三个选定对象的向量（假设用户已选择三个标注特征控制框）
    std::vector<NXOpen::DisplayableObject*> objects1(3);
    int num=theUI->SelectionManager()->GetNumSelectedObjects();
    char number[10];
    sprintf(number,"%d",num);
    uc1601(number,1);
    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    objects1[2] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(2));

    // 创建编辑设置构建器用于批量处理三个选定对象
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

    // 创建编辑设置构建器用于单独处理第二个选定对象
    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    // 创建编辑设置构建器用于单独处理第三个选定对象
    std::vector<NXOpen::DisplayableObject*> objects3(1);
    objects3[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(2));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder3;
    editSettingsBuilder3 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects3);

    // 批量处理多个对象的设置
    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(3);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    editsettingsbuilders1[1] = editSettingsBuilder2;
    editsettingsbuilders1[2] = editSettingsBuilder3;
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);

    // 添加名为"blockfont"的字体到工作部件
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

    // 设置所有编辑构建器的字体为新添加的字体(索引1)
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);


    // 设置所有对象的文本大小为3.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);

    // 设置所有对象的字符间距因子为1.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    // 设置所有对象的文本宽高比为0.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    // 提交所有编辑设置并获取结果对象
    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder2->Commit();

    NXOpen::NXObject* nXObject2;
    nXObject2 = editSettingsBuilder3->Commit();

    NXOpen::NXObject* nXObject3;
    nXObject3 = editSettingsBuilder1->Commit();

    // 销毁编辑设置构建器以释放资源
    editSettingsBuilder2->Destroy();
    editSettingsBuilder3->Destroy();
    editSettingsBuilder1->Destroy();
    */

/*豆包写的代码
        // 获取UI实例
    UI* theUI = UI::GetUI();

    // 获取选中对象的数量
    int numSelected = theUI->SelectionManager()->GetNumSelectedObjects();

    // 检查是否有选中对象
    if (numSelected == 0) {
        uc1601("没有选中对象", 1);
        return;
    }

    // 创建工作部件指针
    //NXOpen::Part* workPart = theUI->Session()->Parts()->Work();

    try {
        // 创建存储选中对象的向量
        std::vector<NXOpen::DisplayableObject*> selectedObjects(numSelected);

        // 获取所有选中的对象并转换为几何公差框类型
        for (int i = 0; i < numSelected; i++) {
            selectedObjects[i] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(
                theUI->SelectionManager()->GetSelectedObject(i));

            // 检查转换是否成功
            if (!selectedObjects[i]) {
                uc1601("选中的对象中包含非几何公差框类型", 1);
                return;
            }
        }

        // 创建用于批量处理所有选中对象的单个构建器
        NXOpen::Annotations::EditSettingsBuilder* builder =
            workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(selectedObjects);

        // 添加字体并获取索引
        int fontIndex = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

        // 设置字体和文本样式
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex);
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5); // 保持你修改后的3.5大小
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

        // 提交修改并释放资源
        NXOpen::NXObject* result = builder->Commit();
        builder->Destroy();

        // 提示用户修改完成
        char message[100];
        sprintf(message, "成功修改%d个几何公差框的字体设置", numSelected);
        uc1601(message, 2);

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
    */



    // 获取UI实例用于访问选择管理器
    UI* theUI = UI::GetUI();


    try {

        // 获取选中对象的数量
        int numSelected = theUI->SelectionManager()->GetNumSelectedObjects();
       
        // 检查是否有选中对象
        if (numSelected == 0) {
            uc1601("没有选中对象", 1);
            return;
        }
        // 创建存储选中对象的向量
        std::vector<NXOpen::DisplayableObject*> objects1(numSelected);

        
        // 获取所有选中的对象并转换为几何公差框类型
        for (int i = 0; i < numSelected; i++) {
            objects1[i] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(
                theUI->SelectionManager()->GetSelectedObject(i));

            // 检查转换是否成功
            if (!objects1[i]) {
                uc1601("选中的对象中包含非几何公差框类型", 1);
                return;
            }
        }
                // 所有选中对象的单个构建器
        NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1 =
        workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx));
        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

        NXOpen::NXObject* nXObject1;
        nXObject1 = editSettingsBuilder1->Commit();
        if (numSelected>1)//数量大于1，后续每个都要创建
        {
            std::vector<std::vector<NXOpen::DisplayableObject*>> vecOfVecs(numSelected - 1, std::vector<NXOpen::DisplayableObject*>(1));
            NXOpen::Annotations::EditSettingsBuilder** editSettingsBuilderArray = new NXOpen::Annotations::EditSettingsBuilder * [numSelected - 1];

            for (int i = 1; i < numSelected; i++) {
                vecOfVecs[i-1][0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(i));
                editSettingsBuilderArray[i - 1] = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(vecOfVecs[i - 1]);

                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx));
                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
                nXObject1 = editSettingsBuilderArray[i - 1]->Commit();
                editSettingsBuilderArray[i - 1]->Destroy();
            }

        }
        

        // 销毁编辑设置构建器以释放资源
        editSettingsBuilder1->Destroy();
 

        // 提示用户修改完成
        char message[100];
        sprintf(message, "成功修改%d个几何公差框的字体设置", numSelected);
        uc1601(message, 2);

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


    /*

    // 创建包含三个选定对象的向量（假设用户已选择三个标注特征控制框）
   
    std::vector<NXOpen::DisplayableObject*> objects1(3);
     
    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(1));
    objects1[2] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(2));

    // 创建编辑设置构建器用于批量处理三个选定对象
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);



    // 创建编辑设置构建器用于单独处理第二个选定对象
    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    // 创建编辑设置构建器用于单独处理第三个选定对象
    std::vector<NXOpen::DisplayableObject*> objects3(1);
    objects3[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(2));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder3;
    editSettingsBuilder3 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects3);

    // 批量处理多个对象的设置
 
    // 添加名为"blockfont"的字体到工作部件
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

    // 设置所有编辑构建器的字体为新添加的字体
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);


    // 设置所有对象的文本大小为3.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);

    // 设置所有对象的字符间距因子为1.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    // 设置所有对象的文本宽高比为0.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    // 提交所有编辑设置并获取结果对象
    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder3->Commit();
    nXObject1 = editSettingsBuilder2->Commit();
    nXObject1 = editSettingsBuilder1->Commit();
    

    


    // 销毁编辑设置构建器以释放资源
    editSettingsBuilder3->Destroy();
    editSettingsBuilder2->Destroy();
    editSettingsBuilder1->Destroy();
    
    */
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


