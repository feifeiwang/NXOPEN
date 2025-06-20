#ifndef NXOpen_CAM_SPLITSUBOPCOMMAND_HXX_INCLUDED
#define NXOpen_CAM_SPLITSUBOPCOMMAND_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_SplitSubopCommand.ja
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
        class SplitSubopCommand;
    }
    class Plane;
    class Point;
    namespace CAM
    {
        class _SplitSubopCommandBuilder;
        class SplitSubopCommandImpl;
        /** Represents an Split Subop Command Builder 
         <br>  Created in NX9.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  SplitSubopCommand : public NXOpen::TaggedObject
        {
            /** Available split types */
            public: enum Types
            {
                TypesLine/** Divide by line */,
                TypesPlane/** Divide by Plane */,
                TypesPoint/** Divide by Point */
            };

            /** Available line plane types */
            public: enum LinePlaneTypes
            {
                LinePlaneTypesParallelToToolaxis/** Line plane parallel to tool axis */,
                LinePlaneTypesNormalToToolaxis/** Line plane normal to tool axis */,
                LinePlaneTypesSpecifyAngle/** Line plane specify angle */
            };

            private: SplitSubopCommandImpl * m_splitsubopcommand_impl;
            private: friend class  _SplitSubopCommandBuilder;
            protected: SplitSubopCommand();
            public: ~SplitSubopCommand();
            /**Returns  the start point value 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * StartPoint
            (
            );
            /**Sets  the start point value 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: void SetStartPoint
            (
                NXOpen::Point * startPoint /** the start point value */
            );
            /**Returns  the end point value 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point * EndPoint
            (
            );
            /**Sets  the end point value 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: void SetEndPoint
            (
                NXOpen::Point * endPoint /** the end point value */
            );
            /**Returns  the split type 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SplitSubopCommand::Types Type
            (
            );
            /**Sets  the split type 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: void SetType
            (
                NXOpen::CAM::SplitSubopCommand::Types type /** the split type value */
            );
            /**Returns  the divide plane 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Plane * DividePlane
            (
            );
            /**Sets  the divide plane 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: void SetDividePlane
            (
                NXOpen::Plane * plane /** the divide plane */
            );
            /**Returns  the line plane type 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SplitSubopCommand::LinePlaneTypes LinePlaneType
            (
            );
            /**Sets  the line plane type 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : None */
            public: void SetLinePlaneType
            (
                NXOpen::CAM::SplitSubopCommand::LinePlaneTypes type /** the line plane type value */
            );
            /**Returns  the rotate angle value 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : None */
            public: double RotateAngle
            (
            );
            /**Sets  the rotate angle value 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : None */
            public: void SetRotateAngle
            (
                double rotateAngle /** the rotate angle value */
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
