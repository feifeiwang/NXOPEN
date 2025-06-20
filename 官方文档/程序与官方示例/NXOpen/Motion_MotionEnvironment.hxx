#ifndef NXOpen_MOTION_MOTIONENVIRONMENT_HXX_INCLUDED
#define NXOpen_MOTION_MOTIONENVIRONMENT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Motion_MotionEnvironment.ja
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
#include <NXOpen/libnxopencpp_motion_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Motion
    {
        class MotionEnvironment;
    }
    namespace Motion
    {
        class MotionSession;
    }
    namespace Motion
    {
        class MotionEnvironmentImpl;
        /** Represents a Motion Environment  <br> To obtain an instance of this class, refer to @link NXOpen::Motion::MotionSession  NXOpen::Motion::MotionSession @endlink  <br> 
         <br>  Created in NX7.5.0.  <br>  
        */
        class NXOPENCPP_MOTIONEXPORT  MotionEnvironment
        {
            /** Represents analysis type of current mechanisms */
            public: enum Analysis
            {
                AnalysisNoType/** No analysis type*/,
                AnalysisKinematics/** Kinematics analysis type */,
                AnalysisDynamics/** Dynamics analysis type*/
            };

            /** Represents Motion solver of current mechanism */
            public: enum Solver
            {
                SolverNone = -1/** No solver */,
                SolverRecurdyn/** Motion solver RecurDyn */,
                SolverAdams/** Motion solver Adams */,
                SolverLms/** Motion solver LMS */
            };

            /** Represents the on-off status of joint wizard */
            public: enum JointWizardStatus
            {
                JointWizardStatusUndefined = -1/** Undefined status */,
                JointWizardStatusOff/** Joint Wizard is turned off */,
                JointWizardStatusOn/** Joint Wizard is turned on */
            };

            /** Represents the on-off status of adopt assembly joint */
            public: enum AdoptAssemblyJointStatus
            {
                AdoptAssemblyJointStatusUndefined = -1/** Undefined status */,
                AdoptAssemblyJointStatusOff/** Adopt Assembly Joint is turned off */,
                AdoptAssemblyJointStatusOn/** Adopt Assembly Joint is turned on */
            };

            private: MotionEnvironmentImpl * m_motionenvironment_impl;
            private: NXOpen::Motion::MotionSession* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit MotionEnvironment(NXOpen::Motion::MotionSession *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~MotionEnvironment();
            /** Sets the the analysis type 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetAnalysisType
            (
                NXOpen::Motion::MotionEnvironment::Analysis analysisType /** The analysis type */
            );
            /** Sets the on-off status of joint wizard 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetJointWizardStatus
            (
                NXOpen::Motion::MotionEnvironment::JointWizardStatus setting /** setting */ 
            );
            /** Gets the on-off status of joint wizard  @return  
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: NXOpen::Motion::MotionEnvironment::JointWizardStatus GetJointWizardStatus
            (
            );

            /// \cond NX_NO_DOC 
            /** Sets the on-off status of adopt assembly joint 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetAdoptAssemblyJointStatus
            (
                NXOpen::Motion::MotionEnvironment::AdoptAssemblyJointStatus setting /** setting */ 
            );

            /// \endcond 

            /// \cond NX_NO_DOC 
            /** Gets the on-off status of adopt assembly joint  @return  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: NXOpen::Motion::MotionEnvironment::AdoptAssemblyJointStatus GetAdoptAssemblyJointStatus
            (
            );

            /// \endcond 
            /** Checks the motor license 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void CheckMotorLicense
            (
                bool checkMotorLicense /** Checks out or checks in motor license */
            );
            /** Checks the co-simulation license 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void CheckCosimLicense
            (
                bool checkCosimLicense /** Checks out or checks in co-simulation license */
            );
            /** Checks the flexible body dynamic license 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void CheckFlexbodyLicense
            (
                bool checkFlexbodyLicense /** Checks out or checks in flexible body dynamic license */
            );
            /** Sets component based mechanism 
             <br>  Created in NX7.5.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetComponentBasedMechanism
            (
                bool componentBasedMech /** Sets component based mechanism */
            );
            /** Sets Motion solver 
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void SetSolver
            (
                NXOpen::Motion::MotionEnvironment::Solver solver /** solver */ 
            );
            /** Gets current Motion solver  @return  
             <br>  Created in NX10.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: NXOpen::Motion::MotionEnvironment::Solver GetSolver
            (
            );
            /** Enable the mechatronics 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void EnableMechatronics
            (
                bool enableMechatronicsLicense /** enable or disable mechatronics */
            );
            /** Enable the LMS flexible body dynamics 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void EnableLmsflexbody
            (
                bool enableLmsflexbody /** enable or disable LMS flex body dynamics */
            );
            /** Enable the standard tire 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void EnableStdtire
            (
                bool enableStdtire /** enable out or disable Standard Tire */
            );
            /** Enable the TNO tire 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void EnableTnotire
            (
                bool enableTnotiree /** enable or disable TNO Tire */
            );
            /** Enable the Swift tire 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void EnableSwifttire
            (
                bool enableSwifttire /** enable or disable Swift Tire */
            );
            /** Enable the CD tire 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : mechanisms ("MECHANISMS") */
            public: void EnableCdtire
            (
                bool enableCdtire /** enable or disable CD Tire */
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
