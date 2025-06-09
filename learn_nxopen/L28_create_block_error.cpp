//L28_create_block_error

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_modl_primitives.h>
#include <uf_ui.h>
#include <uf_modl.h>
#include <uf_csys.h>
#include <uf_mtx.h>
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
	UF_initialize();
	// TODO: add your code here
	UF_FEATURE_SIGN sign = UF_NULLSIGN;
	//����һ����
	//���ԭ��
	double corner[3] = { 0.0,0.0,0.0 };
	//��ı߳�
	char* edge[3] = { "20.0","30.0","100.0" };
	tag_t fTAG = NULL_TAG;
	UF_MODL_create_block1(sign, corner, edge, &fTAG);

	//�ڶ�����
    UF_FEATURE_SIGN sign2 = UF_NEGATIVE;
    double corner2[3] = { 0.0,0.0,50.0 };
    char* edge2[3] = { "30.0","15.0","50.0" };
    tag_t fTAG2 = NULL_TAG;
    UF_MODL_create_block1(sign2, corner2, edge2, &fTAG2);

	//���к����У�������������Ȼ�������������
	//���������w�����϶���ת����������ϵ���ڶ���ᱻ���ߣ����������

	//==========================================//

	//���·���Ϊ��wcs���õ�ԭ�㣬��֤�����������ϵһ�£��������
	//��������
	double vecX[3] = { 1.0,0.0,0.0 };
    double vecY[3] = { 0.0,1.0,0.0 };
	double out_mat[9];
	UF_MTX3_initialize(vecX, vecY, out_mat);

	//��ȡid
    tag_t matID = NULL_TAG;
	UF_CSYS_create_matrix(out_mat, &matID);

	//������ʱcsys
    //����ԭ��
    double origin[3] = { 0.0,0.0,0.0 };
	tag_t csysID = NULL_TAG;
	UF_CSYS_create_temp_csys(origin, matID, &csysID);


	//����wcs
	UF_CSYS_set_wcs(csysID);


	//������������
//���ԭ��
	double corner3[3] = { 0.0,0.0,0.0 };
	//��ı߳�
	char* edge3[3] = { "20.0","30.0","100.0" };
	tag_t fTAG3 = NULL_TAG;
	UF_MODL_create_block1(sign, corner3, edge3, &fTAG3);

	//��4����
	
	double corner4[3] = { 0.0,0.0,50.0 };
	char* edge4[3] = { "30.0","15.0","50.0" };
	tag_t fTAG4 = NULL_TAG;
	UF_MODL_create_block1(sign2, corner4, edge4, &fTAG4);

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


