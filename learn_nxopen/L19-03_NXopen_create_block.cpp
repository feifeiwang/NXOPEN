//L19-03_NXopen_create_block

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
#include <NXOpen/Features_BlockFeatureBuilder.hxx>
#include <NXOpen/Features_Feature.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/Features_FeatureCollection.hxx>

#include <NXOpen/Features_CylinderBuilder.hxx>

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

	NXOpen::Features::Feature* nullNXOpen_Features_Feature(NULL);
	NXOpen::Features::BlockFeatureBuilder* blockFeatureBuilder1;
	blockFeatureBuilder1 = workPart->Features()->CreateBlockFeatureBuilder(nullNXOpen_Features_Feature);

	blockFeatureBuilder1->SetType(NXOpen::Features::BlockFeatureBuilder::TypesOriginAndEdgeLengths);

	//设置原点和长宽高
	NXOpen::Point3d originPoint1(0.0, 0.0, 0.0);
	blockFeatureBuilder1->SetOriginAndLengths(originPoint1, "100", "100", "100");

	//创建体
	NXOpen::Features::Feature* feature1;
	feature1 = blockFeatureBuilder1->CommitFeature();




	//创建圆柱体  #include <NXOpen/Features_CylinderBuilder.hxx>
    NXOpen::Features::Feature* nullNXOpen_Features_Feature1(NULL);
    NXOpen::Features::CylinderBuilder* cylinderBuilder1;
    cylinderBuilder1 = workPart->Features()->CreateCylinderBuilder(nullNXOpen_Features_Feature1);
	cylinderBuilder1->BooleanOption()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);

    //std::vector<NXOpen::Body*> targetBodies1(1);
    //NXOpen::Body* nullNXOpen_Body(NULL);
    //targetBodies1[0] = nullNXOpen_Body;
    //cylinderBuilder1->BooleanOption()->SetTargetBodies(targetBodies1);
	//设置圆柱体原点
	Point3d originPoint2(22.0, 10.0, 20.0);
	cylinderBuilder1->SetOrigin(originPoint2);

	//设置圆柱体方向向量
	Vector3d directionVector1(0.0, 1.0, 1.0);
	cylinderBuilder1->SetDirection(directionVector1);

    cylinderBuilder1->Diameter()->SetRightHandSide("50");
    cylinderBuilder1->Height()->SetRightHandSide("100");
    //cylinderBuilder1->BooleanOption()->SetType(NXOpen::GeometricUtilities::BooleanOperation::BooleanTypeCreate);

    //std::vector<NXOpen::Body*> targetBodies2(1);
    //targetBodies2[0] = nullNXOpen_Body;
    //cylinderBuilder1->BooleanOption()->SetTargetBodies(targetBodies2);
	
	NXOpen::NXObject* nXObject1;
	nXObject1 = cylinderBuilder1->Commit();

    cylinderBuilder1->Destroy();



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


