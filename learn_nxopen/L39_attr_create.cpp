//L39_attr_create

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_ui.h>
#include <uf_attr.h>
#include <uf_assem.h>
#include <uf_modl.h>
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
	// 	//初始化
	UF_initialize();


	/*

	//获取当前部件的tag
	tag_t work_tag = UF_ASSEM_ask_work_part();
	
	//创建布尔型属性
	UF_ATTR_info_s attr_info;
	UF_ATTR_init_user_attribute_info(&attr_info);
	// 清零结构体
	attr_info.type = UF_ATTR_bool;
    attr_info.bool_value = true;
	attr_info.title = "MyBool";
	//attr_info.category = "";
	int num = UF_ATTR_set_user_attribute(work_tag, &attr_info, 0);
	char buf[256];
	sprintf(buf, "num = %d", num);
	uc1601(buf, 1);
	UF_ATTR_free_user_attribute_info_strings(&attr_info);

	//============================

	//获取部件属性的tag
	tag_t attr_tag = NULL_TAG;
	UF_ATTR_ask_part_attribute(&attr_tag);
	UF_ATTR_info_s attr_info2;
	UF_ATTR_init_user_attribute_info(&attr_info2);
	
	attr_info2.type = UF_ATTR_string;
	attr_info2.string_value = "2A14";
	attr_info2.title = "REMARK";
	//attr_info2.unit_type = NULL_TAG;

	num = UF_ATTR_set_user_attribute(attr_tag, &attr_info2, 0);
	
	sprintf(buf, "num = %d", num);
	uc1601(buf, 1);
	UF_ATTR_free_user_attribute_info_strings(&attr_info2);





	UF_FEATURE_SIGN sign = UF_NULLSIGN;
	//创建一个块
	//块的原点
	double corner[3] = { 0.0,0.0,0.0 };
	//块的边长
	char* edge[3] = { "10.0","20.0","30.0" };
	tag_t fTAG = NULL_TAG;
	UF_MODL_create_block1(sign, corner, edge, &fTAG);

	UF_ATTR_info_s attr_info3;
	UF_ATTR_init_user_attribute_info(&attr_info3);
	attr_info3.type = UF_ATTR_string;
	attr_info3.string_value = "2A14";
	attr_info3.title = "材料";
	//attr_info3.unit_type = NULL_TAG;
	num = UF_ATTR_set_user_attribute(fTAG, &attr_info3, 0);
	sprintf(buf, "num = %d", num);
	uc1601(buf, 1);
	UF_ATTR_free_user_attribute_info_strings(&attr_info3);
	*/

	//获取部件属性的tag
	tag_t attr_tag = NULL_TAG;
	UF_ATTR_ask_part_attribute(&attr_tag);
	//创建部件属性
	UF_ATTR_value_t attr_value;
	attr_value.type = UF_ATTR_bool;
	UF_ATTR_assign(attr_tag, "布尔型", attr_value);


	UF_MODL_update();


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


