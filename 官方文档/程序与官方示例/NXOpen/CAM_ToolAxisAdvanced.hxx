#ifndef NXOpen_CAM_TOOLAXISADVANCED_HXX_INCLUDED
#define NXOpen_CAM_TOOLAXISADVANCED_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_ToolAxisAdvanced.ja
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
#include <NXOpen/CAM_LeadAngles.hxx>
#include <NXOpen/CAM_ToolAxisAdvanced.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_cam_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAM
    {
        class ToolAxisAdvanced;
    }
    namespace CAM
    {
        class InterpolateVector;
    }
    namespace CAM
    {
        class LeadAngles;
    }
    namespace CAM
    {
        class _ToolAxisAdvancedBuilder;
        class ToolAxisAdvancedImpl;
        /** Represents a Tool Axis Advanced Builder 
         <br>  Created in NX7.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  ToolAxisAdvanced : public NXOpen::TaggedObject
        {
            /** Available types for Tool Axis Advanced type*/
            public: enum Type
            {
                TypeAutomatic/** Automatic */,
                TypeInterpolateVector/** Interpolate Vector*/,
                TypeBladeSwarf/** Blade Swarf */,
                TypeFollowBladeUv/** Follow Blade UV */
            };

            /** Rotate About type*/
            public: enum RotateAboutType
            {
                RotateAboutTypePartAxis/** Part Axis */,
                RotateAboutTypeBlade/** Blade */
            };

            private: ToolAxisAdvancedImpl * m_toolaxisadvanced_impl;
            private: friend class  _ToolAxisAdvancedBuilder;
            protected: ToolAxisAdvanced();
            public: ~ToolAxisAdvanced();
            /**Returns  the tool axis types 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ToolAxisAdvanced::Type ToolAxisType
            (
            );
            /**Sets  the tool axis types 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolAxisType
            (
                NXOpen::CAM::ToolAxisAdvanced::Type toolAxis /** the tool axis type */
            );
            /**Returns  the tilt angle 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double TiltAngle
            (
            );
            /**Sets  the tilt angle 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetTiltAngle
            (
                double tiltAngle /** the tilt angle value */
            );
            /**Returns  the leading angle 
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link CAM::LeadAngles::AtLeadingEdge CAM::LeadAngles::AtLeadingEdge@endlink  instead. <br>  

             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use CAM::LeadAngles::AtLeadingEdge instead.") double LeadingAngle
            (
            );
            /**Sets  the leading angle 
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link CAM::LeadAngles::AtLeadingEdge CAM::LeadAngles::AtLeadingEdge@endlink  instead. <br>  

             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use CAM::LeadAngles::AtLeadingEdge instead.") void SetLeadingAngle
            (
                double leadingAngle /** the leading angle value */
            );
            /**Returns  the splitter angle 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public: double SplitterAngle
            (
            );
            /**Sets  the splitter angle 
             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSplitterAngle
            (
                double splitterAngle /** the leading angle value */
            );
            /**Returns  the trailing angle 
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link CAM::LeadAngles::AtTrailingEdge CAM::LeadAngles::AtTrailingEdge@endlink  instead. <br>  

             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use CAM::LeadAngles::AtTrailingEdge instead.") double TrailingAngle
            (
            );
            /**Sets  the trailing angle 
             <br>  @deprecated Deprecated in NX8.5.0.  Use @link CAM::LeadAngles::AtTrailingEdge CAM::LeadAngles::AtTrailingEdge@endlink  instead. <br>  

             <br>  Created in NX7.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public:  NX_DEPRECATED("Deprecated in NX8.5.0.  Use CAM::LeadAngles::AtTrailingEdge instead.") void SetTrailingAngle
            (
                double trailingAngle /** the leading angle value */
            );
            /**Returns  the Interpolate Vector builder  
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::InterpolateVector * InterpolateVector
            (
            );
            /**Returns  the rotate about 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::ToolAxisAdvanced::RotateAboutType RotateAbout
            (
            );
            /**Sets  the rotate about 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetRotateAbout
            (
                NXOpen::CAM::ToolAxisAdvanced::RotateAboutType rotateAbout /** the rotate about value */
            );
            /**Returns  the minimum lead angle 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: double MinimumLeadAngle
            (
            );
            /**Sets  the minimum lead angle 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMinimumLeadAngle
            (
                double minLeadAngle /** the minimum lead angle value */
            );
            /**Returns  the primary lead angles, used for leading to trailing and swarf blade
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::LeadAngles * PrimaryLeadAngles
            (
            );
            /**Returns  the secondary lead angles, used for trailing to leading 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::LeadAngles * SecondaryLeadAngles
            (
            );
            /**Returns  the swarf gouge check 
             <br>  Created in NX9.0.1.  <br>  
             <br> License requirements : None */
            public: bool SwarfGougeCheck
            (
            );
            /**Sets  the swarf gouge check 
             <br>  Created in NX9.0.1.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetSwarfGougeCheck
            (
                bool swarfGougeCheck /** the swarf gouge check value */
            );
            /**Returns  the trailing edge clearance angle 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : None */
            public: double TrailingEdgeClearanceAngle
            (
            );
            /**Sets  the trailing edge clearance angle 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetTrailingEdgeClearanceAngle
            (
                double clearAngle /** the trailing edge clearance angle value */
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
