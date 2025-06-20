#ifndef NXOpen_TOOLING_GENERALINSERTBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_GENERALINSERTBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_GeneralInsertBuilder.ja
//
//  Generated by:
//     apiwrap
//
//  WARNING:
//    This file is automatically generated - do not edit by hand
//
#ifdef _MSC_VER
#pragma once
#endif

#include <NXOpen/NXDeprecation.hxx>
#include <vector>
#include <NXOpen/NXString.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/Expression.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_GeneralInsertBuilder.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_tooling_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Tooling
    {
        class GeneralInsertBuilder;
    }
    namespace Assemblies
    {
        class SelectComponent;
    }
    namespace Assemblies
    {
        class SelectComponentList;
    }
    class Builder;
    class Expression;
    class Section;
    class SelectFaceList;
    namespace Tooling
    {
        class _GeneralInsertBuilderBuilder;
        class GeneralInsertBuilderImpl;
        /** General Insert Design Builder of PDW and EDW. A Body is returned by this builder.  <br> To create a new instance of this class, use @link NXOpen::Tooling::ProgressiveDieManager::CreateGeneralInsertBuilder  NXOpen::Tooling::ProgressiveDieManager::CreateGeneralInsertBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        BoxOffset.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        Clearance.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        GenerateType </td> <td> 
         
        BoundingBox </td> </tr> 

        <tr><td> 
         
        Height.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        NegativeX.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        NegativeY.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        NegativeZ.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        NormalRenameDialog </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ParentPart </td> <td> 
         
        NoParent </td> </tr> 

        <tr><td> 
         
        PositiveX.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        PositiveY.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        PositiveZ.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        Radius.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        <tr><td> 
         
        SettingWithoutFalseBody </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        StartPosition.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX10.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  GeneralInsertBuilder : public NXOpen::Builder
        {
            /** Specify the insert operation type. */
            public: enum Types
            {
                TypesCreateInsert/** create insert */ ,
                TypesEditInsert/** edit insert */ ,
                TypesDeleteInsert/** delete insert */ 
            };

            /** Specify the part parent of insert part. */
            public: enum ParentOption
            {
                ParentOptionNoParent/** no parent */ 
            };

            /** Specify the creation method of insert. */
            public: enum GenerateMethod
            {
                GenerateMethodBoundingBox/** bounding box */ ,
                GenerateMethodUserDefined/** user defined */ 
            };

            private: GeneralInsertBuilderImpl * m_generalinsertbuilder_impl;
            private: friend class  _GeneralInsertBuilderBuilder;
            protected: GeneralInsertBuilder();
            public: ~GeneralInsertBuilder();
            /**Returns  the operation type of general insert. 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::GeneralInsertBuilder::Types Type
            (
            );
            /**Sets  the operation type of general insert. 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetType
            (
                NXOpen::Tooling::GeneralInsertBuilder::Types type /** type */ 
            );
            /**Returns  the select face 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectFaceList * SelectFace
            (
            );
            /**Returns  the parent part 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::GeneralInsertBuilder::ParentOption ParentPart
            (
            );
            /**Sets  the parent part 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetParentPart
            (
                NXOpen::Tooling::GeneralInsertBuilder::ParentOption parentPart /** parentpart */ 
            );
            /**Returns  the generate type 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::GeneralInsertBuilder::GenerateMethod GenerateType
            (
            );
            /**Sets  the generate type 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetGenerateType
            (
                NXOpen::Tooling::GeneralInsertBuilder::GenerateMethod generateType /** generatetype */ 
            );
            /**Returns  the reverse insert direction 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool ReverseInsertDirection
            (
            );
            /**Sets  the reverse insert direction 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetReverseInsertDirection
            (
                bool reverseInsertDirection /** reverseinsertdirection */ 
            );
            /**Returns  the box offset 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * BoxOffset
            (
            );
            /**Returns  the radius 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Radius
            (
            );
            /** Create datum on selected face 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void CreateDatum
            (
            );
            /**Returns  the outer profile 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * OuterProfile
            (
            );
            /**Returns  the height 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Height
            (
            );
            /**Returns  the start position 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * StartPosition
            (
            );
            /**Returns  the clearance 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Clearance
            (
            );
            /**Returns  the positive x 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * PositiveX
            (
            );
            /**Returns  the negative x 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * NegativeX
            (
            );
            /**Returns  the positive y 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * PositiveY
            (
            );
            /**Returns  the negative y 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * NegativeY
            (
            );
            /**Returns  the positive z 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * PositiveZ
            (
            );
            /**Returns  the negative z 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * NegativeZ
            (
            );
            /** Move attribute from Attribute from Spreadsheet to Attribute of Object 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void AddFromSpreadsheetAttributeList
            (
            );
            /** Create new attribute in Attribute of Object 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void NewAttribute
            (
            );
            /** Remove attribute from Attribute of Object 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void DeleteAttribute
            (
            );
            /**Returns  the setting without false body 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool SettingWithoutFalseBody
            (
            );
            /**Sets  the setting without false body 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetSettingWithoutFalseBody
            (
                bool settingWithoutFalseBody /** settingwithoutfalsebody */ 
            );
            /**Returns  the normal rename dialog 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool NormalRenameDialog
            (
            );
            /**Sets  the normal rename dialog 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalRenameDialog
            (
                bool normalRenameDialog /** normalrenamedialog */ 
            );
            /**Returns  the insert to edit 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Assemblies::SelectComponent * InsertToEdit
            (
            );
            /**Returns  the insert to delete 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: NXOpen::Assemblies::SelectComponentList * InsertToDelete
            (
            );
            /**Returns  the parent part name of parent part 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ParentPartName
            (
            );
            /**Sets  the parent part name of parent part 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetParentPartName
            (
                const NXString & parentPartName /** parentpartname */ 
            );
            /**Sets  the parent part name of parent part 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            void SetParentPartName
            (
                const char * parentPartName /** parentpartname */ 
            );
            /**Returns  the wizard type 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: int WizardType
            (
            );
            /**Sets  the wizard type 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetWizardType
            (
                int wizardType /** wizardtype */ 
            );
            /** Returns the title name of Attribute Of Object Tree list 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void GetAttributeTitleName
            (
                std::vector<NXString> & titleName /**the list of title*/
            );
            /** Sets the title name of Attribute Of Object Tree list 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetAttributeTitleName
            (
                std::vector<NXString> & titleName /**the list of title*/
            );
            /** Returns the value text of Attribute Of Object Tree list 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void GetAttributeValueText
            (
                std::vector<NXString> & valueText /**the list of title*/
            );
            /** Sets the title name of Attribute Of Object Tree list 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetAttributeValueText
            (
                std::vector<NXString> & valueText /**the list of title*/
            );
            /**Returns  the reference CSYS orientation 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Matrix3x3 OrientationReferenceCSYS
            (
            );
            /**Sets  the reference CSYS orientation 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetOrientationReferenceCSYS
            (
                const NXOpen::Matrix3x3 & matrix /** matrix */ 
            );
            /** Creates user defined insert. The refset defines the insert which is TRUE or FALSE body 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void CreateUserDefinedInsert
            (
                const NXString & refset /** refset */ 
            );
            /** Creates user defined insert. The refset defines the insert which is TRUE or FALSE body 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            void CreateUserDefinedInsert
            (
                const char * refset /** refset */ 
            );
        };
    }
}

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef __GNUC__
#ifndef NX_NO_GCC_DEPRECATION_WARNINGS
#pragma GCC diagnostic warning "-Wdeprecated-declarations"
#endif
#endif

#undef EXPORTLIBRARY
#endif
