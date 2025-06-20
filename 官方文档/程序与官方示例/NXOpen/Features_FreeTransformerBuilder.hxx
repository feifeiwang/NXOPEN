#ifndef NXOpen_FEATURES_FREETRANSFORMERBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_FREETRANSFORMERBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_FreeTransformerBuilder.ja
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
#include <NXOpen/Features_FreeTransformerBuilder.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        class FreeTransformerBuilder;
    }
    class Expression;
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace GeometricUtilities
    {
        class FtmFixedCurvesBuilderList;
    }
    namespace GeometricUtilities
    {
        class FtmTransformCurvesBuilderList;
    }
    namespace GeometricUtilities
    {
        class FtmTransformPointsBuilderList;
    }
    class Plane;
    class ScCollector;
    class Section;
    namespace Features
    {
        class _FreeTransformerBuilderBuilder;
        class FreeTransformerBuilderImpl;
        /**
            Represents a @link NXOpen::Features::FreeTransformer NXOpen::Features::FreeTransformer@endlink  builder
             <br> To create a new instance of this class, use @link NXOpen::Features::FeatureCollection::CreateFreeTransformerBuilder  NXOpen::Features::FeatureCollection::CreateFreeTransformerBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AsOriginalOption </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        Free2DOption </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        HideOriginal </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ShowTransformVectors </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        StepExpression.Value </td> <td> 
         
        1 </td> </tr> 

        </table>  

         <br>  Created in NX10.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  FreeTransformerBuilder : public NXOpen::Features::FeatureBuilder
        {
            private: FreeTransformerBuilderImpl * m_freetransformerbuilder_impl;
            private: friend class  _FreeTransformerBuilderBuilder;
            protected: FreeTransformerBuilder();
            public: ~FreeTransformerBuilder();
            /**Returns  the faces to be transformed 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::ScCollector * TransformFaces
            (
            );
            /**Returns  the curves to be transformed 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * TransformCurves
            (
            );
            /**Returns  the fixed curves list that defines the list items containing fixed curves used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::FtmFixedCurvesBuilderList * FixedCurvesList
            (
            );
            /**Returns  the transformation curves list that defines the list items containing the transformation start and end curves used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::FtmTransformCurvesBuilderList * TransformCurvesList
            (
            );
            /**Returns  the transformation points list that defines list items containing the transformation start and end points used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::FtmTransformPointsBuilderList * TransformPointsList
            (
            );
            /**Returns  the option to turn on or off the Free 2D plane used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool Free2DOption
            (
            );
            /**Sets  the option to turn on or off the Free 2D plane used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFree2DOption
            (
                bool free2DOption /** free2doption */ 
            );
            /**Returns  the Free 2D plane to be used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Plane * Free2DPlane
            (
            );
            /**Sets  the Free 2D plane to be used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetFree2DPlane
            (
                NXOpen::Plane * free2DPlane /** free2dplane */ 
            );
            /**Returns  the option to hide the original geometries after creating new geometries 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool HideOriginal
            (
            );
            /**Sets  the option to hide the original geometries after creating new geometries 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetHideOriginal
            (
                bool hideOriginal /** hideoriginal */ 
            );
            /**Returns  the option to use the same colors and layers of the original geometries for creating new geometries 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool AsOriginalOption
            (
            );
            /**Sets  the option to use the same colors and layers of the original geometries for creating new geometries 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAsOriginalOption
            (
                bool asOriginalOption /** asoriginaloption */ 
            );
            /**Returns  the option to show temporary transform vectors in preview 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool ShowTransformVectors
            (
            );
            /**Sets  the option to show temporary transform vectors in preview 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetShowTransformVectors
            (
                bool showTransformVectors /** showtransformvectors */ 
            );
            /**Returns  the expression that defines the step count used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * StepExpression
            (
            );
            /**Returns  the distance tolerance used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: double DistanceTolerance
            (
            );
            /**Sets  the distance tolerance used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDistanceTolerance
            (
                double distanceTolerance /** distancetolerance */ 
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
