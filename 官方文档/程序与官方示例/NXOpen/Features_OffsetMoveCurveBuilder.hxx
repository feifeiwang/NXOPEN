#ifndef NXOpen_FEATURES_OFFSETMOVECURVEBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_OFFSETMOVECURVEBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_OffsetMoveCurveBuilder.ja
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
#include <NXOpen/Features_OffsetMoveCurveBuilder.hxx>
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
        class OffsetMoveCurveBuilder;
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
    class NXObject;
    namespace Features
    {
        class _OffsetMoveCurveBuilderBuilder;
        class OffsetMoveCurveBuilderImpl;
        /**
            Represents a @link NXOpen::Features::OffsetMoveCurve NXOpen::Features::OffsetMoveCurve@endlink  builder
             <br> To create a new instance of this class, use @link NXOpen::Features::SynchronousCurveCollection::CreateOffsetMoveCurveBuilder  NXOpen::Features::SynchronousCurveCollection::CreateOffsetMoveCurveBuilder @endlink  <br> 
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
         
        Distance.Value </td> <td> 
         
        0 (millimeters part), 0 (inches part) </td> </tr> 

        </table>  

         <br>  Created in NX9.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  OffsetMoveCurveBuilder : public NXOpen::Features::FeatureBuilder
        {
            private: OffsetMoveCurveBuilderImpl * m_offsetmovecurvebuilder_impl;
            private: friend class  _OffsetMoveCurveBuilderBuilder;
            protected: OffsetMoveCurveBuilder();
            public: ~OffsetMoveCurveBuilder();
            /**Returns  the curve finder 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Features::CurveFinderBuilder * CurveFinder
            (
            );
            /**Returns  the offset distance 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * Distance
            (
            );
            /**Returns  the reverse offset direction 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: bool ReverseOffsetDirection
            (
            );
            /**Sets  the reverse offset direction 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR geometric_tol ("GDT") */
            public: void SetReverseOffsetDirection
            (
                bool reverseOffsetDirection /** reverseoffsetdirection */ 
            );
            /** This function reverses the offset direction of the loop containing the input curve 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR geometric_tol ("GDT") */
            public: void ReverseOffsetDirectionOfLoop
            (
                NXOpen::NXObject * objectInLoop /** A curve in loop to reverse */
            );
            /** This function add the selected curve and its sense into the curve_sense_map when select a new curve 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR geometric_tol ("GDT") */
            public: void AddCurveSenseToMap
            (
                NXOpen::NXObject * curve /** A new selected curve */,
                int curveSense /** The sense of the selected curve */
            );
            /** This function remove a curve and its sense from the curve_sense_map when deselect a curve 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR geometric_tol ("GDT") */
            public: void RemoveCurveSenseFromMap
            (
                NXOpen::NXObject * curve /** A removed curve */
            );
            /**Returns  the distance tolerance 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: double DistanceTolerance
            (
            );
            /**Sets  the distance tolerance 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR geometric_tol ("GDT") */
            public: void SetDistanceTolerance
            (
                double distanceTolerance /** distancetolerance */ 
            );
            /**Returns  a value that indicates which keep tangent support is selected
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: int KeepTangent
            (
            );
            /**Sets  a value that indicates which keep tangent support is selected
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR geometric_tol ("GDT") */
            public: void SetKeepTangent
            (
                int keepTangent /** keeptangent */ 
            );
            /**Returns  a value that indicates whether keep orthogonal is enabled 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool KeepOrthogonal
            (
            );
            /**Sets  a value that indicates whether keep orthogonal is enabled 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") OR geometric_tol ("GDT") */
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
