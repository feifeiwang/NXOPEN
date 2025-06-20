#ifndef NXOpen_WELD_POINTMARKBUILDER_HXX_INCLUDED
#define NXOpen_WELD_POINTMARKBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Weld_PointMarkBuilder.ja
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
#include <NXOpen/Weld_JointmarkBuilder.hxx>
#include <NXOpen/Weld_PointMarkBuilder.hxx>
#include <NXOpen/Weld_PointMarkPointBuilder.hxx>
#include <NXOpen/libnxopencpp_weld_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Weld
    {
        class PointMarkBuilder;
    }
    namespace Weld
    {
        class JointmarkBuilder;
    }
    namespace Weld
    {
        class PointMarkPointBuilder;
    }
    namespace Weld
    {
        class _PointMarkBuilderBuilder;
        class PointMarkBuilderImpl;
        /** Used to create or edit a @link NXOpen::Weld::PointMark NXOpen::Weld::PointMark@endlink  feature.  <br> To create a new instance of this class, use @link NXOpen::Weld::WeldManager::CreatePointMarkBuilder  NXOpen::Weld::WeldManager::CreatePointMarkBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        Associativity </td> <td> 
         
        1 </td> </tr> 

        <tr><td> 
         
        ConnectPart </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        ConstructionMethod </td> <td> 
         
        GuideCurve </td> </tr> 

        <tr><td> 
         
        CreateSingleFeatures </td> <td> 
         
        0 </td> </tr> 

        <tr><td> 
         
        OrientationMethod </td> <td> 
         
        SurfaceNormal </td> </tr> 

        <tr><td> 
         
        ReferenceSheetType </td> <td> 
         
        Overlap </td> </tr> 

        <tr><td> 
         
        ShowWorkCsys </td> <td> 
         
        1 </td> </tr> 

        </table>  

         <br>  Created in NX10.0.0.  <br>  
        */
        class NXOPENCPP_WELDEXPORT  PointMarkBuilder : public NXOpen::Weld::JointmarkBuilder
        {
            /** The weld type to create. */
            public: enum WeldTypes
            {
                WeldTypesResistanceSpot/** Resistance Spot */,
                WeldTypesArcSpot/** Arc Spot */,
                WeldTypesClinch/** Clinch */,
                WeldTypesDollop/** Dollop */,
                WeldTypesWeldNut/** Weld Nut*/,
                WeldTypesWeldStud/** Weld Stud */,
                WeldTypesCustom1/** Custom 1 as defined in customer defaults */,
                WeldTypesCustom2/** Custom 2 as defined in customer defaults */,
                WeldTypesCustom3/** Custom 3 as defined in customer defaults */,
                WeldTypesCustom4/** Custom 4 as defined in customer defaults */,
                WeldTypesCustom5/** Custom 5 as defined in customer defaults */
            };

            private: PointMarkBuilderImpl * m_pointmarkbuilder_impl;
            private: friend class  _PointMarkBuilderBuilder;
            protected: PointMarkBuilder();
            public: ~PointMarkBuilder();
            /**Returns  the weld type references in the customer defaults to create. 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : ugweld ("UG WELD") */
            public: NXOpen::Weld::PointMarkBuilder::WeldTypes WeldType
            (
            );
            /**Sets  the weld type references in the customer defaults to create. 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : ugweld ("UG WELD") */
            public: void SetWeldType
            (
                NXOpen::Weld::PointMarkBuilder::WeldTypes weldType /** weldtype */ 
            );
            /** Creates a @link NXOpen::Weld::PointMarkPointBuilder NXOpen::Weld::PointMarkPointBuilder@endlink  object.  @return  
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : ugweld ("UG WELD") */
            public: NXOpen::Weld::PointMarkPointBuilder * NewPointsOverride
            (
            );
            /** Creates a list of points on the overlap sheet. In addition, a curve selected by the user will be placed at these points. 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : ugweld ("UG WELD") */
            public: void AppendPointsOverride
            (
                bool create /** Create or Edit */
            );
            /**Returns  the display mode. This is only used on create. On edit the display mode will be that of the latest state of the edited features. 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : ugweld ("UG WELD") */
            public: bool ShowSolids
            (
            );
            /**Sets  the display mode. This is only used on create. On edit the display mode will be that of the latest state of the edited features. 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : ugweld ("UG WELD") */
            public: void SetShowSolids
            (
                bool showSolids /** true- Show Weld.PointMarkPoint features in solid mode. fale- show in point mode.*/
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
