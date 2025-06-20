#ifndef NXOpen_DRAWINGS_STANDARDVIEWSBUILDER_HXX_INCLUDED
#define NXOpen_DRAWINGS_STANDARDVIEWSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Drawings_StandardViewsBuilder.ja
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
#include <NXOpen/Drawings_DraftingComponentSelectionBuilder.hxx>
#include <NXOpen/Drawings_HiddenObjectsBuilder.hxx>
#include <NXOpen/Drawings_MultipleViewPlacementBuilder.hxx>
#include <NXOpen/Drawings_StandardViewsBuilder.hxx>
#include <NXOpen/Drawings_ViewCenterCoordinateBuilder.hxx>
#include <NXOpen/Drawings_ViewPlacementBuilder.hxx>
#include <NXOpen/Drawings_ViewScaleBuilder.hxx>
#include <NXOpen/Drawings_ViewStyleBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/libnxopencpp_drawings_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Drawings
    {
        class StandardViewsBuilder;
    }
    class Builder;
    namespace Drawings
    {
        class DraftingComponentSelectionBuilder;
    }
    namespace Drawings
    {
        class HiddenObjectsBuilder;
    }
    namespace Drawings
    {
        class MultipleViewPlacementBuilder;
    }
    namespace Drawings
    {
        class ViewCenterCoordinateBuilder;
    }
    namespace Drawings
    {
        class ViewPlacementBuilder;
    }
    namespace Drawings
    {
        class ViewScaleBuilder;
    }
    namespace Drawings
    {
        class ViewStyleBuilder;
    }
    class Part;
    namespace Drawings
    {
        class _StandardViewsBuilderBuilder;
        class StandardViewsBuilderImpl;
        /** This builder allows the user to create a Drawing View  <br> To create a new instance of this class, use @link NXOpen::Drawings::DraftingViewCollection::CreateStandardViewsBuilder  NXOpen::Drawings::DraftingViewCollection::CreateStandardViewsBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        FirstCorner.AlignmentMethod (deprecated) </td> <td> 
         
        Infer </td> </tr> 

        <tr><td> 
         
        FirstCorner.AlignmentOption (deprecated) </td> <td> 
         
        ToView </td> </tr> 

        <tr><td> 
         
        LayoutType </td> <td> 
         
        FrontTopRightIso </td> </tr> 

        <tr><td> 
         
        MarginBetweenViews </td> <td> 
         
        5 (millimeters part), 0.25 (inches part) </td> </tr> 

        <tr><td> 
         
        MarginToBorder </td> <td> 
         
        20 (millimeters part), 0.75 (inches part) </td> </tr> 

        <tr><td> 
         
        MultipleViewPlacement.OptionType </td> <td> 
         
        Center </td> </tr> 

        <tr><td> 
         
        Scale.Denominator </td> <td> 
         
        1.0 </td> </tr> 

        <tr><td> 
         
        Scale.Numerator </td> <td> 
         
        1.0 </td> </tr> 

        <tr><td> 
         
        Scale.ScaleType </td> <td> 
         
        Ratio </td> </tr> 

        <tr><td> 
         
        SecondaryComponents.ObjectType </td> <td> 
         
        PrimaryGeometry </td> </tr> 

        <tr><td> 
         
        ViewStyle.ViewStyleGeneral.AngleValue </td> <td> 
         
        0.0 </td> </tr> 

        <tr><td> 
         
        ViewStyle.ViewStyleOrientation.HingeLine.ReverseDirection </td> <td> 
         
        false </td> </tr> 

        <tr><td> 
         
        ViewStyle.ViewStyleOrientation.HingeLine.VectorOption </td> <td> 
         
        Inferred </td> </tr> 

        <tr><td> 
         
        ViewStyle.ViewStyleOrientation.Ovt.AssociativeOrientation </td> <td> 
         
        0 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.1.  <br>  
        */
        class NXOPENCPP_DRAWINGSEXPORT  StandardViewsBuilder : public NXOpen::Builder
        {
            /** The view Layout type */
            public: enum Type
            {
                TypeFrontTop/**front, top */,
                TypeFrontRight/**front, right */,
                TypeFrontLeft/**front, left */,
                TypeFrontTopRight/**front, top, right*/,
                TypeFrontTopLeft/**front, top, left */,
                TypeFrontTopRightIso/**front, top, right, iso*/,
                TypeFrontTopLeftIso/**front, top, left, iso*/
            };

            /** The view type to create */
            public: enum View
            {
                ViewDrawing/** drawing (2d) views */,
                ViewBase/** base views */
            };

            /** The view Layout placement type (deprecated) */
            public: enum Placement
            {
                PlacementCenter/** center */ ,
                PlacementCorner/** corner */ 
            };

            private: StandardViewsBuilderImpl * m_standardviewsbuilder_impl;
            private: friend class  _StandardViewsBuilderBuilder;
            protected: StandardViewsBuilder();
            public: ~StandardViewsBuilder();
            /**Returns  the view type 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::StandardViewsBuilder::View ViewType
            (
            );
            /**Sets  the view type 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : nx_layout ("NX Layout") */
            public: void SetViewType
            (
                NXOpen::Drawings::StandardViewsBuilder::View viewType /** sets the view type. */
            );
            /**Returns  the Layout type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::StandardViewsBuilder::Type LayoutType
            (
            );
            /**Sets  the Layout type 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : nx_layout ("NX Layout") */
            public: void SetLayoutType
            (
                NXOpen::Drawings::StandardViewsBuilder::Type type /** sets the layout type. */
            );
            /**Returns  the Placement type 
             <br>  @deprecated Deprecated in NX6.0.2.  Use the type of the multiple view placement <br>  

             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX6.0.2.  Use the type of the multiple view placement") NXOpen::Drawings::StandardViewsBuilder::Placement PlacementType
            (
            );
            /**Sets  the Placement type 
             <br>  @deprecated Deprecated in NX6.0.2.  Use the type of the multiple view placement <br>  

             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : nx_layout ("NX Layout") */
            public:  NX_DEPRECATED("Deprecated in NX6.0.2.  Use the type of the multiple view placement") void SetPlacementType
            (
                NXOpen::Drawings::StandardViewsBuilder::Placement type /** sets the layout type. */
            );
            /**Returns  the margin to border 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: double MarginToBorder
            (
            );
            /**Sets  the margin to border 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : nx_layout ("NX Layout") */
            public: void SetMarginToBorder
            (
                double marginToBorder /** sets the margin to border. */
            );
            /**Returns  the margin between views 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: double MarginBetweenViews
            (
            );
            /**Sets  the margin between views 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : nx_layout ("NX Layout") */
            public: void SetMarginBetweenViews
            (
                double marginBetweenViews /** sets the margin between views. */
            );
            /**Returns  the view placement 
             <br>  @deprecated Deprecated in NX6.0.2.  Use GetMultipleViewPlacement instead <br>  

             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX6.0.2.  Use GetMultipleViewPlacement instead") NXOpen::Drawings::ViewPlacementBuilder * ViewPlacement
            (
            );
            /**Returns  the first corner view placement 
             <br>  @deprecated Deprecated in NX6.0.2.  Use the first corner of the multiple view placemnent builder instead <br>  

             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX6.0.2.  Use the first corner of the multiple view placemnent builder instead") NXOpen::Drawings::ViewPlacementBuilder * FirstCorner
            (
            );
            /**Returns  the second corner view placement 
             <br>  @deprecated Deprecated in NX6.0.2.  Use the second corner of the multiple view placemnent builder instead <br>  

             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX6.0.2.  Use the second corner of the multiple view placemnent builder instead") NXOpen::Drawings::ViewPlacementBuilder * SecondCorner
            (
            );
            /**Returns  the multiple view placement 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::MultipleViewPlacementBuilder * MultipleViewPlacement
            (
            );
            /**Returns  the part to use for base views 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Part * Part
            (
            );
            /**Sets  the part to use for base views 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : nx_layout ("NX Layout") */
            public: void SetPart
            (
                NXOpen::Part * part /** part */ 
            );
            /**Returns  the view scale 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::ViewScaleBuilder * Scale
            (
            );
            /**Returns  the autoscale mode for base view creation 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: bool Autoscale
            (
            );
            /**Sets  the autoscale mode for base view creation 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : nx_layout ("NX Layout") */
            public: void SetAutoscale
            (
                bool autoScale /** sets the auto-scale mode. */
            );
            /**Returns  the view style 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::ViewStyleBuilder * ViewStyle
            (
            );
            /**Returns  the center coordinate 
             <br>  Created in NX6.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::ViewCenterCoordinateBuilder * Coordinate
            (
            );
            /**Returns  the list of objects to not show in the view 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::HiddenObjectsBuilder * HiddenObjects
            (
            );
            /**Returns  the list of objects to not section in the view 
             <br>  Created in NX6.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::HiddenObjectsBuilder * NonSectionedObjects
            (
            );
            /**Returns  the list of secondary objects in the view 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Drawings::DraftingComponentSelectionBuilder * SecondaryComponents
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
