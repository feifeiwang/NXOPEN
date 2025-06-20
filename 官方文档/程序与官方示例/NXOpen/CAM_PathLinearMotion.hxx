#ifndef NXOpen_CAM_PATHLINEARMOTION_HXX_INCLUDED
#define NXOpen_CAM_PATHLINEARMOTION_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_PathLinearMotion.ja
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
#include <NXOpen/CAM_PathData.hxx>
#include <NXOpen/TransientObject.hxx>
#include <NXOpen/ugmath.hxx>
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
        class PathLinearMotion;
    }
    namespace CAM
    {
        class PathLinearMotionImpl;
        /** This class represents the data of a Linear Motion
         <br>  Created in NX10.0.1.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  PathLinearMotion : public NXOpen::TransientObject
        {
            private: PathLinearMotionImpl * m_pathlinearmotion_impl;
            /// \cond NX_NO_DOC 
            public: explicit PathLinearMotion(void *ptr);
            /// \endcond 
            /** Free resources associated with the instance. After this method
                    is called, it is illegal to use the object.  In .NET, this method
                    is automatically called when the object is deleted by the garbage
                    collector. 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : None */
            public: virtual ~PathLinearMotion();
            /**Returns  the motion type 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::CamPathMotionType MotionType
            (
            );
            /**Sets  the motion type 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMotionType
            (
                NXOpen::CAM::CamPathMotionType motionType /** motiontype */ 
            );
            /**Returns  the custom feed rate indicator 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : None */
            public: bool IsCustomFeedrate
            (
            );
            /**Sets  the custom feed rate indicator 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetCustomFeedrate
            (
                bool isCustomFeedRate /** iscustomfeedrate */ 
            );
            /**Returns  the end point of the motion 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point3d EndPoint
            (
            );
            /**Sets  the end point of the motion 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetEndPoint
            (
                const NXOpen::Point3d & endPoint /** endpoint */ 
            );
            /**Returns  the tool axis of the motion 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::Vector3d ToolAxis
            (
            );
            /**Sets  the tool axis of the motion 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetToolAxis
            (
                const NXOpen::Vector3d & toolAxis /** toolaxis */ 
            );
            /** Get feed rate information 
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : None */
            public: void GetFeedrate
            (
                double* feedValue /** feedvalue */ ,
                NXOpen::CAM::CamPathFeedUnitType* feedUnit /** feedunit */ 
            );
            /** Set feed rate information. If the feed rate is set on a motion then it will be treated as custom feed rate
             <br>  Created in NX10.0.1.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetFeedrate
            (
                double feedValue /** feedvalue */ ,
                NXOpen::CAM::CamPathFeedUnitType feedUnit /** feedunit */ 
            );
        }; //lint !e1712 default constructor not defined for class  

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
