#ifndef NXOpen_FEATURES_RESIZECURVEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_RESIZECURVEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ResizeCurveBuilder.ja
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
#include <NXOpen/Features_CurveFinderBuilder.hxx>
#include <NXOpen/Features_ResizeCurveBuilder.hxx>
#include <NXOpen/Features_FeatureBuilder.hxx>
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
        class ResizeCurveBuilder;
    }
    class Expression;
    namespace Features
    {
        class CurveFinderBuilder;
    }
    namespace Features
    {
        class FeatureBuilder;
    }
    namespace Features
    {
        class _ResizeCurveBuilderBuilder;
        class ResizeCurveBuilderImpl;
        /**
            Represents a @link NXOpen::Features::ResizeCurve NXOpen::Features::ResizeCurve@endlink  builder
             <br> To create a new instance of this class, use @link NXOpen::Features::SynchronousCurveCollection::CreateResizeCurveBuilder  NXOpen::Features::SynchronousCurveCollection::CreateResizeCurveBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        CurveFinder.ChamferEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.CoincidentVertexEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.CoincidentVertexSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.CollinearEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.CollinearSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.ConcentricEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.ConcentricSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.EqualRadiusEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.EqualRadiusSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.OffsetEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.OffsetSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.ParallelEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.ParallelSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.SymmetricEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.TangentEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.TangentSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.UseCurveFinder </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        CurveFinder.VertexOnCurveEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        CurveFinder.VertexOnCurveSketchGroupEnabled </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ValueOption </td> <td> 
         
        Diameter </td> </tr> 

        </table>  

         <br>  Created in NX9.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  ResizeCurveBuilder : public NXOpen::Features::FeatureBuilder
        {
            /** the option for radius or diameter */
            public: enum ValueType
            {
                ValueTypeDiameter/** diameter */ ,
                ValueTypeRadius/** radius */ 
            };

            private: ResizeCurveBuilderImpl * m_resizecurvebuilder_impl;
            private: friend class  _ResizeCurveBuilderBuilder;
            protected: ResizeCurveBuilder();
            public: ~ResizeCurveBuilder();
            /**Returns  the curve section 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::CurveFinderBuilder * CurveFinder
            (
            );
            /**Returns  the value to resize 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Value
            (
            );
            /**Returns  the size option 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::ResizeCurveBuilder::ValueType ValueOption
            (
            );
            /**Sets  the size option 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetValueOption
            (
                NXOpen::Features::ResizeCurveBuilder::ValueType valueOption /** valueoption */ 
            );
            /**Returns  the distance tolerance 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: double DistanceTolerance
            (
            );
            /**Sets  the distance tolerance 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetDistanceTolerance
            (
                double distanceTolerance /** distancetolerance */ 
            );
            /**Returns  a value that indicates whether keep orthogonal is enabled 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool KeepOrthogonal
            (
            );
            /**Sets  a value that indicates whether keep orthogonal is enabled 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetKeepOrthogonal
            (
                bool keepOrthogonal /** keeporthogonal */ 
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
