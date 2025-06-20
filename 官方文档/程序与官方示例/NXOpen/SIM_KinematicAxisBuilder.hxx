#ifndef NXOpen_SIM_KINEMATICAXISBUILDER_HXX_INCLUDED
#define NXOpen_SIM_KINEMATICAXISBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     SIM_KinematicAxisBuilder.ja
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
#include <NXOpen/Builder.hxx>
#include <NXOpen/libnxopencpp_sim_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace SIM
    {
        class KinematicAxisBuilder;
    }
    class Builder;
    namespace SIM
    {
        class KinematicJunction;
    }
    namespace SIM
    {
        class _KinematicAxisBuilderBuilder;
        class KinematicAxisBuilderImpl;
        /**  @brief  Represents the SimKimAxisBuilder class object  

            <br> Use the @link NXOpen::SIM::KinematicConfigurator NXOpen::SIM::KinematicConfigurator@endlink  class to create a KinematicAxisBuilder object.  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_SIMEXPORT  KinematicAxisBuilder : public NXOpen::Builder
        {
            /** The axis direction type */
            public: enum AxisDirectionType
            {
                AxisDirectionTypePositiveX/** positive X-axis */,
                AxisDirectionTypeNegativeX/** negative X-axis */,
                AxisDirectionTypePositiveY/** positive Y-axis */,
                AxisDirectionTypeNegativeY/** negative Y-axis */,
                AxisDirectionTypePositiveZ/** positive Z-axis */,
                AxisDirectionTypeNegativeZ/** negative Z-axis */
            };

            /** The axis motions type */
            public: enum AxisMotionType
            {
                AxisMotionTypeLinearNcAxis/** linear NC-axis */,
                AxisMotionTypeRotaryNcAxis/** rotary NC-axis */,
                AxisMotionTypeLinear/** linear axis    */,
                AxisMotionTypeRotary/** rotary axis    */,
                AxisMotionTypeRotaryUnlimitedNcAxis/** rotary unlimited NC-axis */,
                AxisMotionTypeSpindleNcAxis/** spindle NC-axis */,
                AxisMotionTypeRotaryUnlimited/**rotary axis unlimited*/,
                AxisMotionTypeSpindle/** spindle    */
            };

            private: KinematicAxisBuilderImpl * m_kinematicaxisbuilder_impl;
            private: friend class  _KinematicAxisBuilderBuilder;
            protected: KinematicAxisBuilder();
            public: ~KinematicAxisBuilder();
            /**Returns  the kinematic axis's name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: NXString Name
            (
            );
            /**Sets  the kinematic axis's name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetName
            (
                const NXString & name /** the axis's new name */
            );
            /**Sets  the kinematic axis's name 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            void SetName
            (
                const char * name /** the axis's new name */
            );
            /**Returns  the kinematic axis's number.
                    The axis number is used in cases where an axis is programmed through a number 
                    instead of through an address (e.g. on Siemens 840D: AX1=10 instead of X10).
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: int Number
            (
            );
            /**Sets  the kinematic axis's number.
                    The axis number is used in cases where an axis is programmed through a number 
                    instead of through an address (e.g. on Siemens 840D: AX1=10 instead of X10).
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetNumber
            (
                int number /** the axis's new number */
            );
            /**Returns  the junction 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: NXOpen::SIM::KinematicJunction * Junction
            (
            );
            /**Sets  the junction 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetJunction
            (
                NXOpen::SIM::KinematicJunction * jct /** the junction */
            );
            /**Returns  the axis direction 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: NXOpen::SIM::KinematicAxisBuilder::AxisDirectionType Direction
            (
            );
            /**Sets  the axis direction 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetDirection
            (
                NXOpen::SIM::KinematicAxisBuilder::AxisDirectionType axisDir /** the axis direction */
            );
            /**Returns  the axis motion 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: NXOpen::SIM::KinematicAxisBuilder::AxisMotionType Type
            (
            );
            /**Sets  the axis motion 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetType
            (
                NXOpen::SIM::KinematicAxisBuilder::AxisMotionType type /** the axis type */
            );
            /**Returns  the initial value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double InitialValue
            (
            );
            /**Sets  the initial value 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetInitialValue
            (
                double initial /** the initial value */
            );
            /**Returns  the axis limits flag
                     <br> This property is deprecated. Use @link SIM::KinematicAxisBuilder::AxisMotionType SIM::KinematicAxisBuilder::AxisMotionType @endlink and @link SIM::KinematicAxisBuilder::SetAxisMotionType SIM::KinematicAxisBuilder::SetAxisMotionType @endlink  instead.
                     <br>  
             <br>  @deprecated Deprecated in NX9.0.3.  Use @link SIM::KinematicAxisBuilder::AxisMotionType SIM::KinematicAxisBuilder::AxisMotionType @endlink and @link SIM::KinematicAxisBuilder::SetAxisMotionType SIM::KinematicAxisBuilder::SetAxisMotionType @endlink  instead. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public:  NX_DEPRECATED("Deprecated in NX9.0.3.  Use SIM::KinematicAxisBuilder::AxisMotionType SIM::KinematicAxisBuilder::AxisMotionType @endlink and @link SIM::KinematicAxisBuilder::SetAxisMotionType SIM::KinematicAxisBuilder::SetAxisMotionType @endlink  instead.") bool Limit
            (
            );
            /**Sets  the axis limits flag
                     <br> This property is deprecated. Use @link SIM::KinematicAxisBuilder::AxisMotionType SIM::KinematicAxisBuilder::AxisMotionType @endlink and @link SIM::KinematicAxisBuilder::SetAxisMotionType SIM::KinematicAxisBuilder::SetAxisMotionType @endlink  instead.
                     <br>  
             <br>  @deprecated Deprecated in NX9.0.3.  Use @link SIM::KinematicAxisBuilder::AxisMotionType SIM::KinematicAxisBuilder::AxisMotionType @endlink and @link SIM::KinematicAxisBuilder::SetAxisMotionType SIM::KinematicAxisBuilder::SetAxisMotionType @endlink  instead. <br>  

             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public:  NX_DEPRECATED("Deprecated in NX9.0.3.  Use SIM::KinematicAxisBuilder::AxisMotionType SIM::KinematicAxisBuilder::AxisMotionType @endlink and @link SIM::KinematicAxisBuilder::SetAxisMotionType SIM::KinematicAxisBuilder::SetAxisMotionType @endlink  instead.") void SetLimit
            (
                bool onOff /** the axis limits flag */
            );
            /**Returns  the upper limit 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double UpperLimit
            (
            );
            /**Sets  the upper limit 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetUpperLimit
            (
                double upper /** the upper limit */
            );
            /**Returns  the lower limit 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double LowerLimit
            (
            );
            /**Sets  the lower limit 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetLowerLimit
            (
                double lower /** the lower limit */
            );
            /**Returns  the upper soft limit.
                    The soft limit on the real machine is checked by the controller to avoid that the machine
                    travels into the mechanical stop (Hard Limit) with full speed (prevent damage) 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double UpperSoftLimit
            (
            );
            /**Sets  the upper soft limit.
                    The soft limit on the real machine is checked by the controller to avoid that the machine
                    travels into the mechanical stop (Hard Limit) with full speed (prevent damage) 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetUpperSoftLimit
            (
                double upper /** the upper soft limit */
            );
            /**Returns  the lower soft limit.
                    The soft limit on the real machine is checked by the controller to avoid that the machine
                    travels into the mechanical stop (Hard Limit) with full speed (prevent damage) 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double LowerSoftLimit
            (
            );
            /**Sets  the lower soft limit.
                    The soft limit on the real machine is checked by the controller to avoid that the machine
                    travels into the mechanical stop (Hard Limit) with full speed (prevent damage) 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetLowerSoftLimit
            (
                double lower /** the lower soft limit */
            );
            /**Returns  the maximum velocity 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double MaximumVelocity
            (
            );
            /**Sets  the maximum velocity 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetMaximumVelocity
            (
                double velocity /** the maximum velocity */
            );
            /**Returns  the jerk limit.
                    The jerk limit value limits jumps in acceleration. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double JerkLimit
            (
            );
            /**Sets  the jerk limit.
                    The jerk limit value limits jumps in acceleration. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetJerkLimit
            (
                double jerk /** the jerk limit */
            );
            /**Returns  the jump velocity.
                    The jump velocity define a lag time at the beginning of the motion. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double JumpVelocity
            (
            );
            /**Sets  the jump velocity.
                    The jump velocity define a lag time at the beginning of the motion. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetJumpVelocity
            (
                double jump /** the Jump Velocity */
            );
            /**Returns  the max acceleration.
                    The maximum acceleration defines how fast the axis can accelerate. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double MaxAcceleration
            (
            );
            /**Sets  the max acceleration.
                    The maximum acceleration defines how fast the axis can accelerate. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetMaxAcceleration
            (
                double max /** the Max Acceleration */
            );
            /**Returns  the max deceleration.
                    The maximum deceleration defines how fast the axis can decelerate. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double MaxDeceleration
            (
            );
            /**Sets  the max deceleration.
                    The maximum deceleration defines how fast the axis can decelerate. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetMaxDeceleration
            (
                double max /** the Max Deceleration */
            );
            /**Returns  the fine precision.
                    This defines the exact stop precision used to determine if a target point has been
                    reached, so that the next NC-block can be executed. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double FinePrecision
            (
            );
            /**Sets  the fine precision.
                    This defines the exact stop precision used to determine if a target point has been
                    reached, so that the next NC-block can be executed. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetFinePrecision
            (
                double fine /** the Fine Precision */
            );
            /**Returns  the coarse precision.
                    This defines the exact stop precision used to determine if a target point has been
                    reached, so that the next NC-block can be executed. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double CoarsePrecision
            (
            );
            /**Sets  the coarse precision.
                    This defines the exact stop precision used to determine if a target point has been
                    reached, so that the next NC-block can be executed. 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetCoarsePrecision
            (
                double coarse /** the Coarse Precision */
            );
            /**Returns  the kv.
                    the Kv-Factor is a parameter of the drives. It influences the dragging error (difference
                    between ideal motion profile and actual motion profile). 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: double Kv
            (
            );
            /**Sets  the kv.
                    the Kv-Factor is a parameter of the drives. It influences the dragging error (difference
                    between ideal motion profile and actual motion profile). 
             <br>  Created in NX9.0.3.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") OR nx_isv_mtb ("Machine Tool Builder") */
            public: void SetKv
            (
                double kv /** the Kv */
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
