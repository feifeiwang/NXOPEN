//l9

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>

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
#include <uf_modl_primitives.h>

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
	UF_initialize();

	UF_FEATURE_SIGN a = UF_NULLSIGN;
	double point[3] = { 0.0, 0.0, 0.0 };
	char* LWD[3] = {
		"60",
		"70",
		"20"
	};
	tag_t block_tag = NULL_TAG;	
	UF_MODL_create_block1(
		a,
		point,
		LWD,
		&block_tag
	);
	//创建第一个块

	UF_FEATURE_SIGN a2 = UF_POSITIVE;
	double point2[3] = { 0.0, 20.0, 0.0 };
	char* LWD2[3] = {
		"60",
		"30",
		"70"
	};
	tag_t block_tag2 = NULL_TAG;
	UF_MODL_create_block1(
		a2,
		point2,
		LWD2,
		&block_tag2
	);
	//创建第2个块


	UF_FEATURE_SIGN a3 = UF_POSITIVE;
	double origin[3] = { 30.0, 20.0, 70.0 };
	char* Height = "30";
	char* Diam = "60";
	double direction[3] = { 0.0, 1.0, 0.0 };

	tag_t block_tag3 = NULL_TAG;
	UF_MODL_create_cyl1(
		a3,
		origin,
		Height,
		Diam,
		direction,
		&block_tag3
	);
	//创建圆柱

	UF_FEATURE_SIGN a4 = UF_NEGATIVE;
	double origin2[3] = { 30.0, 20.0, 70.0 };
	char* Height2 = "30";
	char* Diam2 = "30";
	double direction2[3] = { 0.0, 1.0, 0.0 };
	
	
	tag_t block_tag4 = NULL_TAG;
	UF_MODL_create_cyl1(
		a4,
		origin2,
		Height2,
		Diam2,
		direction2,
		&block_tag4
	);
	//创建圆柱


	UF_terminate();
	
}

//------------------------------------------------------------------------------
// Entry point(s) for unmanaged internal NXOpen C/C++ programs
//------------------------------------------------------------------------------
//  Explicit Execution
extern "C" DllExport void ufsta( char *parm, int *returnCode, int rlen )
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


