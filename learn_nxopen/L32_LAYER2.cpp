//L32_LAYER2

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_layer.h>
#include <uf_modl.h>
#include <uf_ui.h>
#include <uf_obj.h>
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

	//UF_LAYER_cycle_by_layer
	//遍历图层所有对象函数
	char msg[256];
	UF_UI_open_listing_window();


	tag_t objtag=NULL_TAG;
	UF_LAYER_cycle_by_layer(61,&objtag);
	sprintf(msg,"%d", objtag);
    UF_UI_write_listing_window(msg);
    UF_UI_write_listing_window("\n");
	UF_UI_write_listing_window("---------循环做--------");
	UF_UI_write_listing_window("\n");

	//好奇怪，i用在哪里了
	//遍历图层所有对象
	int i=0;
	do  { 
		UF_LAYER_cycle_by_layer(61, &objtag);
		i++;
		sprintf(msg, "%d", objtag);
        UF_UI_write_listing_window(msg);
        UF_UI_write_listing_window("\n");
	} while (objtag != NULL_TAG);


	uf_list_t* objectslist = NULL;
	//创建链表
	UF_MODL_create_list(&objectslist);
	i = 0;
	do {
		UF_LAYER_cycle_by_layer(61, &objtag);
		UF_MODL_put_list_item(objectslist, objtag);
		i++;
		sprintf(msg, "%d", objtag);
		UF_UI_write_listing_window(msg);
		UF_UI_write_listing_window("\n");
	} while (objtag != NULL_TAG);

	//删除链表里所有对象
	int  ii;
	int count;
	UF_MODL_ask_list_count(objectslist, &count);//获取链表长度
    for (ii = 0; ii < count; ii++)

    {
        //UF_UI_write_listing_window("删除	1");
		UF_MODL_ask_list_item(objectslist, ii, &objtag);
		if  (objtag != 0)
		{
			UF_OBJ_delete_object(objtag);
			//UF_UI_write_listing_window("删除	2");
		}
			
		
    }
		//删除链表
	UF_MODL_delete_list(&objectslist);

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


