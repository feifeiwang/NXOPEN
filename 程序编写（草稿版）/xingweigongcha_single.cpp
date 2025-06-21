//xingweigongcha_single

// Mandatory UF Includes
#include <uf.h>
#include <uf_object_types.h>
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
#include <NXOpen/Annotations_DraftingFcf.hxx>
#include <NXOpen/Annotations_DrawingFormatTitleBuilder.hxx>
#include <NXOpen/Selection.hxx>
#include <NXOpen/Annotations_EditSettingsBuilder.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/Drafting_BaseEditSettingsBuilder.hxx>
#include <NXOpen/Drafting_SettingsManager.hxx>
#include <NXOpen/Drawings_ViewProjectedArrowSettingsBuilder.hxx>
#include <NXOpen/FontCollection.hxx>
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
	//NXopen C++
	//¼�Ƴ���Ĵ��룬�ó������ڸ���ѡ�е���Ϊ����������ʽ
    std::vector<NXOpen::DisplayableObject*> objects1(1);
    UI* theUI = UI::GetUI();

    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);


    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(1);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);

    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    NXOpen::NXObject* nXObject1;
    nXObject1 = editsettingsbuilders1[0]->Commit();

    editSettingsBuilder1->Destroy();
	*/

    /*�����ĵ��������޸�
    std::vector<NXOpen::DisplayableObject*> objects1(1);
    UI* theUI = UI::GetUI();

    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);


    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx));
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder1->Commit();

    editSettingsBuilder1->Destroy();
    */



    //editSettingsBuilder1->Destroy();


    /*ѡ������
    std::vector<NXOpen::DisplayableObject*> objects1(2);
    UI* theUI = UI::GetUI();

    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(2);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    editsettingsbuilders1[1] = editSettingsBuilder2;
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);


 
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont_v1", NXOpen::FontCollection::TypeNx);

    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    //editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextItalicized(false);

    //editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextLineWidth(NXOpen::Annotations::LineWidthThin);

 
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);

 
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);


    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);


    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder1->Commit();

    NXOpen::NXObject* nXObject2;
    nXObject2 = editSettingsBuilder2->Commit();


    editSettingsBuilder2->Destroy();

    editSettingsBuilder1->Destroy();
    */
/*���Ը���������������
        // �����洢�����������������
    std::vector<NXOpen::DisplayableObject*> objects1(2);
    // ��ȡ��ǰ�û�����ʵ��
    UI* theUI = UI::GetUI();

    // ��ȡ��ת��ǰ����ѡ�еĶ���Ϊ���ι��������
    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));



    // �������ڱ༭��һ�������(��������)�����ù�����
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

    // �����������ڶ��������Ķ�������
    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));

    // �������ڱ༭�ڶ��������(��������)�����ù�����
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    // �����������������������������������
    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(2);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    editsettingsbuilders1[1] = editSettingsBuilder2;

    // �������������������
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);

    // �����Ϊblockfont_v1�����岢��ȡ����
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont_v1", NXOpen::FontCollection::TypeNx);

    // ���õ�һ������������(ע�⣺�˴�ʹ��Ӳ��������6��������fontIndex1��һ��)
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    // ���õڶ����������������ʽ
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);

    // ���������������ı���С
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);

    // ���������������ַ����
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    // ���������������ı���߱�
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    // �ύ�ڶ����������޸Ĳ���ȡ�������
    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder2->Commit();

    // �ύ��һ���������޸Ĳ���ȡ�������
    NXOpen::NXObject* nXObject2;
    nXObject2 = editSettingsBuilder1->Commit();

    // �ͷŹ�������Դ
    editSettingsBuilder2->Destroy();
    editSettingsBuilder1->Destroy();
    */

