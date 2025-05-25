//L17_creat_list

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_curve.h>
#include <uf_modl_utilities.h>
#include <uf_modl_sweep.h>
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
void MyClass::print(const NXString& msg)
{
	if (!lw->IsOpen()) lw->Open();
	lw->WriteLine(msg);
}
void MyClass::print(const string& msg)
{
	if (!lw->IsOpen()) lw->Open();
	lw->WriteLine(msg);
}
void MyClass::print(const char* msg)
{
	if (!lw->IsOpen()) lw->Open();
	lw->WriteLine(msg);
}




//------------------------------------------------------------------------------
// Do something
//------------------------------------------------------------------------------
void MyClass::do_it()
{

	// TODO: add your code here

	UF_initialize();

	UF_CURVE_line_t line1;
	line1.start_point[0] = 0.0;
	line1.start_point[1] = 0.0;
	line1.start_point[2] = 0.0;

	line1.end_point[0] = 10.0;
	line1.end_point[1] = 0.0;
	line1.end_point[2] = 0.0;
	tag_t lineTAG[3];
	UF_CURVE_create_line(&line1, &lineTAG[0]);

	UF_CURVE_line_t line2;
	line2.start_point[0] = 10.0;
	line2.start_point[1] = 0.0;
	line2.start_point[2] = 0.0;

	line2.end_point[0] = 10.0;
	line2.end_point[1] = 10.0;
	line2.end_point[2] = 0.0;
	//ag_t lineTAG2 = NULL_TAG;
	UF_CURVE_create_line(&line2, &lineTAG[1]);

	UF_CURVE_line_t line3;
	line3.start_point[0] = 10.0;
	line3.start_point[1] = 10.0;
	line3.start_point[2] = 0.0;

	line3.end_point[0] = 0.0;
	line3.end_point[1] = 0.0;
	line3.end_point[2] = 0.0;
	//tag_t lineTAG3 = NULL_TAG;
	UF_CURVE_create_line(&line3, &lineTAG[2]);


	//拉伸
	/*
	int UF_MODL_create_list
	(
		uf_list_p_t * list
	)
			int UF_MODL_create_extruded2
		(			uf_list_p_t objects,
			char* taper_angle,
			char* limit[2],
			double point[3],
			double direction[3],
			UF_FEATURE_SIGN sign,
			uf_list_p_t * features		)
				*/

	uf_list_t* objectslist = NULL;
	//创建链表
	UF_MODL_create_list(&objectslist);
	for (int i = 0; i < 3; i++){
		UF_MODL_put_list_item(objectslist, lineTAG[i]);
	}

	//访问链表
	int count;
	UF_MODL_ask_list_count(objectslist, &count);
	char msg[100];
	sprintf(msg, "链表长度为%d", count);
	uc1601(msg, 1);

	char * taper_angle = "0";
	char * limit[2] = { "0", "10" };
	double point[3] = { 0, 0, 0 };
	double direction[3] = { 0, 0, 1 };
	UF_FEATURE_SIGN sign = UF_NULLSIGN;
	uf_list_t* featureslist = NULL;
	UF_MODL_create_extruded2(objectslist, taper_angle, limit, point, direction, sign, &featureslist);
	//删除链表
    UF_MODL_delete_list(&objectslist);
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


