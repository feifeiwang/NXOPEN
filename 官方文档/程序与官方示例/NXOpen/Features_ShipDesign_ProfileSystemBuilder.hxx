#ifndef NXOpen_FEATURES_SHIPDESIGN_PROFILESYSTEMBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_PROFILESYSTEMBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_ProfileSystemBuilder.ja
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
#include <NXOpen/Features_ShipDesign_ProfileSystemBuilder.hxx>
#include <NXOpen/Features_ShipDesign_FeatureParmsBuilder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/ugmath.hxx>
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
        namespace ShipDesign
        {
            class ProfileSystemBuilder;
        }
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class FeatureParmsBuilder;
        }
    }
    class NXObject;
    class Plane;
    class SelectNXObjectList;
    class SelectPointList;
    namespace Features
    {
        namespace ShipDesign
        {
            class _ProfileSystemBuilderBuilder;
            class ProfileSystemBuilderImpl;
            /**
                This class is used to create or edit the information shared between all the Basic Design profile system
                features in the Ship Design application. Currently this includes the following features:
                @link NXOpen::Features::ShipDesign::StiffenerSystem NXOpen::Features::ShipDesign::StiffenerSystem@endlink ,
                @link NXOpen::Features::ShipDesign::PillarSystem NXOpen::Features::ShipDesign::PillarSystem@endlink , and
                @link NXOpen::Features::ShipDesign::EdgeReinforcement NXOpen::Features::ShipDesign::EdgeReinforcement@endlink .
                 <br> To create a new instance of this class, use @link NXOpen::Features::ShipCollection::CreateProfileSystemBuilder  NXOpen::Features::ShipCollection::CreateProfileSystemBuilder @endlink  <br> 
             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  ProfileSystemBuilder : public NXOpen::Features::ShipDesign::FeatureParmsBuilder
            {
                private: ProfileSystemBuilderImpl * m_profilesystembuilder_impl;
                private: friend class  _ProfileSystemBuilderBuilder;
                protected: ProfileSystemBuilder();
                public: ~ProfileSystemBuilder();
                /**Returns  the collector containing the plate system, profile system, or datum plane that will be 
                            used to trim the first end of the generated profile system. Only one sheet body or one plane can be input. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObjectList * Boundary1
                (
                );
                /**Returns  the defined plane that will be used to trim the first end of the generated profile system. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Plane * Boundary1Plane
                (
                );
                /**Sets  the defined plane that will be used to trim the first end of the generated profile system. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetBoundary1Plane
                (
                    NXOpen::Plane * boundary1Plane /** boundary1plane */ 
                );
                /**Returns  the collector containing the plate system, profile system, or datum plane that will be used to 
                            trim the second end of the generated profile system. Only one sheet body or one plane can be input. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectNXObjectList * Boundary2
                (
                );
                /**Returns  the defined plane that will be used to trim the second end of the generated profile system. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Plane * Boundary2Plane
                (
                );
                /**Sets  the defined plane that will be used to trim the second end of the generated profile system. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetBoundary2Plane
                (
                    NXOpen::Plane * boundary2Plane /** boundary2plane */ 
                );
                /**Returns  the indication if the side of a single boundary should be changed to the other side or not. 
                            By default the side that is on the same side as the sheet body or plane normal is chosen. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: bool BoundaryReverse
                (
                );
                /**Sets  the indication if the side of a single boundary should be changed to the other side or not. 
                            By default the side that is on the same side as the sheet body or plane normal is chosen. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetBoundaryReverse
                (
                    bool boundaryReverse /** boundaryreverse */ 
                );
                /**Returns  the selected intersection points between the curves and the first boundary. 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectPointList * FirstIntersectionPoints
                (
                );
                /**Returns  the selected intersection points between the curves and the second boundary. 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::SelectPointList * SecondIntersectionPoints
                (
                );
                /** Sets the selected intersection points for the first boundary.
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetBoundaryOnePoints
                (
                    const std::vector<NXOpen::Point3d> & points /**The selected intersection points for boundary one.*/
                );
                /** Set the selected intersection points for the second boundary.
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetBoundaryTwoPoints
                (
                    const std::vector<NXOpen::Point3d> & points /**The selected intersection points for boundary two.*/
                );
                /** Creates path curves for all the paths of the profile system. 
                 <br>  Created in NX9.0.0.  <br>  
                 <br> License requirements : None */
                public: void CreatePathCurves
                (
                    std::vector<NXOpen::NXObject *> & curves /** The curves defining all the paths of the profiles that are being created. */
                );
                /** Deletes the path curves created from a call to @link CreatePathCurves CreatePathCurves@endlink . 
                 <br>  Created in NX9.0.0.  <br>  
                 <br> License requirements : None */
                public: void DeletePathCurves
                (
                );
                /** Gets the path curves used by @link NXOpen::Features::ShipDesign::OrientationDefinitionBuilder NXOpen::Features::ShipDesign::OrientationDefinitionBuilder@endlink . 
                 <br>  Created in NX9.0.0.  <br>  
                 <br> License requirements : None */
                public: void GetLastPathCurves
                (
                    std::vector<NXOpen::NXObject *> & curves /** The curves to be used for profile orientation. */
                );
                /** Deletes the path curves returned from a call to @link GetLastPathCurves GetLastPathCurves@endlink . 
                 <br>  Created in NX9.0.0.  <br>  
                 <br> License requirements : None */
                public: void DeleteLastPathCurves
                (
                );
                /**Returns  the flag that indicates if the default curve direction should be reversed or not. 
                            By default curve's direction is consistent with ship coordinate. 
                 <br>  Created in NX11.0.0.  <br>  
                 <br> License requirements : None */
                public: bool ReversePathDirection
                (
                );
                /**Sets  the flag that indicates if the default curve direction should be reversed or not. 
                            By default curve's direction is consistent with ship coordinate. 
                 <br>  Created in NX11.0.0.  <br>  
                 <br> License requirements : nx_ship_basic ("Ship Basic Design") */
                public: void SetReversePathDirection
                (
                    bool pathReverse /** pathreverse */ 
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
