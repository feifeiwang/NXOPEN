//l18-feature-ask

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_modl_primitives.h>
#include <uf_modl.h>
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
			//´´½¨Ô²×¶
	UF_initialize();
	UF_FEATURE_SIGN sign1 = UF_NULLSIGN;
	double origin[3] = { 0.0,0.0,0.0 };
	char* high = "10";
	char* diam1[2] = { "10", "5" };
	double dir[3] = { 0.0,0.0,1.0 };
	tag_t TAG2 = NULL_TAG;
	UF_MODL_create_cone1(sign1, origin, high, diam1, dir, &TAG2);

	/*int UF_MODL_ask_feat_body
(
tag_t feature_obj_id,
tag_t * body_obj_id
)*/



	tag_t TAGa = NULL_TAG;
    tag_t TAGb = NULL_TAG;

	UF_MODL_ask_feat_body
        (
			TAG2,
            &TAGb
        );



	/*int UF_MODL_ask_feat_edges
(
tag_t feature_obj_id,
uf_list_p_t * object_list
)*/
	uf_list_p_t list= NULL;
    UF_MODL_ask_feat_edges
        (
			TAG2,
            &list
        );
	//寻找边特征

	uf_list_p_t list2 = NULL;
	UF_MODL_ask_feat_faces
        (
			TAG2,
            &list2
        );
	//寻找面特征
	char msg[100];
	int count;

	//链表数量，并打印
	UF_MODL_ask_list_count
        (
			list2,
            &count
        );
	sprintf(msg, "%d", count);

	uc1601(msg, 1);
	
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


