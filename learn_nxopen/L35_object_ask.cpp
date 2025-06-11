//L35_object_ask

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_modl.h>
#include <uf_ui.h>
#include <uf_obj.h>
#include <uf_assem.h>
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

	//创建直线
	UF_CURVE_line_t line;
	line.start_point[0] = 20;
	line.start_point[1] = 30;
	line.start_point[2] = 40;

	line.end_point[0] = 30;
	line.end_point[1] = 40;
	line.end_point[2] = 50;

	tag_t lineTAG = NULL_TAG;

	UF_CURVE_create_line(&line, &lineTAG);

	//设置名字
	UF_OBJ_set_name(lineTAG, "直线的名字");
	//获取名字
	char name[256];
	UF_OBJ_ask_name(lineTAG, name);
	//打印

	UF_UI_open_listing_window();

	UF_UI_write_listing_window(name);
	UF_UI_write_listing_window("\n");


	//创建直线2
	UF_CURVE_line_t line2;
	line2.start_point[0] = 10;
	line2.start_point[1] = 10;
	line2.start_point[2] = 10;

	line2.end_point[0] = 32;
	line2.end_point[1] = 42;
	line2.end_point[2] = 52;

	tag_t lineTAG2 = NULL_TAG;

	UF_CURVE_create_line(&line2, &lineTAG2);

	//设置名字
	UF_OBJ_set_name(lineTAG2, "直线的名字");

	//通过名字遍历
	tag_t objTAG=  NULL_TAG;
	int i = -1;
	char msg[100];
	do
	{ 
		UF_OBJ_cycle_by_name("直线的名字", &objTAG);
		i++;
		sprintf(msg, "第%d个对象:", i);
		UF_UI_write_listing_window(msg);

		sprintf(msg, "对象TAG为%d", objTAG);
        UF_UI_write_listing_window(msg);
        UF_UI_write_listing_window("\n");

	} while (objTAG != NULL_TAG);
	UF_UI_write_listing_window("--------------------------");
	UF_UI_write_listing_window("\n");
	//获取当前工作的part
	tag_t  work_part_tag= NULL_TAG;
	work_part_tag = UF_ASSEM_ask_work_part();
	//遍历
	tag_t objTAG2=NULL_TAG;
	i = -1;
	int tpye;
	int sub_type;
	do
	{
		UF_OBJ_cycle_objs_in_part1(work_part_tag, UF_solid_type, &objTAG2);

		UF_OBJ_ask_type_and_subtype(objTAG2, &tpye, &sub_type);//获取对象类型和子类型
		i++;
        sprintf(msg, "第%d个对象:", i);
        UF_UI_write_listing_window(msg);
		sprintf(msg, "对象为%d", objTAG2);
        UF_UI_write_listing_window(msg);
        sprintf(msg, "对象类型为%d", tpye);
        UF_UI_write_listing_window(msg);
        sprintf(msg, "对象子类型为%d", sub_type);
        UF_UI_write_listing_window(msg);
        UF_UI_write_listing_window("\n");

	} while (objTAG2!= NULL_TAG);

	/****对应类型定义
#define UF_solid_type                            70      /* Solid 
#define    UF_solid_body_subtype                       0 /* Solid body 
#define    UF_solid_swept_body_subtype                 1 /* Internal use only - not displayable 
#define    UF_solid_face_subtype                       2 /* Solid face 
#define    UF_solid_edge_subtype                       3 /* Solid edge 
#define    UF_solid_silhouette_subtype                 4 /* Moved to type 201 in V10 
#define    UF_solid_foreign_surf_subtype               5 /* Solid foreign Surface 
	****/

	

	





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


