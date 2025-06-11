//L30_LAYER

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_layer.h>
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
	//获取一个图层类别的tag
	tag_t layer_tag=NULL_TAG;
	UF_LAYER_ask_category_tag("00_FINAL_DATA",&layer_tag);

	//获取该类别图层信息
	UF_LAYER_category_info_t info;
	UF_LAYER_ask_category_info(layer_tag, &info);


	//打印
	UF_UI_open_listing_window();
	UF_UI_write_listing_window(info.descr);
    UF_UI_write_listing_window("\n");	
    UF_UI_write_listing_window(info.name);
	UF_UI_write_listing_window("\n");
	char msg[100];
	for (int i = 0; i < 256; i++)
	{
		sprintf(msg, "%d", info.layer_mask[i]);//布尔值转字符串
		
		UF_UI_write_listing_window(msg);
		UF_UI_write_listing_window("\n");
	}
	
	//图层状态
	int layerstatus;
	UF_LAYER_ask_status(61, &layerstatus);
	
	sprintf(msg, "%d", layerstatus);
	UF_UI_write_listing_window("图层状态：");
    UF_UI_write_listing_window(msg);
	UF_UI_write_listing_window("\n");

	/*
#define UF_LAYER_WORK_LAYER           1
#define UF_LAYER_ACTIVE_LAYER         2
#define UF_LAYER_REFERENCE_LAYER      3
#define UF_LAYER_INACTIVE_LAYER       4
*/

//设置图层状态
	UF_LAYER_set_status(61, 1);
	UF_LAYER_ask_status(61, &layerstatus);

	sprintf(msg, "%d", layerstatus);
	UF_UI_write_listing_window("新的图层状态：");
	UF_UI_write_listing_window(msg);
	UF_UI_write_listing_window("\n");



	//创建图层类别
	UF_LAYER_category_info_t category_info;
	strcpy(category_info.name, "图层名字");
	strcpy(category_info.descr, "图层描述");
	for (int i = 0; i < 256; i++)
	{
		if (i <= 5)
		{
			category_info.layer_mask[i] = 1;
		}
		else
		{
			category_info.layer_mask[i] = 0;
		}
	}
	tag_t new_tag=NULL_TAG;
	UF_LAYER_create_category(&category_info,&new_tag);


	//编辑图层类别
	// 
	UF_LAYER_edit_category_descr(new_tag,  "新的图层描述");
	UF_LAYER_edit_category_name(new_tag, "新的图层名字");




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