/**/
/*
    // ��ȡUIʵ�����ڷ���ѡ�������
    UI* theUI = UI::GetUI();

    // ������������ѡ������������������û���ѡ��������ע�������ƿ�
    std::vector<NXOpen::DisplayableObject*> objects1(3);
    int num=theUI->SelectionManager()->GetNumSelectedObjects();
    char number[10];
    sprintf(number,"%d",num);
    uc1601(number,1);
    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    objects1[2] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(2));

    // �����༭���ù���������������������ѡ������
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

    // �����༭���ù��������ڵ�������ڶ���ѡ������
    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    // �����༭���ù��������ڵ������������ѡ������
    std::vector<NXOpen::DisplayableObject*> objects3(1);
    objects3[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(2));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder3;
    editSettingsBuilder3 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects3);

    // �������������������
    std::vector<NXOpen::Drafting::BaseEditSettingsBuilder*> editsettingsbuilders1(3);
    editsettingsbuilders1[0] = editSettingsBuilder1;
    editsettingsbuilders1[1] = editSettingsBuilder2;
    editsettingsbuilders1[2] = editSettingsBuilder3;
    workPart->SettingsManager()->ProcessForMultipleObjectsSettings(editsettingsbuilders1);

    // �����Ϊ"blockfont"�����嵽��������
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

    // �������б༭������������Ϊ����ӵ�����(����1)
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);


    // �������ж�����ı���СΪ3.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5);

    // �������ж�����ַ��������Ϊ1.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    // �������ж�����ı���߱�Ϊ0.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    // �ύ���б༭���ò���ȡ�������
    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder2->Commit();

    NXOpen::NXObject* nXObject2;
    nXObject2 = editSettingsBuilder3->Commit();

    NXOpen::NXObject* nXObject3;
    nXObject3 = editSettingsBuilder1->Commit();

    // ���ٱ༭���ù��������ͷ���Դ
    editSettingsBuilder2->Destroy();
    editSettingsBuilder3->Destroy();
    editSettingsBuilder1->Destroy();
    */

