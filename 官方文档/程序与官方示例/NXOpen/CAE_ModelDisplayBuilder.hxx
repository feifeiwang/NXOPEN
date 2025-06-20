#ifndef NXOpen_CAE_MODELDISPLAYBUILDER_HXX_INCLUDED
#define NXOpen_CAE_MODELDISPLAYBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_ModelDisplayBuilder.ja
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
#include <NXOpen/CAE_ModelDisplayBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class ModelDisplayBuilder;
    }
    class Builder;
    class NXColor;
    namespace CAE
    {
        class _ModelDisplayBuilderBuilder;
        class ModelDisplayBuilderImpl;
        /** This class provides Model Display Data Support  <br> To create a new instance of this class, use @link NXOpen::CAE::CaePart::CreateModelDisplayBuilder  NXOpen::CAE::CaePart::CreateModelDisplayBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        ElemMaterialDisplayLaminateColor </td> <td> 
         
        181 </td> </tr> 

        <tr><td> 
         
        ElemMaterialDisplayNoMaterialColor </td> <td> 
         
        130 </td> </tr> 

        <tr><td> 
         
        ElemQualFailColor </td> <td> 
         
        186 </td> </tr> 

        <tr><td> 
         
        ElemQualFailShadedBorderColor </td> <td> 
         
        130 </td> </tr> 

        <tr><td> 
         
        ElemQualPassColor </td> <td> 
         
        50 </td> </tr> 

        <tr><td> 
         
        ElemQualPassTranslucency </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ElemQualPassType </td> <td> 
         
        Shaded </td> </tr> 

        <tr><td> 
         
        ElementColorCycler </td> <td> 
         
        Default </td> </tr> 

        <tr><td> 
         
        ElementDisplayQuality </td> <td> 
         
        Fine </td> </tr> 

        <tr><td> 
         
        ElementSelectInternal </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        GeomDisplayFreeEdges </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        GeomDisplayStitchedEdges </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        GeomFreeEdgeColor </td> <td> 
         
        186 </td> </tr> 

        <tr><td> 
         
        GeomFreeEdgeEndMarker </td> <td> 
         
        Circle </td> </tr> 

        <tr><td> 
         
        GeomFreeEdgeFont </td> <td> 
         
        Solid </td> </tr> 

        <tr><td> 
         
        GeomFreeEdgeLineWidth </td> <td> 
         
        Thick </td> </tr> 

        <tr><td> 
         
        GeomStitchedEdgeColor </td> <td> 
         
        186 </td> </tr> 

        <tr><td> 
         
        GeomStitchedEdgeEndMarker </td> <td> 
         
        Circle </td> </tr> 

        <tr><td> 
         
        GeomStitchedEdgeFont </td> <td> 
         
        Solid </td> </tr> 

        <tr><td> 
         
        GeomStitchedEdgeLineWidth </td> <td> 
         
        Thick </td> </tr> 

        <tr><td> 
         
        NodeMarker </td> <td> 
         
        None </td> </tr> 

        <tr><td> 
         
        NodeSelectInternal </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        NodeUnattachedMarker </td> <td> 
         
        Asterisk </td> </tr> 

        <tr><td> 
         
        RotationAxisColor </td> <td> 
         
        186 </td> </tr> 

        <tr><td> 
         
        RotationAxisDisplaySwitch </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        RotationAxisFont </td> <td> 
         
        Solid </td> </tr> 

        <tr><td> 
         
        RotationAxisLineWidth </td> <td> 
         
        Normal </td> </tr> 

        </table>  

         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  ModelDisplayBuilder : public NXOpen::Builder
        {
            /** Indicates node display mode type. */
            public: enum NodeDisplayModeType
            {
                NodeDisplayModeTypeImplicit/** Nodes are implicitly shown according to the following rules.  
                                                                                            Nodes attached to elements are shown when the elements 
                                                                                            are shown.  Unattached nodes are always shown. */,
                NodeDisplayModeTypeExplicit/** Nodes are explicitly shown and hidden via the Show/Hide commands. */
            };

            /** Indicates node marker display symbol type. */
            public: enum NodeMarkerType
            {
                NodeMarkerTypeNone/** None     */,
                NodeMarkerTypeDot/** Dot      */,
                NodeMarkerTypeAsterisk/** Asterisk */,
                NodeMarkerTypeFilledCircle/** Filled Circle */,
                NodeMarkerTypeBigAsterisk/** Big Asterisk */
            };

            /** Indicates unattached node marker display symbol type. */
            public: enum NodeUnattachedMarkerType
            {
                NodeUnattachedMarkerTypeNone/** None     */,
                NodeUnattachedMarkerTypeDot/** Dot      */,
                NodeUnattachedMarkerTypeAsterisk/** Asterisk */,
                NodeUnattachedMarkerTypeFilledCircle/** Filled Circle */,
                NodeUnattachedMarkerTypeBigAsterisk/** Big Asterisk */
            };

            /** Indicates which nodes to include for meshes in show and hide commands. */
            public: enum NodeMeshShowHideOptionType
            {
                NodeMeshShowHideOptionTypeExterior/** Exterior */,
                NodeMeshShowHideOptionTypeAll/** All      */,
                NodeMeshShowHideOptionTypeNone/** None     */
            };

            /** Indicates element display quality. */
            public: enum ElmDispQuality
            {
                ElmDispQualityCoarse/** Coarse */,
                ElmDispQualityMedium/** Medium */,
                ElmDispQualityFine/** Fine   */
            };

            /** Indicates element color basis. */
            public: enum ElmClrBasis
            {
                ElmClrBasisDefault/** Default */,
                ElmClrBasisPhysicalPropertyTable/** Physical Property Table */,
                ElmClrBasisMaterialPropertyTable/** Material Property Table */,
                ElmClrBasisElemCollContainer/** Mesh Collector */,
                ElmClrBasisElemColl/** Mesh */,
                ElmClrBasisElemQualityCheck/** Element Quality Check */,
                ElmClrBasisProtoElemColl/** Prototype Mesh*/
            };

            /** specifies display style for elements which pass the element quality check */
            public: enum ElemQualPass
            {
                ElemQualPassShaded/** Draw passing elements shaded */,
                ElemQualPassWireframe/** Draw passing elements wireframe */
            };

            /** specifies object width for display for geometry free edges 
             <br>  Created in NX7.5.2.  <br>  
            */
            public: enum FreeEdgeWidth
            {
                FreeEdgeWidthThin/** Thin */,
                FreeEdgeWidthNormal/** Normal */,
                FreeEdgeWidthThick/** Thick */,
                FreeEdgeWidthOne = 5/** one */ ,
                FreeEdgeWidthTwo/** two */ ,
                FreeEdgeWidthThree/** three */ ,
                FreeEdgeWidthFour/** four */ ,
                FreeEdgeWidthFive/** five */ ,
                FreeEdgeWidthSix/** six */ ,
                FreeEdgeWidthSeven/** seven */ ,
                FreeEdgeWidthEight/** eight */ ,
                FreeEdgeWidthNine/** nine */ 
            };

            /** specifies the object font for geometry free edges 
             <br>  Created in NX7.5.2.  <br>  
            */
            public: enum FreeEdgeFont
            {
                FreeEdgeFontSolid/** Solid font */,
                FreeEdgeFontDashed/** Dashed font */,
                FreeEdgeFontPhantom/** Phantom font */,
                FreeEdgeFontCenterline/** Centerline font */,
                FreeEdgeFontDotted/** Dotted font */,
                FreeEdgeFontLongDashed/** Long dashed font */,
                FreeEdgeFontDottedDashed/** Dotted dashed font */
            };

            /** specifies the marker for endpoints of geometry free edges 
             <br>  Created in NX7.5.2.  <br>  
            */
            public: enum FreeEdgeMarker
            {
                FreeEdgeMarkerNone/** No marker */,
                FreeEdgeMarkerPlus/** Plus marker */,
                FreeEdgeMarkerDot/** Dot marker */,
                FreeEdgeMarkerAsterisk/** Asterisk marker */,
                FreeEdgeMarkerCircle/** Circle marker */,
                FreeEdgeMarkerPoundsign/** Pound sign marker */,
                FreeEdgeMarkerCross/** Cross marker */,
                FreeEdgeMarkerSquare/** Square marker */,
                FreeEdgeMarkerTriangle/** Triangle marker */,
                FreeEdgeMarkerDiamond/** Diamond marker */,
                FreeEdgeMarkerCenterLine/** Center line marker */
            };

            /** specifies object width for display for geometry stitched edges 
             <br>  Created in NX8.5.0.  <br>  
            */
            public: enum StitchedEdgeWidth
            {
                StitchedEdgeWidthThin/** Thin */,
                StitchedEdgeWidthNormal/** Normal */,
                StitchedEdgeWidthThick/** Thick */,
                StitchedEdgeWidthOne = 5/** one */ ,
                StitchedEdgeWidthTwo/** two */ ,
                StitchedEdgeWidthThree/** three */ ,
                StitchedEdgeWidthFour/** four */ ,
                StitchedEdgeWidthFive/** five */ ,
                StitchedEdgeWidthSix/** six */ ,
                StitchedEdgeWidthSeven/** seven */ ,
                StitchedEdgeWidthEight/** eight */ ,
                StitchedEdgeWidthNine/** nine */ 
            };

            /** specifies the object font for geometry free edges 
             <br>  Created in NX8.5.0.  <br>  
            */
            public: enum StitchedEdgeFont
            {
                StitchedEdgeFontSolid/** Solid font */,
                StitchedEdgeFontDashed/** Dashed font */,
                StitchedEdgeFontPhantom/** Phantom font */,
                StitchedEdgeFontCenterline/** Centerline font */,
                StitchedEdgeFontDotted/** Dotted font */,
                StitchedEdgeFontLongDashed/** Long dashed font */,
                StitchedEdgeFontDottedDashed/** Dotted dashed font */
            };

            /** specifies the marker for endpoints of geometry free edges 
             <br>  Created in NX8.5.0.  <br>  
            */
            public: enum StitchedEdgeMarker
            {
                StitchedEdgeMarkerNone/** No marker */,
                StitchedEdgeMarkerPlus/** Plus marker */,
                StitchedEdgeMarkerDot/** Dot marker */,
                StitchedEdgeMarkerAsterisk/** Asterisk marker */,
                StitchedEdgeMarkerCircle/** Circle marker */,
                StitchedEdgeMarkerPoundsign/** Pound sign marker */,
                StitchedEdgeMarkerCross/** Cross marker */,
                StitchedEdgeMarkerSquare/** Square marker */,
                StitchedEdgeMarkerTriangle/** Triangle marker */,
                StitchedEdgeMarkerDiamond/** Diamond marker */,
                StitchedEdgeMarkerCenterLine/** Center line marker */
            };

            /** specifies object width for display for model rotation axis 
             <br>  Created in NX11.0.0.  <br>  
            */
            public: enum RotationAxisWidth
            {
                RotationAxisWidthThin/** Thin */,
                RotationAxisWidthNormal/** Normal */,
                RotationAxisWidthThick/** Thick */,
                RotationAxisWidthOne = 5/** one */ ,
                RotationAxisWidthTwo/** two */ ,
                RotationAxisWidthThree/** three */ ,
                RotationAxisWidthFour/** four */ ,
                RotationAxisWidthFive/** five */ ,
                RotationAxisWidthSix/** six */ ,
                RotationAxisWidthSeven/** seven */ ,
                RotationAxisWidthEight/** eight */ ,
                RotationAxisWidthNine/** nine */ 
            };

            /** specifies the object font for model rotation axis 
             <br>  Created in NX11.0.0.  <br>  
            */
            public: enum RotationAxisLineFont
            {
                RotationAxisLineFontSolid/** Solid font */,
                RotationAxisLineFontDashed/** Dashed font */,
                RotationAxisLineFontPhantom/** Phantom font */,
                RotationAxisLineFontCenterline/** Centerline font */,
                RotationAxisLineFontDotted/** Dotted font */,
                RotationAxisLineFontLongDashed/** Long dashed font */,
                RotationAxisLineFontDottedDashed/** Dotted dashed font */
            };

            private: ModelDisplayBuilderImpl * m_modeldisplaybuilder_impl;
            private: friend class  _ModelDisplayBuilderBuilder;
            protected: ModelDisplayBuilder();
            public: ~ModelDisplayBuilder();
            /**Returns  the node display mode type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::NodeDisplayModeType NodeDisplayMode
            (
            );
            /**Sets  the node display mode type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetNodeDisplayMode
            (
                NXOpen::CAE::ModelDisplayBuilder::NodeDisplayModeType nodeDisplayMode /** nodedisplaymode */ 
            );
            /**Returns  the include unattached nodes in fit switch 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: double UnattachedNodesInBoundingBoxRatio
            (
            );
            /**Sets  the include unattached nodes in fit switch 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetUnattachedNodesInBoundingBoxRatio
            (
                double unattachedNodesInBoundingBoxRatio /** unattachednodesinboundingboxratio */ 
            );
            /**Returns  the node marker display symbol type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::NodeMarkerType NodeMarker
            (
            );
            /**Sets  the node marker display symbol type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetNodeMarker
            (
                NXOpen::CAE::ModelDisplayBuilder::NodeMarkerType nodeMarker /** nodemarker */ 
            );
            /**Returns  the unattached node marker display symbol type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::NodeUnattachedMarkerType NodeUnattachedMarker
            (
            );
            /**Sets  the unattached node marker display symbol type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetNodeUnattachedMarker
            (
                NXOpen::CAE::ModelDisplayBuilder::NodeUnattachedMarkerType nodeUnattachedMarker /** nodeunattachedmarker */ 
            );
            /**Returns  the node color 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * NodeColor
            (
            );
            /**Sets  the node color 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetNodeColor
            (
                NXOpen::NXColor * nodeColor /** nodecolor */ 
            );
            /**Returns  the node select internal switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool NodeSelectInternal
            (
            );
            /**Sets  the node select internal switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetNodeSelectInternal
            (
                bool nodeSelectInternal /** nodeselectinternal */ 
            );
            /**Returns  the nodes to include for meshes in the show and hide commands 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::NodeMeshShowHideOptionType NodeMeshShowHideOption
            (
            );
            /**Sets  the nodes to include for meshes in the show and hide commands 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetNodeMeshShowHideOption
            (
                NXOpen::CAE::ModelDisplayBuilder::NodeMeshShowHideOptionType nodeMeshShowHideOption /** nodemeshshowhideoption */ 
            );
            /**Returns  the element display quality setting 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::ElmDispQuality ElementDisplayQuality
            (
            );
            /**Sets  the element display quality setting 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElementDisplayQuality
            (
                NXOpen::CAE::ModelDisplayBuilder::ElmDispQuality elementDisplayQuality /** elementdisplayquality */ 
            );
            /**Returns  the element select internal switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool ElementSelectInternal
            (
            );
            /**Sets  the element select internal switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElementSelectInternal
            (
                bool elementSelectInternal /** elementselectinternal */ 
            );
            /**Returns  the element color cycler basis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::ElmClrBasis ElementColorCycler
            (
            );
            /**Sets  the element color cycler basis 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElementColorCycler
            (
                NXOpen::CAE::ModelDisplayBuilder::ElmClrBasis elementColorCycler /** elementcolorcycler */ 
            );
            /**Returns  the element material no material element color 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * ElemMaterialDisplayNoMaterialColor
            (
            );
            /**Sets  the element material no material element color 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElemMaterialDisplayNoMaterialColor
            (
                NXOpen::NXColor * elemMaterialDisplayNoMaterialColor /** elemmaterialdisplaynomaterialcolor */ 
            );
            /**Returns  the element material laminate element color 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * ElemMaterialDisplayLaminateColor
            (
            );
            /**Sets  the element material laminate element color 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElemMaterialDisplayLaminateColor
            (
                NXOpen::NXColor * elemMaterialDisplayLaminateColor /** elemmaterialdisplaylaminatecolor */ 
            );
            /**Returns  the element quality check passing element display type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::ElemQualPass ElemQualPassType
            (
            );
            /**Sets  the element quality check passing element display type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElemQualPassType
            (
                NXOpen::CAE::ModelDisplayBuilder::ElemQualPass elemQualPassType /** elemqualpasstype */ 
            );
            /**Returns  the element quality check passing element color 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * ElemQualPassColor
            (
            );
            /**Sets  the element quality check passing element color 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElemQualPassColor
            (
                NXOpen::NXColor * elemQualPassColor /** elemqualpasscolor */ 
            );
            /**Returns  the element quality check passing element translucency. The range is 0-100. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: int ElemQualPassTranslucency
            (
            );
            /**Sets  the element quality check passing element translucency. The range is 0-100. 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElemQualPassTranslucency
            (
                int elemQualPassTranslucency /** elemqualpasstranslucency */ 
            );
            /**Returns  the element quality check failing element color 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * ElemQualFailColor
            (
            );
            /**Sets  the element quality check failing element color 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElemQualFailColor
            (
                NXOpen::NXColor * elemQualFailColor /** elemqualfailcolor */ 
            );
            /**Returns  the element quality check failing shaded element border color 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * ElemQualFailShadedBorderColor
            (
            );
            /**Sets  the element quality check failing shaded element border color 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetElemQualFailShadedBorderColor
            (
                NXOpen::NXColor * elemQualFailShadedBorderColor /** elemqualfailshadedbordercolor */ 
            );
            /**Returns  the geometry display free edges switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool GeomDisplayFreeEdges
            (
            );
            /**Sets  the geometry display free edges switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomDisplayFreeEdges
            (
                bool geomDisplayFreeEdges /** geomdisplayfreeedges */ 
            );
            /**Returns  the geometry display free edges color 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * GeomFreeEdgeColor
            (
            );
            /**Sets  the geometry display free edges color 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomFreeEdgeColor
            (
                NXOpen::NXColor * geomFreeEdgeColor /** geomfreeedgecolor */ 
            );
            /**Returns  the geometry free edge line width 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::FreeEdgeWidth GeomFreeEdgeLineWidth
            (
            );
            /**Sets  the geometry free edge line width 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomFreeEdgeLineWidth
            (
                NXOpen::CAE::ModelDisplayBuilder::FreeEdgeWidth freeEdgeWidth /** freeedgewidth */ 
            );
            /**Returns  the geometry free edge font  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::FreeEdgeFont GeomFreeEdgeFont
            (
            );
            /**Sets  the geometry free edge font  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomFreeEdgeFont
            (
                NXOpen::CAE::ModelDisplayBuilder::FreeEdgeFont freeEdgeFont /** freeedgefont */ 
            );
            /**Returns  the marker for endpoints of geometry free edges  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::FreeEdgeMarker GeomFreeEdgeEndMarker
            (
            );
            /**Sets  the marker for endpoints of geometry free edges  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomFreeEdgeEndMarker
            (
                NXOpen::CAE::ModelDisplayBuilder::FreeEdgeMarker freeEdgeEndpointMarker /** freeedgeendpointmarker */ 
            );
            /**Returns  the geometry display stitched edges switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool GeomDisplayStitchedEdges
            (
            );
            /**Sets  the geometry display stitched edges switch 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomDisplayStitchedEdges
            (
                bool geomDisplayStitchedEdges /** geomdisplaystitchededges */ 
            );
            /**Returns  the geometry display stitched edges color 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * GeomStitchedEdgeColor
            (
            );
            /**Sets  the geometry display stitched edges color 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomStitchedEdgeColor
            (
                NXOpen::NXColor * geomStitchedEdgeColor /** geomstitchededgecolor */ 
            );
            /**Returns  the geometry stitched edge line width 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::StitchedEdgeWidth GeomStitchedEdgeLineWidth
            (
            );
            /**Sets  the geometry stitched edge line width 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomStitchedEdgeLineWidth
            (
                NXOpen::CAE::ModelDisplayBuilder::StitchedEdgeWidth geomStitchedEdgeWidth /** geomstitchededgewidth */ 
            );
            /**Returns  the geometry stitched edge font  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::StitchedEdgeFont GeomStitchedEdgeFont
            (
            );
            /**Sets  the geometry stitched edge font  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomStitchedEdgeFont
            (
                NXOpen::CAE::ModelDisplayBuilder::StitchedEdgeFont geomStitchedEdgeFont /** geomstitchededgefont */ 
            );
            /**Returns  the marker for endpoints of geometry stitched edges  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::StitchedEdgeMarker GeomStitchedEdgeEndMarker
            (
            );
            /**Sets  the marker for endpoints of geometry stitched edges  
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetGeomStitchedEdgeEndMarker
            (
                NXOpen::CAE::ModelDisplayBuilder::StitchedEdgeMarker geomStitchedEdgeEndpointMarker /** geomstitchededgeendpointmarker */ 
            );
            /** This method will set the colors from the current element color cycler 
                        on all of the meshes in the model.  
                    
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetColorsOnMeshes
            (
            );
            /**Returns  the model rotation axis display switch 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: bool RotationAxisDisplaySwitch
            (
            );
            /**Sets  the model rotation axis display switch 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetRotationAxisDisplaySwitch
            (
                bool rotationAxisDisplaySwitch /** rotationaxisdisplayswitch */ 
            );
            /**Returns  the model rotation axis color 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::NXColor * RotationAxisColor
            (
            );
            /**Sets  the model rotation axis color 
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetRotationAxisColor
            (
                NXOpen::NXColor * rotationAxisColor /** rotationaxiscolor */ 
            );
            /**Returns  the model rotation axis line width 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::RotationAxisWidth RotationAxisLineWidth
            (
            );
            /**Sets  the model rotation axis line width 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetRotationAxisLineWidth
            (
                NXOpen::CAE::ModelDisplayBuilder::RotationAxisWidth rotationAxisLineWidth /** rotationaxislinewidth */ 
            );
            /**Returns  the model rotation axis font  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: NXOpen::CAE::ModelDisplayBuilder::RotationAxisLineFont RotationAxisFont
            (
            );
            /**Sets  the model rotation axis font  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") */
            public: void SetRotationAxisFont
            (
                NXOpen::CAE::ModelDisplayBuilder::RotationAxisLineFont rotationAxisFont /** rotationaxisfont */ 
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
