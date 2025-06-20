#ifndef NXOpen_GEOMETRICUTILITIES_FTMTRANSFORMCURVESBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICUTILITIES_FTMTRANSFORMCURVESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricUtilities_FtmTransformCurvesBuilder.ja
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
#include <NXOpen/GeometricUtilities_FtmTransformCurvesBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/Section.hxx>
#include <NXOpen/libnxopencpp_geometricutilities_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricUtilities
    {
        class FtmTransformCurvesBuilder;
    }
    class Builder;
    class Section;
    namespace GeometricUtilities
    {
        class _FtmTransformCurvesBuilderBuilder;
        class FtmTransformCurvesBuilderImpl;
        /**
            Represents a @link NXOpen::GeometricUtilities::FtmTransformCurvesBuilder NXOpen::GeometricUtilities::FtmTransformCurvesBuilder@endlink  builder
             <br> To create a new instance of this class, use @link NXOpen::GeometricUtilities::OmnicadManager::CreateFtmTransformCurvesBuilder  NXOpen::GeometricUtilities::OmnicadManager::CreateFtmTransformCurvesBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        AlignBreakPoints </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        OppositeSense </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        OppositeSide </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        TransformCurvesContinuity </td> <td> 
         
        G0 </td> </tr> 

        </table>  

         <br>  Created in NX10.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICUTILITIESEXPORT  FtmTransformCurvesBuilder : public NXOpen::Builder
        {
            /** Transform curves continuity type */
            public: enum TransformCurvesContinuityType
            {
                TransformCurvesContinuityTypeG0/** g0 */ ,
                TransformCurvesContinuityTypeG1/** g1 */ ,
                TransformCurvesContinuityTypeG2/** g2 */ 
            };

            private: FtmTransformCurvesBuilderImpl * m_ftmtransformcurvesbuilder_impl;
            private: friend class  _FtmTransformCurvesBuilderBuilder;
            protected: FtmTransformCurvesBuilder();
            public: ~FtmTransformCurvesBuilder();
            /**Returns  the starting constraint for the product shape in the form of curves used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * TransformStartCurves
            (
            );
            /**Returns  the end or target constraint for the product shape in the form of curves used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Section * TransformEndCurves
            (
            );
            /**Returns  the continuity option for the transformation start and end curves used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricUtilities::FtmTransformCurvesBuilder::TransformCurvesContinuityType TransformCurvesContinuity
            (
            );
            /**Sets  the continuity option for the transformation start and end curves used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetTransformCurvesContinuity
            (
                NXOpen::GeometricUtilities::FtmTransformCurvesBuilder::TransformCurvesContinuityType transformCurvesContinuity /** transformcurvescontinuity */ 
            );
            /**Returns  the option for aligning break points used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool AlignBreakPoints
            (
            );
            /**Sets  the option for aligning break points used in the transformation or morphing calculations 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetAlignBreakPoints
            (
                bool alignBreakPoints /** alignbreakpoints */ 
            );
            /**Returns  the option to reverse the OmniCAD pre-determined direction for the transformation start and end curves 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool OppositeSense
            (
            );
            /**Sets  the option to reverse the OmniCAD pre-determined direction for the transformation start and end curves 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetOppositeSense
            (
                bool oppositeSense /** oppositesense */ 
            );
            /**Returns  the option to change the displacements to the opposite side of the transformation 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: bool OppositeSide
            (
            );
            /**Sets  the option to change the displacements to the opposite side of the transformation 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : None */
            public: void SetOppositeSide
            (
                bool oppositeSide /** oppositeside */ 
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