/*����д�Ĵ���
        // ��ȡUIʵ��
    UI* theUI = UI::GetUI();

    // ��ȡѡ�ж��������
    int numSelected = theUI->SelectionManager()->GetNumSelectedObjects();

    // ����Ƿ���ѡ�ж���
    if (numSelected == 0) {
        uc1601("û��ѡ�ж���", 1);
        return;
    }

    // ������������ָ��
    //NXOpen::Part* workPart = theUI->Session()->Parts()->Work();

    try {
        // �����洢ѡ�ж��������
        std::vector<NXOpen::DisplayableObject*> selectedObjects(numSelected);

        // ��ȡ����ѡ�еĶ���ת��Ϊ���ι��������
        for (int i = 0; i < numSelected; i++) {
            selectedObjects[i] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(
                theUI->SelectionManager()->GetSelectedObject(i));

            // ���ת���Ƿ�ɹ�
            if (!selectedObjects[i]) {
                uc1601("ѡ�еĶ����а����Ǽ��ι��������", 1);
                return;
            }
        }

        // ��������������������ѡ�ж���ĵ���������
        NXOpen::Annotations::EditSettingsBuilder* builder =
            workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(selectedObjects);

        // ������岢��ȡ����
        int fontIndex = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

        // ����������ı���ʽ
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex);
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(1.5); // �������޸ĺ��3.5��С
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
        builder->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

        // �ύ�޸Ĳ��ͷ���Դ
        NXOpen::NXObject* result = builder->Commit();
        builder->Destroy();

        // ��ʾ�û��޸����
        char message[100];
        sprintf(message, "�ɹ��޸�%d�����ι�������������", numSelected);
        uc1601(message, 2);

    }
    catch (const NXOpen::NXException& e) {
        // ʹ��NXException::Message()��ȡ��ȷ�Ĵ�����Ϣ
        std::string errorMsg = "���������з�������: " + std::string(e.Message());
        uc1601(errorMsg.c_str(), 1);
    }

    catch (...) {
        // ��������δ֪�쳣
        uc1601("���������з���δ֪����", 1);
    }
    */



    // ��ȡUIʵ�����ڷ���ѡ�������
    UI* theUI = UI::GetUI();


    try {

        // ��ȡѡ�ж��������
        int numSelected = theUI->SelectionManager()->GetNumSelectedObjects();
       
        // ����Ƿ���ѡ�ж���
        if (numSelected == 0) {
            uc1601("û��ѡ�ж���", 1);
            return;
        }
        // �����洢ѡ�ж��������
        std::vector<NXOpen::DisplayableObject*> objects1(numSelected);

        
        // ��ȡ����ѡ�еĶ���ת��Ϊ���ι��������
        for (int i = 0; i < numSelected; i++) {
            objects1[i] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(
                theUI->SelectionManager()->GetSelectedObject(i));

            // ���ת���Ƿ�ɹ�
            if (!objects1[i]) {
                uc1601("ѡ�еĶ����а����Ǽ��ι��������", 1);
                return;
            }
        }
                // ����ѡ�ж���ĵ���������
        NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1 =
        workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);

        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx));
        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
        editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

        NXOpen::NXObject* nXObject1;
        nXObject1 = editSettingsBuilder1->Commit();
        if (numSelected>1)//��������1������ÿ����Ҫ����
        {
            std::vector<std::vector<NXOpen::DisplayableObject*>> vecOfVecs(numSelected - 1, std::vector<NXOpen::DisplayableObject*>(1));
            NXOpen::Annotations::EditSettingsBuilder** editSettingsBuilderArray = new NXOpen::Annotations::EditSettingsBuilder * [numSelected - 1];

            for (int i = 1; i < numSelected; i++) {
                vecOfVecs[i-1][0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedObject(i));
                editSettingsBuilderArray[i - 1] = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(vecOfVecs[i - 1]);

                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx));
                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
                editSettingsBuilderArray[i - 1]->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
                nXObject1 = editSettingsBuilderArray[i - 1]->Commit();
                editSettingsBuilderArray[i - 1]->Destroy();
            }

        }
        

        // ���ٱ༭���ù��������ͷ���Դ
        editSettingsBuilder1->Destroy();
 

        // ��ʾ�û��޸����
        char message[100];
        sprintf(message, "�ɹ��޸�%d�����ι�������������", numSelected);
        uc1601(message, 2);

    }
    catch (const NXOpen::NXException& e) {
        // ʹ��NXException::Message()��ȡ��ȷ�Ĵ�����Ϣ
        std::string errorMsg = "���������з�������: " + std::string(e.Message());
        uc1601(errorMsg.c_str(), 1);
    }

    catch (...) {
        // ��������δ֪�쳣
        uc1601("���������з���δ֪����", 1);
    }


    /*

    // ������������ѡ������������������û���ѡ��������ע�������ƿ�
   
    std::vector<NXOpen::DisplayableObject*> objects1(3);
     
    objects1[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(0));
    objects1[1] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(1));
    objects1[2] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(2));

    // �����༭���ù���������������������ѡ������
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder1;
    editSettingsBuilder1 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects1);



    // �����༭���ù��������ڵ�������ڶ���ѡ������
    std::vector<NXOpen::DisplayableObject*> objects2(1);
    objects2[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(1));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder2;
    editSettingsBuilder2 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects2);

    // �����༭���ù��������ڵ������������ѡ������
    std::vector<NXOpen::DisplayableObject*> objects3(1);
    objects3[0] = dynamic_cast<NXOpen::Annotations::DraftingFcf*>(theUI->SelectionManager()->GetSelectedTaggedObject(2));
    NXOpen::Annotations::EditSettingsBuilder* editSettingsBuilder3;
    editSettingsBuilder3 = workPart->SettingsManager()->CreateAnnotationEditSettingsBuilder(objects3);

    // �������������������
 
    // �����Ϊ"blockfont"�����嵽��������
    int fontIndex1;
    fontIndex1 = workPart->Fonts()->AddFont("blockfont", NXOpen::FontCollection::TypeNx);

    // �������б༭������������Ϊ����ӵ�����
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextFont(fontIndex1);


    // �������ж�����ı���СΪ3.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextSize(3.5);

    // �������ж�����ַ��������Ϊ1.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextCharSpaceFactor(1.5);

    // �������ж�����ı���߱�Ϊ0.5
    editSettingsBuilder1->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder2->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);
    editSettingsBuilder3->AnnotationStyle()->LetteringStyle()->SetGeneralTextAspectRatio(0.5);

    // �ύ���б༭���ò���ȡ�������
    NXOpen::NXObject* nXObject1;
    nXObject1 = editSettingsBuilder3->Commit();
    nXObject1 = editSettingsBuilder2->Commit();
    nXObject1 = editSettingsBuilder1->Commit();
    

    


    // ���ٱ༭���ù��������ͷ���Դ
    editSettingsBuilder3->Destroy();
    editSettingsBuilder2->Destroy();
    editSettingsBuilder1->Destroy();
    
    */
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


