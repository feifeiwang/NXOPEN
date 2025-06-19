//L17-01-DRAW_create

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
#include <uf_draw.h>
#include <uf_part.h>
#include <uf_part_types.h>
#include <uf_ui.h>
#include <uf_obj.h>
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

#include <NXOpen/FileNew.hxx>
#include <NXOpen/DraftingManager.hxx>
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


    /*
    //����ͼֽ��Ϣ
    UF_DRAW_info_t drawing_info;
    tag_t drawing_tag = NULL_TAG;

    drawing_info.size_state = UF_DRAW_METRIC_SIZE;//����
    drawing_info.size.metric_size_code = UF_DRAW_A1;//ͼֽ��С
    drawing_info.drawing_scale=1.0;//���ű���
    drawing_info.units = UF_PART_METRIC;//��λ
    drawing_info.projection_angle = UF_DRAW_FIRST_ANGLE_PROJECTION;//��һ�˳�ͶӰ

    //����ͼֽ
    UF_DRAW_create_drawing("name", &drawing_info, &drawing_tag);
    */



    /*NXopen¼�ƴ���ͼֽ*/
        //��õ�ǰ������·��
    tag_t work_tag = UF_PART_ask_display_part();
    char path[1024];
    UF_PART_ask_part_name(work_tag, path);
    char path2[1024];//���ļ�·��
    char name[256];//ԭģ������

    // ��ȡ�ļ������֣�_model5.prt��
    char* fileName = std::strrchr(path, '\\');
    if (fileName == nullptr) {
        fileName = path;
    }
    else {
        fileName++; // ������б��
    }

    // �����ļ�����name����������չ��
    char* dotPos = std::strrchr(fileName, '.');
    if (dotPos != nullptr) {
        size_t nameLen = dotPos - fileName;
        std::strncpy(name, fileName, nameLen);
        name[nameLen] = '\0'; // ȷ���ַ�����ֹ
    }
    else {
        std::strcpy(name, fileName);
    }

    // ��ȡ·��ǰ׺��C:\temp\��
    char* pathPrefixEnd = std::strrchr(path, '\\');
    if (pathPrefixEnd != nullptr) {
        size_t prefixLen = pathPrefixEnd - path + 1; // +1 ������б��
        std::strncpy(path2, path, prefixLen);
        path2[prefixLen] = '\0';
    }
    else {
        path2[0] = '\0'; // ������·��ǰ׺�����
    }

    // ������·����C:\temp\_model5_dwg.prt��
    std::strcat(path2, name);
    std::strcat(path2, "_dwg.prt");
    //����Ϊ��ȡ������·��

    //NXOpen::Session* theSession = NXOpen::Session::GetSession();
    //NXOpen::Part* workPart(theSession->Parts()->Work());
    //NXOpen::Part* displayPart(theSession->Parts()->Display());

    //����Ϊ¼�����õĴ���ͼֽ����
    NXOpen::Session::UndoMarkId markId1;
    markId1 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityVisible, NXString("\345\274\200\345\247\213", NXString::UTF8));
    NXOpen::FileNew* fileNew1;
    fileNew1 = theSession->Parts()->FileNew();
    //theSession->SetUndoMarkName(markId1, NXString("\346\226\260\345\273\272 \345\257\271\350\257\235\346\241\206", NXString::UTF8));
    //NXOpen::Session::UndoMarkId markId2;
    //markId2 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXString("\346\226\260\345\273\272", NXString::UTF8));
    //theSession->DeleteUndoMark(markId2, NULL);
    //NXOpen::Session::UndoMarkId markId3;
    //markId3 = theSession->SetUndoMark(NXOpen::Session::MarkVisibilityInvisible, NXString("\346\226\260\345\273\272", NXString::UTF8));

    //ͼֽ����
    fileNew1->SetTemplateFileName("A0-noviews-template.prt");//ͼֽģ�� �����޸�

    fileNew1->SetUseBlankTemplate(false);

    fileNew1->SetApplicationName("DrawingTemplate");

    fileNew1->SetUnits(NXOpen::Part::UnitsMillimeters);

    fileNew1->SetRelationType("");

    fileNew1->SetUsesMasterModel("Yes");

    fileNew1->SetTemplateType(NXOpen::FileNewTemplateTypeItem);

    fileNew1->SetTemplatePresentationName(NXString("A0 - \346\227\240\350\247\206\345\233\276", NXString::UTF8));

    fileNew1->SetItemType("");

    fileNew1->SetSpecialization("");

    fileNew1->SetCanCreateAltrep(false);

    fileNew1->SetNewFileName(path2);//ͼֽ�ļ�·��

    fileNew1->SetMasterFileName(name);//��ά�ļ���������.prt��

    fileNew1->SetMakeDisplayedPart(true);

    NXOpen::NXObject* nXObject1;
    nXObject1 = fileNew1->Commit();

    workPart = theSession->Parts()->Work(); //
    displayPart = theSession->Parts()->Display(); //


    fileNew1->Destroy();

    theSession->ApplicationSwitchImmediate("UG_APP_DRAFTING");

    workPart->Drafting()->EnterDraftingApplication();//�����ͼӦ��ģ��


    /*NXopen¼�ƴ���ͼֽ*/





    //����������ͼ
    // 
    //�õ���ǰͼֽҳtag
    tag_t drawing_tag = NULL_TAG;
    UF_DRAW_ask_current_drawing(&drawing_tag);

    //�õ�ǰ��ͼ��tag
    tag_t view_tag = NULL_TAG;
    UF_OBJ_cycle_by_name_and_type(UF_ASSEM_ask_work_part(), "FRONT", UF_view_type, false, &view_tag);


    UF_DRAW_view_info_t view_info;
    UF_DRAW_initialize_view_info(&view_info);//��ʼ��
    tag_t draw_view_tag = NULL_TAG;

    double dwg_point[2] = { 150.0,150.0 };
    UF_DRAW_import_view(drawing_tag, view_tag, dwg_point, &view_info, &draw_view_tag);


    // 
    // �û�����ͼ�����µ�ͶӰ��ͼ
    double dwg_reference_point[2] = { 350.0,150.0 };
    tag_t new_view_tag = NULL_TAG;
    UF_DRAW_add_orthographic_view(drawing_tag, draw_view_tag, UF_DRAW_project_infer, dwg_reference_point, &new_view_tag);

    double dwg_reference_point2[2] = { 150.0,350.0 };
    tag_t new_view_tag2 = NULL_TAG;
    UF_DRAW_add_orthographic_view(drawing_tag, draw_view_tag, UF_DRAW_project_infer, dwg_reference_point2, &new_view_tag2);



    //��������ͼ
    double step_dir[3] = { 0.0,1.0,0.0 };//���߷���
    double arrow_dir[3] = { 1.0,0.0,0.0 };//��ͷ����
    UF_DRF_object_t cut_object;
    cut_object.object_assoc_type = UF_DRF_dwg_pos;
    cut_object.assoc_dwg_pos[0] = dwg_point[0];
    cut_object.assoc_dwg_pos[1] = dwg_point[1];//����λ��

    tag_t sxview_tag = NULL_TAG;
    double view_placement_pt[2]={550.0,150.0};//����ͼ����λ��

    UF_DRAW_create_simple_sxview(drawing_tag, 1.0, step_dir, arrow_dir, draw_view_tag, &cut_object, view_placement_pt, &sxview_tag);


        //������ͼ
    //UF_DRAW_update_one_view(drawing_tag, draw_view_tag);
    UF_DRAW_upd_out_of_date_views(drawing_tag);

    /*
    UF_DRAW_proj_dir_e
UF_DRAW_project_infer = 0
UF_DRAW_project_above
UF_DRAW_project_right
UF_DRAW_project_below
UF_DRAW_project_left
    */
        
    // 
    // 
    // 
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


