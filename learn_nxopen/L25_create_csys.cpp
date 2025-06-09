//L25_create_csys

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_csys.h>
#include <uf_ui.h>
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

	// TODO: add your code here
	UF_initialize();

	//定义坐标轴原点
	double yuandian[3] = { 10,20,30 };

	//创建矩阵
	double vecX[3] = { 2,3,5 };
    double vecY[3] = { 0,1,0 };
	double mtx[9];
	UF_MTX3_initialize(vecX, vecY, mtx);//由x和y向量生成矩阵

	//得到矩阵的id
	tag_t mtx_id = NULL_TAG;
	UF_CSYS_create_matrix(mtx, &mtx_id);


	//创建坐标系
	tag_t csys_id = NULL_TAG;
	UF_CSYS_create_csys( yuandian, mtx_id, &csys_id);

	//------------------------------------

	//获取坐标系id 获取坐标系原点	
	tag_t csys_id2 = NULL_TAG;
	double origin[3];

	UF_CSYS_ask_csys_info(csys_id, &csys_id2, origin);


	//输出坐标系信息
	char msg[100];
    sprintf(msg, "坐标系原点：%f,%f,%f", origin[0], origin[1], origin[2]);
	uc1601(msg,1);
	sprintf(msg, "坐标系id：%d", csys_id2);
    uc1601(msg,1);


	//输入矩阵的id，得到矩阵的值
	double mtx2[9];
	UF_CSYS_ask_matrix_values(mtx_id, mtx2);
    sprintf(msg, "矩阵值：%f,%f,%f,%f,%f,%f,%f,%f,%f", mtx2[0], mtx2[1], mtx2[2], mtx2[3], mtx2[4], mtx2[5], mtx2[6], mtx2[7], mtx2[8]);
    uc1601(msg,1);


	//改变原点
    double new_origin[3] = { 100,0,0 };
	UF_CSYS_set_origin(csys_id, new_origin);

	//设置WCS
	UF_CSYS_set_wcs(csys_id);
	//设置WCS显示
	UF_CSYS_set_wcs_display(1);



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


