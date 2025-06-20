#ifndef NXOpen_CAM_SIMULATIONOPTIONSBUILDER_HXX_INCLUDED
#define NXOpen_CAM_SIMULATIONOPTIONSBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAM_SimulationOptionsBuilder.ja
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
#include <NXOpen/CAM_SimulationOptionsBuilder.hxx>
#include <NXOpen/Builder.hxx>
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
        class SimulationOptionsBuilder;
    }
    class Builder;
    namespace CAM
    {
        class CollisionConfigurationBuilder;
    }
    class NXColor;
    namespace CAM
    {
        class _SimulationOptionsBuilderBuilder;
        class SimulationOptionsBuilderImpl;
        /**
            Represents a @link NXOpen::CAM::SimulationOptionsBuilder NXOpen::CAM::SimulationOptionsBuilder@endlink 
             <br> To create a new instance of this class, use @link NXOpen::SIM::KinematicConfigurator::CreateSimulationOptionsBuilder  NXOpen::SIM::KinematicConfigurator::CreateSimulationOptionsBuilder @endlink  <br> 
         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_CAMEXPORT  SimulationOptionsBuilder : public NXOpen::Builder
        {
            /** the dialog type */
            public: enum DialogType
            {
                DialogTypeSimulate/** simulate*/,
                DialogTypeMachineToolBuilder/** machine tool builder*/,
                DialogTypeSynchronize/** synchronize*/,
                DialogTypeInspection/** inspection*/
            };

            /**  @brief  
                        The modes of the simulation display.
                        - @link  NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayModeSuppressAll   NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayModeSuppressAll @endlink  will suppress display updates in graphics windows and NC program in Simulation Control Panel.
                        - @link  NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayModeSuppressGraphics   NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayModeSuppressGraphics @endlink  will suppress display updates in graphics windows.
                        - @link  NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayModeAll   NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayModeAll @endlink  will show all display updates in graphics windows and NC program in Simulation Control Panel.
                     

              */
            public: enum SimulationDisplayMode
            {
                SimulationDisplayModeSuppressAll/** suppress graphics and NC program updates */,
                SimulationDisplayModeSuppressGraphics/** suppress graphics updates */,
                SimulationDisplayModeAll/** show all */
            };

            /** the enable value */
            public: enum Enable
            {
                EnableNo/** no */,
                EnableYes/** yes */
            };

            /** the ipw mode value */
            public: enum IpwEnable
            {
                IpwEnableOff/** no*/,
                IpwEnableMotionBased/** motion based*/,
                IpwEnableLengthIncrement/** length increment*/
            };

            /** The stationary options */
            public: enum Stationary
            {
                StationaryEath/** use earth stationary*/,
                StationaryPart/** use part stationary*/,
                StationaryTool/** use tool stationary*/
            };

            /** The ipw resolution options */
            public: enum Resolution
            {
                ResolutionFast/** use fast resolution*/,
                ResolutionNormal/** use normal resolution*/,
                ResolutionFine/** use fine resolution*/,
                ResolutionExtraFine/** use extra fine resolution*/
            };

            /** The ipw animation accuracy options */
            public: enum Accuracy
            {
                AccuracyFine/** use fine accuracy*/,
                AccuracyCoarse/** use coarse accuracy*/
            };

            /** The tool shape for checking options */
            public: enum ToolShapeColl
            {
                ToolShapeCollUnknown/** unknown shape*/,
                ToolShapeCollParameter/** use parametric tool shape*/,
                ToolShapeCollAssembly/** use assembly tool shape*/
            };

            /** The tool shape for material removal options */
            public: enum ToolShapeMR
            {
                ToolShapeMRParameter = 1/** use parametric tool shape*/,
                ToolShapeMRAssembly/** use assembly tool shape*/
            };

            /** Gouge Check Stock options */
            public: enum StockType
            {
                StockTypeAutomatic/** use automatic stock from OP*/,
                StockTypeUserDefined/** use user defined stock*/
            };

            private: SimulationOptionsBuilderImpl * m_simulationoptionsbuilder_impl;
            private: friend class  _SimulationOptionsBuilderBuilder;
            protected: SimulationOptionsBuilder();
            public: ~SimulationOptionsBuilder();
            /**Returns  the enable display 
             <br>  @deprecated Deprecated in NX10.0.2.  Use @link CAM::SimulationOptionsBuilder::SimulationDisplay CAM::SimulationOptionsBuilder::SimulationDisplay@endlink  instead. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX10.0.2.  Use CAM::SimulationOptionsBuilder::SimulationDisplay instead.") NXOpen::CAM::SimulationOptionsBuilder::Enable EnableDisplay
            (
            );
            /**Sets  the enable display 
             <br>  @deprecated Deprecated in NX10.0.2.  Use @link CAM::SimulationOptionsBuilder::SetSimulationDisplay CAM::SimulationOptionsBuilder::SetSimulationDisplay@endlink  instead. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public:  NX_DEPRECATED("Deprecated in NX10.0.2.  Use CAM::SimulationOptionsBuilder::SetSimulationDisplay instead.") void SetEnableDisplay
            (
                NXOpen::CAM::SimulationOptionsBuilder::Enable enableValue /** enablevalue */ 
            );
            /**Returns  the option to control the display update. 
             <br>  Created in NX10.0.2.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayMode SimulationDisplay
            (
            );
            /**Sets  the option to control the display update. 
             <br>  Created in NX10.0.2.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetSimulationDisplay
            (
                NXOpen::CAM::SimulationOptionsBuilder::SimulationDisplayMode simulationDisplayValue /** simulationdisplayvalue */ 
            );
            /**Returns  the display stationary 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::Stationary DisplayStationary
            (
            );
            /**Sets  the display stationary 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetDisplayStationary
            (
                NXOpen::CAM::SimulationOptionsBuilder::Stationary displayStationary /** displaystationary */ 
            );
            /**Returns  the history buffer 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int HistoryBuffer
            (
            );
            /**Sets  the history buffer 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetHistoryBuffer
            (
                int historyBuffer /** historybuffer */ 
            );
            /**Returns  the stop on history buffer 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool StopOnHistoryBuffer
            (
            );
            /**Sets  the stop on history buffer 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetStopOnHistoryBuffer
            (
                bool stopOnHistoryBuffer /** -1 = unlimited */
            );
            /**Returns  the tool trace size 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: int ToolTraceSize
            (
            );
            /**Sets  the tool trace size 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetToolTraceSize
            (
                int toolTraceSize /** -1 = unlimited */
            );
            /**Returns  the enable collision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::Enable EnableCollision
            (
            );
            /**Sets  the enable collision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetEnableCollision
            (
                NXOpen::CAM::SimulationOptionsBuilder::Enable enableValue /** enablevalue */ 
            );
            /**Returns  the enable ipw 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::IpwEnable EnableIpw
            (
            );
            /**Sets  the enable ipw 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetEnableIpw
            (
                NXOpen::CAM::SimulationOptionsBuilder::IpwEnable enableValue /** enablevalue */ 
            );
            /**Returns  the ipw resolution 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::Resolution IpwResolution
            (
            );
            /**Sets  the ipw resolution 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetIpwResolution
            (
                NXOpen::CAM::SimulationOptionsBuilder::Resolution ipwResolution /** ipwresolution */ 
            );
            /**Returns  the animation accuracy 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::Accuracy AnimationAccuracy
            (
            );
            /**Sets  the animation accuracy 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetAnimationAccuracy
            (
                NXOpen::CAM::SimulationOptionsBuilder::Accuracy animationAccuracy /** animationaccuracy */ 
            );
            /**Returns  the ipw color 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::NXColor * IpwColor
            (
            );
            /**Sets  the ipw color 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetIpwColor
            (
                NXOpen::NXColor * ipwColor /** ipwcolor */ 
            );
            /**Returns  the translucency value 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int TranslucencyValue
            (
            );
            /**Sets  the translucency value 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetTranslucencyValue
            (
                int translucencyValue /** translucencyvalue */ 
            );
            /**Returns  the save as partfile 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool SaveAsPartfile
            (
            );
            /**Sets  the save as partfile 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetSaveAsPartfile
            (
                bool saveAsComp /** saveascomp */ 
            );
            /**Returns  the stop on rapid through ipw 
             <br>  Created in NX9.0.2.  <br>  
             <br> License requirements : None */
            public: bool StopOnRapidThroughIpw
            (
            );
            /**Sets  the stop on rapid through ipw 
             <br>  Created in NX9.0.2.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetStopOnRapidThroughIpw
            (
                bool stopOnRapidThroughIpw /** stoponrapidthroughipw */ 
            );
            /**Returns  the hide blank geometry 
             <br>  Created in NX9.0.2.  <br>  
             <br> License requirements : None */
            public: bool HideBlankGeometry
            (
            );
            /**Sets  the hide blank geometry 
             <br>  Created in NX9.0.2.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetHideBlankGeometry
            (
                bool hideBlankGeo /** hideblankgeo */ 
            );
            /**Returns  the hide part geometry 
             <br>  Created in NX9.0.2.  <br>  
             <br> License requirements : None */
            public: bool HidePartGeometry
            (
            );
            /**Sets  the hide part geometry 
             <br>  Created in NX9.0.2.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetHidePartGeometry
            (
                bool hidePartGeo /** hidepartgeo */ 
            );
            /**Returns  the check for tool holder collision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool CheckToolHolder
            (
            );
            /**Sets  the check for tool holder collision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetCheckToolHolder
            (
                bool checkToolHolder /** checktoolholder */ 
            );
            /**Returns  the max length incr 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double MaxLengthIncr
            (
            );
            /**Sets  the max length incr 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetMaxLengthIncr
            (
                double maxLengthIncr /** maxlengthincr */ 
            );
            /**Returns  the max angular incr 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double MaxAngularIncr
            (
            );
            /**Sets  the max angular incr 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetMaxAngularIncr
            (
                double maxAngularIncr /** maxangularincr */ 
            );
            /**Returns  the max time incr 
             <br>  Created in NX10.0.2.  <br>  
             <br> License requirements : None */
            public: double MaxTimeIncr
            (
            );
            /**Sets  the max time incr 
             <br>  Created in NX10.0.2.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetMaxTimeIncr
            (
                double maxTimeIncr /** maxtimeincr */ 
            );
            /**Returns  the display by time 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool DisplayByTime
            (
            );
            /**Sets  the display by time 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetDisplayByTime
            (
                bool displayByTime /** displaybytime */ 
            );
            /**Returns  the minimum simulation time 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: double MinSimulationTime
            (
            );
            /**Sets  the minimum simulation time 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetMinSimulationTime
            (
                double minSimTime /** minsimtime */ 
            );
            /**Returns  the chordal tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double ChordalTolerance
            (
            );
            /**Sets  the chordal tolerance 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetChordalTolerance
            (
                double chordalTolerance /** chordaltolerance */ 
            );
            /**Returns  the stop on collision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool StopOnCollision
            (
            );
            /**Sets  the stop on collision 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetStopOnCollision
            (
                bool stopOnCollision /** stoponcollision */ 
            );
            /**Returns  the check limit violation 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: bool CheckLimitViolation
            (
            );
            /**Sets  the check limit violation 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetCheckLimitViolation
            (
                bool checkLimitViolation /** checklimitviolation */ 
            );
            /**Returns  the stop on limit violation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool StopOnLimitViolation
            (
            );
            /**Sets  the stop on limit violation 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetStopOnLimitViolation
            (
                bool stopOnLimitViolation /** stoponlimitviolation */ 
            );
            /**Returns  the cache nc program 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool CacheNcProgram
            (
            );
            /**Sets  the cache nc program 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetCacheNcProgram
            (
                bool cacheNcProgram /** cachencprogram */ 
            );
            /**Returns  the interpret G41/42 as contact contour 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool InterpretContactContour
            (
            );
            /**Sets  the interpret G41/42 as contact contour 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: void SetInterpretContactContour
            (
                bool interpretContactContour /** interpretcontactcontour */ 
            );
            /**Returns  the collision configuration builder 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : ug_isv_full ("Full functionality for Integrated Simulation and Verification") */
            public: NXOpen::CAM::CollisionConfigurationBuilder * CollisionConfigurationBuilder
            (
            );
            /**Returns  the tool shape for collision 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::ToolShapeColl Collshape
            (
            );
            /**Sets  the tool shape for collision 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetCollshape
            (
                NXOpen::CAM::SimulationOptionsBuilder::ToolShapeColl toolShape /** toolshape */ 
            );
            /**Returns  the tool shape for material removal 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::ToolShapeMR Mrshape
            (
            );
            /**Sets  the tool shape for material removal 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetMrshape
            (
                NXOpen::CAM::SimulationOptionsBuilder::ToolShapeMR toolShape /** toolshape */ 
            );
            /**Returns  the stock setting 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::CAM::SimulationOptionsBuilder::StockType StockSetting
            (
            );
            /**Sets  the stock setting 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetStockSetting
            (
                NXOpen::CAM::SimulationOptionsBuilder::StockType stockmode /** stockmode */ 
            );
            /**Returns  the stock value  
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: double StockValue
            (
            );
            /**Sets  the stock value  
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : cam_base ("CAM BASE") */
            public: void SetStockValue
            (
                double stock /** stock */ 
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
