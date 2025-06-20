#ifndef NXOpen_GEOMETRICANALYSIS_HIGHLIGHTLINESANALYSISBUILDER_HXX_INCLUDED
#define NXOpen_GEOMETRICANALYSIS_HIGHLIGHTLINESANALYSISBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     GeometricAnalysis_HighlightLinesAnalysisBuilder.ja
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
#include <NXOpen/GeometricAnalysis_HighlightLinesAnalysisBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/SelectObjectList.hxx>
#include <NXOpen/ugmath.hxx>
#include <NXOpen/libnxopencpp_geometricanalysis_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace GeometricAnalysis
    {
        class HighlightLinesAnalysisBuilder;
    }
    class Builder;
    class Direction;
    class Expression;
    class SelectDisplayableObjectList;
    class SelectPointList;
    namespace GeometricAnalysis
    {
        class _HighlightLinesAnalysisBuilderBuilder;
        class HighlightLinesAnalysisBuilderImpl;
        /** 
            Represents a
            @link NXOpen::GeometricAnalysis::HighlightLinesAnalysis NXOpen::GeometricAnalysis::HighlightLinesAnalysis@endlink 
            builder. Highlight Lines Analysis function can produce both reflection lines and projection
            lines which are used to evaluate the surface quality and continuity between adjacent surfaces.
             <br> To create a new instance of this class, use @link NXOpen::GeometricAnalysis::AnalysisObjectCollection::CreateHighlightLinesAnalysisBuilder  NXOpen::GeometricAnalysis::AnalysisObjectCollection::CreateHighlightLinesAnalysisBuilder @endlink  <br> 
        Default values.
        <table border="1"> 
         
        <tr><th> 
        Property</th>  <th> 
        Value</th> </tr>
        <tr><td> 
         
        EndIsoAngle.Value </td> <td> 
         
        90 </td> </tr> 

        <tr><td> 
         
        LightNumber </td> <td> 
         
        10 </td> </tr> 

        <tr><td> 
         
        LightSpacing </td> <td> 
         
        50.0 (millimeters part), 2.0 (inches part) </td> </tr> 

        <tr><td> 
         
        Resolution </td> <td> 
         
        Fine </td> </tr> 

        <tr><td> 
         
        StartIsoAngle.Value </td> <td> 
         
        -90 </td> </tr> 

        </table>  

         <br>  Created in NX6.0.0.  <br>  
        */
        class NXOPENCPP_GEOMETRICANALYSISEXPORT  HighlightLinesAnalysisBuilder : public NXOpen::Builder
        {
            /** three types of light methods 
             <br>  @deprecated Deprecated in NX8.0.0.  Use @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacements NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacements @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacements NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacements @endlink  instead. <br>  
            */
            public: enum NX_DEPRECATED("Deprecated in NX8.0.0.  Use NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacements NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacements @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacements NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacements @endlink  instead.")  Types
            {
                TypesUniform/** Uniform: Lights are placed uniformly on light plane */,
                TypesThroughPoints/** Through Points: A highlight line is guaranteed to pass through a surface point. */,
                TypesBetweenPoints/** Between Points: Two highlight lines are guaranteed to
                        pass through two given surface points. More highlight lines
                        are created between these two highlight lines when light
                        number is more than two. */
            };

            /** four types of display methods */
            public: enum Types2
            {
                Types2Reflection/** Create reflection lines */,
                Types2Projection/** Create projection lines */,
                Types2Isoclines/** Create isoclines */,
                Types2Zebra/** Create zebra contour lines */
            };

            /** resolution options */
            public: enum Resolutions
            {
                ResolutionsCoarse/** Coarse */,
                ResolutionsStandard/** Standard */,
                ResolutionsFine/** Fine */,
                ResolutionsExtraFine/** Extra Fine */,
                ResolutionsSuperFine/** Super Fine */,
                ResolutionsUltraFine/** Ultra Fine */
            };

            /** display methods 
             <br>  @deprecated Deprecated in NX8.0.0.  Use @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types2 @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetTypes2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetTypes2 @endlink  instead. <br>  
            */
            public: enum NX_DEPRECATED("Deprecated in NX8.0.0.  Use NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types2 @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetTypes2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetTypes2 @endlink  instead.")  DisplayMethods
            {
                DisplayMethodsReflection/** Create reflection lines */,
                DisplayMethodsProjection/** Create projection lines */
            };

            /** light placement */
            public: enum LightPlacements
            {
                LightPlacementsUniform/** Uniform: Lights are placed uniformly on light plane */,
                LightPlacementsThroughPoints/** Through Points: A highlight line is guaranteed to pass through a surface point. */,
                LightPlacementsBetweenPoints/** Between Points: Two highlight lines are guaranteed to
                        pass through two given surface points. More highlight lines
                        are created between these two highlight lines when light
                        number is more than two. */
            };

            /** light plane options*/
            public: enum LightPlaneOptions
            {
                LightPlaneOptionsYZ/** Uses YC-ZC plane as light plane */,
                LightPlaneOptionsZX/** Uses XC-ZC plane as light plane */,
                LightPlaneOptionsXY/** Uses XC-YC plane as light plane */,
                LightPlaneOptionsArbitrary/** Uses an arbitrary plane as light plane */
            };

            private: HighlightLinesAnalysisBuilderImpl * m_highlightlinesanalysisbuilder_impl;
            private: friend class  _HighlightLinesAnalysisBuilderBuilder;
            protected: HighlightLinesAnalysisBuilder();
            public: ~HighlightLinesAnalysisBuilder();
            /**Returns  the face list 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectDisplayableObjectList * Faces
            (
            );
            /**Returns  the through points 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectPointList * ThroughPoints
            (
            );
            /**Returns  the between points 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::SelectPointList * BetweenPoints
            (
            );
            /**Returns  the number of lights. It's used by Uniform type and Between Points type. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: int LightNumber
            (
            );
            /**Sets  the number of lights. It's used by Uniform type and Between Points type. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightNumber
            (
                int lightNumber /** lightnumber */ 
            );
            /**Returns  the light spacing between two adjacent lights. It's used by Uniform type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: double LightSpacing
            (
            );
            /**Sets  the light spacing between two adjacent lights. It's used by Uniform type 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightSpacing
            (
                double lightSpacing /** lightspacing */ 
            );
            /**Returns  the ratio of light size to light spacing. It is used by reflection contours 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: double LightWidth
            (
            );
            /**Sets  the ratio of light size to light spacing. It is used by reflection contours 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightWidth
            (
                double lightWidth /** lightwidth */ 
            );
            /**Returns  the ratio of blended texels to all light texels. It is used by reflection contours 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: double LightDiffuseness
            (
            );
            /**Sets  the ratio of blended texels to all light texels. It is used by reflection contours 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightDiffuseness
            (
                double lightDiffuseness /** lightdiffuseness */ 
            );
            /** Gets the color of the dark (unlit) areas of reflection contours  @return  Array of 3 RGB values, each between 0 and 1 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<double> GetDarkColor
            (
            );
            /** Sets the color of the dark (unlit) areas of reflection contours 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetDarkColor
            (
                const std::vector<double> & darkColor /** Array of 3 RGB values, each between 0 and 1 */
            );
            /** Gets the color of the bright (lit) areas of reflection contours  @return  Array of 3 RGB values, each between 0 and 1 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<double> GetBrightColor
            (
            );
            /** Sets the color of the bright (lit) areas of reflection contours 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetBrightColor
            (
                const std::vector<double> & brightColor /** Array of 3 RGB values, each between 0 and 1 */
            );
            /**Returns  the start angle for isoclines (uniform) 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * StartIsoAngle
            (
            );
            /**Returns  the end angle for isoclines (uniform) 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Expression * EndIsoAngle
            (
            );
            /**Returns  the vector to define isoclines 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Direction * IsoclineVector
            (
            );
            /**Sets  the vector to define isoclines 
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetIsoclineVector
            (
                NXOpen::Direction * isoclineVector /** isoclinevector */ 
            );
            /** Reinitialize light plane based on the selected faces. If
                    more faces are selected, you may need to change
                    light plane, so the light plane could be better centered. 
             <br>  @deprecated Deprecated in NX8.0.0.  This call currently does not do anything.  Calls to this method can be safely removed. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  This call currently does not do anything.  Calls to this method can be safely removed.") void ReinitializePlane
            (
            );
            /**Returns  the origin of the light plane 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Point3d LightPlaneOrigin
            (
            );
            /** Sets the origin of the light plane. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightPlaneOrigin
            (
                const NXOpen::Point3d & origin /** coordinates of origin */
            );
            /**Returns  the x-axis of the light plane 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Vector3d LightPlaneXAxis
            (
            );
            /** Sets the x-axis of the light plane. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightPlaneXAxis
            (
                const NXOpen::Vector3d & xAxis /** x-axis vector */
            );
            /**Returns  the y-axis of the light plane 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Vector3d LightPlaneYAxis
            (
            );
            /** Sets the y-axis of the light plane. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightPlaneYAxis
            (
                const NXOpen::Vector3d & yAxis /** y-axis vector */
            );
            /**Returns  the display method 
             <br>  @deprecated Deprecated in NX8.0.0.  Use @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 @endlink  instead. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Use NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 @endlink  instead.") NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::DisplayMethods DisplayMethod
            (
            );
            /**Sets  the display method 
             <br>  @deprecated Deprecated in NX8.0.0.  Use @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 @endlink  instead. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Use NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Type2 @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetType2 @endlink  instead.") void SetDisplayMethod
            (
                NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::DisplayMethods displayMethod /** displaymethod */ 
            );
            /**Returns  the lock reflection. When the lock is on, the reflection lines will be freezed
                    while the view is changing. Otherwise, the reflection lines
                    will be updated continuously while view is changing. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: bool IsReflectionLocked
            (
            );
            /**Sets  the lock reflection. When the lock is on, the reflection lines will be freezed
                    while the view is changing. Otherwise, the reflection lines
                    will be updated continuously while view is changing. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetReflectionLocked
            (
                bool isReflectionLocked /** isreflectionlocked */ 
            );
            /**Returns  the resolution. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Resolutions Resolution
            (
            );
            /**Sets  the resolution. 
             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetResolution
            (
                NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Resolutions resolution /** resolution */ 
            );
            /**Returns  the type 
             <br>  @deprecated Deprecated in NX8.0.0.  Use @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement @endlink  instead. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : None */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Use NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement @endlink  instead.") NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types Type
            (
            );
            /**Sets  the type 
             <br>  @deprecated Deprecated in NX8.0.0.  Use @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement @endlink  instead. <br>  

             <br>  Created in NX6.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public:  NX_DEPRECATED("Deprecated in NX8.0.0.  Use NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacement @endlink and @link NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::SetLightPlacement @endlink  instead.") void SetType
            (
                NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types type /** type */ 
            );
            /**Returns  the light placement 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacements LightPlacement
            (
            );
            /**Sets  the light placement 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetLightPlacement
            (
                NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::LightPlacements placement /** placement */ 
            );
            /**Returns  the display type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types2 Type2
            (
            );
            /**Sets  the display type 
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : studio_analyze ("STUDIO ANALYZE") */
            public: void SetType2
            (
                NXOpen::GeometricAnalysis::HighlightLinesAnalysisBuilder::Types2 type /** type */ 
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
