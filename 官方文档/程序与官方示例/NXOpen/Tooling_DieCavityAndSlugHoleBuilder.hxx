#ifndef NXOpen_TOOLING_DIECAVITYANDSLUGHOLEBUILDER_HXX_INCLUDED
#define NXOpen_TOOLING_DIECAVITYANDSLUGHOLEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Tooling_DieCavityAndSlugHoleBuilder.ja
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
#include <NXOpen/SelectObject.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/Tooling_DieCavityAndSlugHoleBuilder.hxx>
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
        class DieCavityAndSlugHoleBuilder;
    }
    class Builder;
    class Expression;
    class SelectBodyList;
    class SelectSketch;
    namespace Tooling
    {
        class _DieCavityAndSlugHoleBuilderBuilder;
        class DieCavityAndSlugHoleBuilderImpl;
        /** Represents die cavity and slug hole builder.  <br> To create a new instance of this class, use @link NXOpen::Tooling::ProgressiveDieManager::CreateDieCavityAndSlugHoleBuilder  NXOpen::Tooling::ProgressiveDieManager::CreateDieCavityAndSlugHoleBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        DieOffsetValue </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        DieSameOffsetValue </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        NormalBottomBackPlateSlug </td> <td> 
         
        Fillet </td> </tr> 

        <tr><td> 
         
        NormalCavity </td> <td> 
         
        TaperAngle </td> </tr> 

        <tr><td> 
         
        NormalClearance </td> <td> 
         
        0.05 </td> </tr> 

        <tr><td> 
         
        NormalClearanceOption </td> <td> 
         
        Constant </td> </tr> 

        <tr><td> 
         
        NormalDieShoeSlug </td> <td> 
         
        Fillet </td> </tr> 

        <tr><td> 
         
        NormalForEachScrap1 </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        NormalForEachScrap2 </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        NormalOffsetSide </td> <td> 
         
        DieSide </td> </tr> 

        <tr><td> 
         
        NormalRenameDialog </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        NormalSlugParameter1 </td> <td> 
         
        3 </td> </tr> 

        <tr><td> 
         
        NormalSlugParameter2 </td> <td> 
         
        -3 </td> </tr> 

        <tr><td> 
         
        NormalSlugParameter3 </td> <td> 
         
        2 </td> </tr> 

        <tr><td> 
         
        NormalSlugParameter4 </td> <td> 
         
        3 </td> </tr> 

        <tr><td> 
         
        OffsetLinearDimension.Value </td> <td> 
         
        3 (millimeters part), 0.12 (inches part) </td> </tr> 

        <tr><td> 
         
        Position </td> <td> 
         
        Bottom </td> </tr> 

        <tr><td> 
         
        SlugHoleHeightLinearDimension.Value </td> <td> 
         
        100 (millimeters part), 4 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX11.0.0.  <br>  
        */
        class NXOPENCPP_TOOLINGEXPORT  DieCavityAndSlugHoleBuilder : public NXOpen::Builder
        {
            /** Specifies the position of piercing inserts, for EDW only */
            public: enum InsertPositionItems
            {
                InsertPositionItemsTop/** The position is top side */,
                InsertPositionItemsBottom/** The position is bottom side  */
            };

            /** Specifies the type of cavity. */
            public: enum CavityTypeItems
            {
                CavityTypeItemsTaperAngle/** the taper angle type */,
                CavityTypeItemsStep/** the step type */,
                CavityTypeItemsRoundStep1/** the round step1 type */,
                CavityTypeItemsRoundStep2/** the round step2 type */
            };

            /** Specifies the type of bottom plate slug. */
            public: enum BottomPlateSlugItems
            {
                BottomPlateSlugItemsFillet/** Bottom plate slug type is fillet */,
                BottomPlateSlugItemsRectangle/** Bottom plate slug type is rectangle */,
                BottomPlateSlugItemsCircle/** Bottom plate slug type is circle */,
                BottomPlateSlugItemsMickey/** Bottom plate slug type is mickey */,
                BottomPlateSlugItemsClearance/** Bottom plate slug type is clearance */,
                BottomPlateSlugItemsSlotVer/** Bottom plate slug type is slot vertical */,
                BottomPlateSlugItemsSlotHor/** Bottom plate slug type is slot horizontal */,
                BottomPlateSlugItemsNone/** Bottom plate slug type is none */
            };

            /** Specifies the type of die shoe slug. */
            public: enum DieShoeSlugTypeItems
            {
                DieShoeSlugTypeItemsFillet/** Die shoe slug type is fillet */,
                DieShoeSlugTypeItemsRectangle/** Die shoe slug type is rectangle */,
                DieShoeSlugTypeItemsCircle/** Die shoe slug type is circle */,
                DieShoeSlugTypeItemsMickey/** Die shoe slug type is mickey */,
                DieShoeSlugTypeItemsClearance/** Die shoe slug type is clearance */,
                DieShoeSlugTypeItemsSlotVer/** Die shoe slug type is slot vertical */,
                DieShoeSlugTypeItemsSlotHor/** Die shoe slug type is slot horizontal */,
                DieShoeSlugTypeItemsNone/** Die shoe slug type is none */
            };

            /** Specifies the design option of piercing insert. */
            public: enum ClearanceOptionItems
            {
                ClearanceOptionItemsConstant/** The design option is normal */,
                ClearanceOptionItemsVariable/** The design option is fineblanking */
            };

            /** Specifies the offset side of normal pierce insert design. */
            public: enum OffsetSideOptionItems
            {
                OffsetSideOptionItemsDieSide/** The offset side is die */,
                OffsetSideOptionItemsPunchSide/** The offset side is punch */
            };

            private: DieCavityAndSlugHoleBuilderImpl * m_diecavityandslugholebuilder_impl;
            private: friend class  _DieCavityAndSlugHoleBuilderBuilder;
            protected: DieCavityAndSlugHoleBuilder();
            public: ~DieCavityAndSlugHoleBuilder();
            /**Returns  the select scrap 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBodyList * SelectScrap
            (
            );
            /**Returns  the position 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DieCavityAndSlugHoleBuilder::InsertPositionItems Position
            (
            );
            /**Sets  the position 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetPosition
            (
                NXOpen::Tooling::DieCavityAndSlugHoleBuilder::InsertPositionItems position /** position */ 
            );
            /**Returns  the normal cavity 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DieCavityAndSlugHoleBuilder::CavityTypeItems NormalCavity
            (
            );
            /**Sets  the normal cavity 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalCavity
            (
                NXOpen::Tooling::DieCavityAndSlugHoleBuilder::CavityTypeItems normalCavity /** normalcavity */ 
            );
            /**Returns  the normal slug parameter1 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double NormalSlugParameter1
            (
            );
            /**Sets  the normal slug parameter1 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalSlugParameter1
            (
                double normalSlugParameter1 /** normalslugparameter1 */ 
            );
            /**Returns  the normal slug parameter2 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double NormalSlugParameter2
            (
            );
            /**Sets  the normal slug parameter2 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalSlugParameter2
            (
                double normalSlugParameter2 /** normalslugparameter2 */ 
            );
            /**Returns  the normal slug parameter3 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double NormalSlugParameter3
            (
            );
            /**Sets  the normal slug parameter3 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalSlugParameter3
            (
                double normalSlugParameter3 /** normalslugparameter3 */ 
            );
            /**Returns  the normal slug parameter4 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double NormalSlugParameter4
            (
            );
            /**Sets  the normal slug parameter4 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalSlugParameter4
            (
                double normalSlugParameter4 /** normalslugparameter4 */ 
            );
            /**Returns  the slug hole height linear dimension 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * SlugHoleHeightLinearDimension
            (
            );
            /**Returns  the offset linear dimension 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * OffsetLinearDimension
            (
            );
            /**Returns  the normal bbpslug 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DieCavityAndSlugHoleBuilder::BottomPlateSlugItems NormalBottomBackPlateSlug
            (
            );
            /**Sets  the normal bbpslug 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalBottomBackPlateSlug
            (
                NXOpen::Tooling::DieCavityAndSlugHoleBuilder::BottomPlateSlugItems normalBottomBackPlateSlug /** normalbottombackplateslug */ 
            );
            /**Returns  the normal for each scrap1 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: bool NormalForEachScrap1
            (
            );
            /**Sets  the normal for each scrap1 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalForEachScrap1
            (
                bool normalForEachScrap1 /** normalforeachscrap1 */ 
            );
            /**Returns  the normal dsslug 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DieCavityAndSlugHoleBuilder::DieShoeSlugTypeItems NormalDieShoeSlug
            (
            );
            /**Sets  the normal dsslug 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalDieShoeSlug
            (
                NXOpen::Tooling::DieCavityAndSlugHoleBuilder::DieShoeSlugTypeItems normalDieShoeSlug /** normaldieshoeslug */ 
            );
            /**Returns  the normal for each scrap2 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: bool NormalForEachScrap2
            (
            );
            /**Sets  the normal for each scrap2 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalForEachScrap2
            (
                bool normalForEachScrap2 /** normalforeachscrap2 */ 
            );
            /** Edit offset value table for die 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void DieEditOffsetValueTable
            (
            );
            /**Returns  the die same offset value 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: bool DieSameOffsetValue
            (
            );
            /**Sets  the die same offset value 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetDieSameOffsetValue
            (
                bool dieSameOffsetValue /** diesameoffsetvalue */ 
            );
            /**Returns  the die offset value 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double DieOffsetValue
            (
            );
            /**Sets  the die offset value 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetDieOffsetValue
            (
                double dieOffsetValue /** dieoffsetvalue */ 
            );
            /**Returns  the select sketch 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectSketch * SelectSketch
            (
            );
            /**Returns  the normal select pierce die insert 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectBodyList * NormalSelectPierceDieInsert
            (
            );
            /** Create normal cavity and slug 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void NormalCreateCavityAndSlug
            (
            );
            /**Returns  the normal clearance option 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DieCavityAndSlugHoleBuilder::ClearanceOptionItems NormalClearanceOption
            (
            );
            /**Sets  the normal clearance option 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalClearanceOption
            (
                NXOpen::Tooling::DieCavityAndSlugHoleBuilder::ClearanceOptionItems normalClearanceOption /** normalclearanceoption */ 
            );
            /**Returns  the normal clearance 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double NormalClearance
            (
            );
            /**Sets  the normal clearance 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalClearance
            (
                double normalClearance /** normalclearance */ 
            );
            /**Returns  the normal offset side 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Tooling::DieCavityAndSlugHoleBuilder::OffsetSideOptionItems NormalOffsetSide
            (
            );
            /**Sets  the normal offset side 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalOffsetSide
            (
                NXOpen::Tooling::DieCavityAndSlugHoleBuilder::OffsetSideOptionItems normalOffsetSide /** normaloffsetside */ 
            );
            /**Returns  the normal rename dialog 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: bool NormalRenameDialog
            (
            );
            /**Sets  the normal rename dialog 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetNormalRenameDialog
            (
                bool normalRenameDialog /** normalrenamedialog */ 
            );
            /**Returns  the parent part name to create insert. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXString ParentPartName
            (
            );
            /**Sets  the parent part name to create insert. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: void SetParentPartName
            (
                const NXString & parentPartName /** Specifies the parent part name */
            );
            /**Sets  the parent part name to create insert. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            void SetParentPartName
            (
                const char * parentPartName /** Specifies the parent part name */
            );
            /**Returns  the new component names. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXString NewPartNames
            (
            );
            /**Sets  the new component names. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: void SetNewPartNames
            (
                const NXString & newPartNames /** Specifies the new component names */
            );
            /**Sets  the new component names. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            void SetNewPartNames
            (
                const char * newPartNames /** Specifies the new component names */
            );
            /**Returns  the super offset spreadsheet 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXString SelectOffsetSpreadsheet
            (
            );
            /**Sets  the super offset spreadsheet 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetSelectOffsetSpreadsheet
            (
                const NXString & filename /** filename */ 
            );
            /**Sets  the super offset spreadsheet 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : prog_die_wizard ("UG/Progressive Die Wizard") */
            void SetSelectOffsetSpreadsheet
            (
                const char * filename /** filename */ 
            );
            /**Returns  the previous slug parameter A 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double SlugPreviousParameterA
            (
            );
            /**Sets  the previous slug parameter A 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetSlugPreviousParameterA
            (
                double slugPreviousParameterA /** slugpreviousparametera */ 
            );
            /**Returns  the previous slug parameter C1 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double SlugPreviousParameterC1
            (
            );
            /**Sets  the previous slug parameter C1 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetSlugPreviousParameterC1
            (
                double slugPreviousParameterC1 /** slugpreviousparameterc1 */ 
            );
            /**Returns  the previous slug parameter C2 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: double SlugPreviousParameterC2
            (
            );
            /**Sets  the previous slug parameter C2 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : ug_mold_design ("UG MOLD") OR prog_die_wizard ("UG/Progressive Die Wizard") */
            public: void SetSlugPreviousParameterC2
            (
                double slugPreviousParameterC2 /** slugpreviousparameterc2 */ 
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
