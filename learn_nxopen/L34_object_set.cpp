//L34_object_set

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
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
			//��ʼ��
	UF_initialize();

	UF_FEATURE_SIGN sign = UF_NULLSIGN;
	//����һ����
	//���ԭ��
	double corner[3] = { 0.0,0.0,0.0 };
	//��ı߳�
	char* edge[3] = { "10.0","20.0","15.0" };
	tag_t fTAG = NULL_TAG;
	UF_MODL_create_block1(sign, corner, edge, &fTAG);

	//��������
	tag_t bTAG = NULL_TAG;
	UF_MODL_ask_feat_body(fTAG, &bTAG);
	//������ɫ
	UF_OBJ_set_color(bTAG, 11);

	//��������
	UF_OBJ_set_font(bTAG, UF_OBJ_FONT_DASHED);
	/*
UF_OBJ_FONT_INVISIBLE
UF_OBJ_FONT_SOLID
UF_OBJ_FONT_DASHED
UF_OBJ_FONT_PHANTOM
UF_OBJ_FONT_CENTERLINE
UF_OBJ_FONT_DOTTED
UF_OBJ_FONT_LONG_DASHED
UF_OBJ_FONT_DOTTED_DASHED
*/


	//�����߿�
	UF_OBJ_set_line_width(bTAG, UF_OBJ_WIDTH_9);


	/*
#define UF_OBJ_WIDTH_1          (UF_MIN_NEW_WIDTH + 0)
#define UF_OBJ_WIDTH_2          (UF_MIN_NEW_WIDTH + 1)
#define UF_OBJ_WIDTH_3          (UF_MIN_NEW_WIDTH + 2)
#define UF_OBJ_WIDTH_4          (UF_MIN_NEW_WIDTH + 3)
#define UF_OBJ_WIDTH_5          (UF_MIN_NEW_WIDTH + 4)
#define UF_OBJ_WIDTH_6          (UF_MIN_NEW_WIDTH + 5)
#define UF_OBJ_WIDTH_7          (UF_MIN_NEW_WIDTH + 6)
#define UF_OBJ_WIDTH_8          (UF_MIN_NEW_WIDTH + 7)
#define UF_OBJ_WIDTH_9          (UF_MIN_NEW_WIDTH + 8)
#define UF_OBJ_MAX_WIDTH        (UF_OBJ_WIDTH_9   + 1)
	*/


	//����ͼ��
	UF_OBJ_set_layer(bTAG, 1);


	//��������
	UF_OBJ_set_name(fTAG, "��������");
	UF_OBJ_set_name(bTAG, "�巽��");

	//�������Ƶ�ԭ��  ��������ʲô��
	double origin[3] = { 0.0,0.0,0.0 };

	UF_OBJ_set_name_origin(bTAG, origin);


	//����͸����
	UF_OBJ_set_translucency(bTAG, 50);

	//����Ĭ����ɫ
	UF_OBJ_set_cre_color(UF_solid_type, UF_all_subtype, UF_OBJ_solid_body_property, 30);


	//�˳�
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


