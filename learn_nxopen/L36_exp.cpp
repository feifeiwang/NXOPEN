//L36_exp

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_modl.h>
#include <uf_ui.h>
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

	//创建表达式
	UF_MODL_create_exp("name=80.00");

	tag_t  exp_tag;
	UF_MODL_create_exp_tag("名字=100", & exp_tag);


	//通过名字获取表达式
	char exp[UF_MAX_EXP_BUFSIZE+1];
	UF_MODL_ask_exp("name", exp);
    
	UF_UI_open_listing_window();
	UF_UI_write_listing_window(exp);
	UF_UI_write_listing_window("\n");


	//获取当前工作部件所有的表达式
	tag_t worktag = UF_ASSEM_ask_work_part();
	int num;
	tag_t *exp_tag1 = NULL;
	UF_MODL_ask_exps_of_part(worktag, &num, &exp_tag1);

	char msg[256];
	sprintf(msg, "There are %d expressions in the work part.\n", num);
    UF_UI_write_listing_window(msg);
	
	//释放内存
	UF_free(exp_tag1);


	//导入表达式
	UF_MODL_import_exp("F:\\code\\nx2\\L36_exp\\x64\\Debug\\1.exp", 0);
	UF_MODL_update();


	//导出表达式
	UF_MODL_export_exp("F:\\code\\nx2\\L36_exp\\x64\\Debug\\2.exp");



	//得到工作部件的tag
	tag_t worktag1 = UF_ASSEM_ask_work_part();
	//获取工作部件表达式的tag
	int num2;
	tag_t *exp_tag2 = NULL;
	UF_MODL_ask_exps_of_part(worktag1, &num2, &exp_tag2);
	char *exp3;
	UF_UI_write_listing_window("\n");
	UF_UI_write_listing_window("---------工作部件所有表达式-----------");
	UF_UI_write_listing_window("\n");
    for(int i = 0; i < num2; i++)
	{

		UF_MODL_ask_exp_tag_string(exp_tag2[i], &exp3);
		
		UF_UI_write_listing_window(exp3);
		UF_UI_write_listing_window("\n");
	}
	//释放内存

	UF_free(exp3);
	UF_free(exp_tag2);

	//UF_MODL_dissect_exp_string
	

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


