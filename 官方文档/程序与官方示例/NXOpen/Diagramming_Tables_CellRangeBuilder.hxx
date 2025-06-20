#ifndef NXOpen_DIAGRAMMING_TABLES_CELLRANGEBUILDER_HXX_INCLUDED
#define NXOpen_DIAGRAMMING_TABLES_CELLRANGEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Diagramming_Tables_CellRangeBuilder.ja
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
#include <NXOpen/Diagramming_RenderingPropertiesBuilder.hxx>
#include <NXOpen/Diagramming_Tables_CellRangeBuilder.hxx>
#include <NXOpen/Diagramming_Tables_Types.hxx>
#include <NXOpen/Diagramming_BaseTaggedObjectBuilder.hxx>
#include <NXOpen/libnxopencpp_diagramming_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Diagramming
    {
        namespace Tables
        {
            class CellRangeBuilder;
        }
    }
    namespace Diagramming
    {
        class BaseTaggedObjectBuilder;
    }
    namespace Diagramming
    {
        class RenderingPropertiesBuilder;
    }
    namespace Diagramming
    {
        namespace Tables
        {
            class _CellRangeBuilderBuilder;
            class CellRangeBuilderImpl;
            /**
                    Represents a CellRangeBuilder.
                     <br> This is a sub-builder class and cannot be directly instantiated  <br> 
             <br>  Created in NX10.0.0.  <br>  
            */
            class NXOPENCPP_DIAGRAMMINGEXPORT  CellRangeBuilder : public NXOpen::Diagramming::BaseTaggedObjectBuilder
            {
                private: CellRangeBuilderImpl * m_cellrangebuilder_impl;
                private: friend class  _CellRangeBuilderBuilder;
                protected: CellRangeBuilder();
                public: ~CellRangeBuilder();
                /**Returns  the can hide flag. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: bool CanHide
                (
                );
                /**Sets  the can hide flag. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetCanHide
                (
                    bool canHide /** canhide */ 
                );
                /**Returns  the hidden flag. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: bool Hidden
                (
                );
                /**Sets  the hidden flag. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetHidden
                (
                    bool hidden /** hidden */ 
                );
                /**Returns  the size. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: double Size
                (
                );
                /**Sets  the size. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetSize
                (
                    double size /** size */ 
                );
                /**Returns  the sizing method. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Diagramming::Tables::SizingMethod SizingMethod
                (
                );
                /**Sets  the sizing method. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetSizingMethod
                (
                    NXOpen::Diagramming::Tables::SizingMethod sizingMethod /** sizingmethod */ 
                );
                /**Returns  the bottom border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Diagramming::RenderingPropertiesBuilder * BottomBorder
                (
                );
                /**Sets  the bottom border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetBottomBorder
                (
                    NXOpen::Diagramming::RenderingPropertiesBuilder * properties /** properties */ 
                );
                /**Returns  the left border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Diagramming::RenderingPropertiesBuilder * LeftBorder
                (
                );
                /**Sets  the left border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetLeftBorder
                (
                    NXOpen::Diagramming::RenderingPropertiesBuilder * properties /** properties */ 
                );
                /**Returns  the right border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Diagramming::RenderingPropertiesBuilder * RightBorder
                (
                );
                /**Sets  the right border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetRightBorder
                (
                    NXOpen::Diagramming::RenderingPropertiesBuilder * properties /** properties */ 
                );
                /**Returns  the top border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Diagramming::RenderingPropertiesBuilder * TopBorder
                (
                );
                /**Sets  the top border rendering properties. 
                 <br>  Created in NX10.0.0.  <br>  
                 <br> License requirements : None */
                public: void SetTopBorder
                (
                    NXOpen::Diagramming::RenderingPropertiesBuilder * properties /** properties */ 
                );
            };
        }
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
