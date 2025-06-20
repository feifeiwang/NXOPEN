#ifndef NXOpen_ANNOTATIONS_EDITSYMBOLDISPLAYBUILDER_HXX_INCLUDED
#define NXOpen_ANNOTATIONS_EDITSYMBOLDISPLAYBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Annotations_EditSymbolDisplayBuilder.ja
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
#include <NXOpen/Annotations_EditSymbolDisplayBuilder.hxx>
#include <NXOpen/Annotations_StyleBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/libnxopencpp_annotations_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Annotations
    {
        class EditSymbolDisplayBuilder;
    }
    namespace Annotations
    {
        class StyleBuilder;
    }
    class Builder;
    class NXColor;
    namespace Annotations
    {
        class _EditSymbolDisplayBuilderBuilder;
        class EditSymbolDisplayBuilderImpl;
        /** Represents a EditSymbolPieces builder  <br> To create a new instance of this class, use @link NXOpen::Annotations::CustomSymbolCollection::EditSymbolDisplayBuilder  NXOpen::Annotations::CustomSymbolCollection::EditSymbolDisplayBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Font </td> <td> 
         
        Solid </td> </tr> 

        <tr><td> 
         
        Width </td> <td> 
         
        Thin </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_ANNOTATIONSEXPORT  EditSymbolDisplayBuilder : public NXOpen::Builder
        {
            /** The Enum represent font types. @link NXOpen::Annotations::EditSymbolDisplayBuilder::FontTypes NXOpen::Annotations::EditSymbolDisplayBuilder::FontTypes@endlink  and 
                    @link NXOpen::Annotations::EditSymbolDisplayBuilder::SetFontTypes NXOpen::Annotations::EditSymbolDisplayBuilder::SetFontTypes@endlink  will set this font type at builder side and
                    will be used to apply the same on the selected contents after commit*/
            public: enum FontTypes
            {
                FontTypesSolid/** Solid type*/,
                FontTypesDashed/** Dashed Type */,
                FontTypesPhantom/** Phantom Type */,
                FontTypesCenterline/** Centerline */,
                FontTypesDotted/** Dotted Type */,
                FontTypesLongDashed/** Long Dash */,
                FontTypesDottedDashed/** Dotted Dash */
            };

            /** The Enum represent width types @link NXOpen::Annotations::EditSymbolDisplayBuilder::WidthTypes NXOpen::Annotations::EditSymbolDisplayBuilder::WidthTypes@endlink  and 
                    @link NXOpen::Annotations::EditSymbolDisplayBuilder::SetWidthTypes NXOpen::Annotations::EditSymbolDisplayBuilder::SetWidthTypes@endlink  will set this width type at builder side and
                    will be used to apply the same on the selected contents after commit*/
            public: enum WidthTypes
            {
                WidthTypesThin/** Thin */,
                WidthTypesNormal/** Normal */,
                WidthTypesThick/** Thick */,
                WidthTypesThicknessOne = 6/** Width One */,
                WidthTypesThicknessTwo/** Width Two */,
                WidthTypesThicknessThree/** Width Three */,
                WidthTypesThicknessFour/** Width Four */,
                WidthTypesThicknessFive/** Width Five */,
                WidthTypesThicknessSix/** Width Six */,
                WidthTypesThicknessSeven/** Width Seven */,
                WidthTypesThicknessEight/** Width Eight */,
                WidthTypesThicknessNine/** Width Nine */
            };

            private: EditSymbolDisplayBuilderImpl * m_editsymboldisplaybuilder_impl;
            private: friend class  _EditSymbolDisplayBuilderBuilder;
            protected: EditSymbolDisplayBuilder();
            public: ~EditSymbolDisplayBuilder();
            /**Returns  the color picker 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * Color
            (
            );
            /**Sets  the color picker 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetColor
            (
                NXOpen::NXColor * colorPicker /** colorpicker */ 
            );
            /**Returns  the enum font 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::EditSymbolDisplayBuilder::FontTypes Font
            (
            );
            /**Sets  the enum font 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetFont
            (
                NXOpen::Annotations::EditSymbolDisplayBuilder::FontTypes enumFont /** enumfont */ 
            );
            /**Returns  the enum width 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::EditSymbolDisplayBuilder::WidthTypes Width
            (
            );
            /**Sets  the enum width 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SetWidth
            (
                NXOpen::Annotations::EditSymbolDisplayBuilder::WidthTypes enumWidth /** enumwidth */ 
            );
            /**Returns  the style 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Annotations::StyleBuilder * Style
            (
            );
            /** Stores index of the custom symbol component for editing display 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void SelectComponent
            (
                const NXString & sid /** sid of selected component*/
            );
            /** Stores index of the custom symbol component for editing display 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            void SelectComponent
            (
                const char * sid /** sid of selected component*/
            );
            /** Apply text preferences 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void ApplyStyle
            (
            );
            /** Apply color font width 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : drafting ("DRAFTING") */
            public: void ApplyCfw
            (
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
