//L19_creatblock_R1

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>

// Internal Includes
#include <NXOpen/ListingWindow.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/UI.hxx>
#include <uf_modl_primitives.h>
#include <uf_ui.h>
#include <uf_modl.h>
//添加库
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

	UF_FEATURE_SIGN sign = UF_NULLSIGN;


	//创建一个块
	//块的原点
	double corner[3] = { 0.0,0.0,0.0 };
	//块的边长
	char* edge[3] = { "100.0","100.0","30.0" };
	tag_t fTAG = NULL_TAG;
	UF_MODL_create_block1(sign, corner, edge, &fTAG);


	//特征找边
	uf_list_p_t edgelist = NULL; //创建链表
	UF_MODL_ask_feat_edges(fTAG, &edgelist);//找特征块的边
	int count;
	UF_MODL_ask_list_count(edgelist, &count);//得到链表长度



	int ver_num=2;
	double p1[3], p2[3];
	tag_t tag_L = NULL_TAG;

	uf_list_p_t edgelist2 = NULL;
	UF_MODL_create_list(&edgelist2); //创建新链表，用来保存结果

	for (int i = 0; i < count; i++)//遍历每个边
    { 
		UF_MODL_ask_list_item(edgelist, i, &tag_L);//找到边的tag标签值
		UF_MODL_ask_edge_verts(tag_L, p1, p2, &ver_num);//获取边的两个顶点
		if (fabs(p1[2] - p2[2]) > 1e-6)//如果边是竖直的
        {
			UF_MODL_put_list_item(edgelist2, tag_L);//保存边
        }
    }	

	//输出垂直边的数量
	UF_MODL_ask_list_count(edgelist2, &count);
	char msg[100];
    sprintf(msg, "There are %d vertical edges.", count);
	uc1601(msg,1);

	//获得系统建模公差
	double distance_tolerance;
	UF_MODL_ask_distance_tolerance(&distance_tolerance);
	sprintf(msg, "Distance tolerance is %f.", distance_tolerance);
	uc1601(msg,1);

	//创建圆角
	tag_t R_tag = NULL_TAG;
	UF_MODL_create_blend("10", edgelist2,0,0,0, distance_tolerance,&R_tag);

	//删除链表
	UF_MODL_delete_list(&edgelist2);
	UF_MODL_delete_list(&edgelist);

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


