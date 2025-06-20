#ifndef NXOpen_ROUTING_SEGMENTMANAGER_HXX_INCLUDED
#define NXOpen_ROUTING_SEGMENTMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Routing_SegmentManager.ja
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
#include <NXOpen/Routing_HealPath.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_routing_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Routing
    {
        class SegmentManager;
    }
    class Part;
    namespace Assemblies
    {
        class Component;
    }
    class Curve;
    class DisplayableObject;
    namespace Routing
    {
        class ArcSegmentCollection;
    }
    namespace Routing
    {
        class ControlPoint;
    }
    namespace Routing
    {
        class HealPath;
    }
    namespace Routing
    {
        class ISegment;
    }
    namespace Routing
    {
        class ISegmentCollection;
    }
    namespace Routing
    {
        class LineSegmentCollection;
    }
    namespace Routing
    {
        class Port;
    }
    namespace Routing
    {
        class SplineSegmentCollection;
    }
    namespace Routing
    {
        /** Option to indicate if an existing @link NXOpen::Routing::LineSegment NXOpen::Routing::LineSegment@endlink ,
                @link NXOpen::Routing::ArcSegment NXOpen::Routing::ArcSegment@endlink  or
                @link NXOpen::Routing::SplineSegment NXOpen::Routing::SplineSegment@endlink  is user defined. */
        enum UserDefined
        {
            UserDefinedNotUserDefined/** System generated segment.
                                                                          System manages simplification and some update behavior. */,
            UserDefinedUserDefined/** User defined generated segment. */
        };

        /** Option to query if an existing @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink 
                is a terminal segment. */
        enum Terminal
        {
            TerminalNotTerminalSeg/** Is not a terminal segment */,
            TerminalTerminalSeg/** Is a terminal segment */
        };

        /** Option to query if an existing @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink 
                is interior to any @link NXOpen::Part NXOpen::Part@endlink . */
        enum Interior
        {
            InteriorNotInteriorToPart/** Is not interior to any part */,
            InteriorInteriorToPart/** Is interior to some part */
        };

        /** Option to query if an existing @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink 
            is a eccentric segment. */
        enum Eccentric
        {
            EccentricNotEccentricSeg/** Is not a eccentric segment */,
            EccentricEccentricSeg/** Is a eccentric segment */
        };

        /** Option to query if an existing @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink 
            is a eccentric segment. */
        enum ConvertLinearToEccentricLinear
        {
            ConvertLinearToEccentricLinearNotConverted/** Is not converted linear to Eccentric linear */,
            ConvertLinearToEccentricLinearConverted/** Is converted linear to Eccentric linear */
        };

        /** Option to query if an existing @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink 
            is a eccentric segment. */
        enum ConvertEccentricLinearToLinear
        {
            ConvertEccentricLinearToLinearNotConverted/** Is not converted Eccentric linear to linear */,
            ConvertEccentricLinearToLinearConverted/** Is converted Eccentric linear to linear */
        };

    }
    namespace Routing
    {
        class SegmentManagerImpl;
        /** Contains the type of the routing part as well as the Collection objects for creating/iterating
                over routing objects.
             <br> To obtain an instance of this class, refer to @link NXOpen::Part  NXOpen::Part @endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_ROUTINGEXPORT  SegmentManager
        {
            /** Specifies spacing option for subdivide segment. */
            public: enum SubdivideSpacing
            {
                SubdivideSpacingScreenPoint/** Screen Point */,
                SubdivideSpacingEqualArcLength/** Equal Arc Length */,
                SubdivideSpacingEqualParameter/** Equal Parameter */,
                SubdivideSpacingIncrementalArcLength/** Incremental Arc Length */,
                SubdivideSpacingGeometricRatio/** Geometric Progression Ratio */,
                SubdivideSpacingChordalTolerance/** Chordal Tolerance */,
                SubdivideSpacingNumberOfOptions/** Number of Options */
            };

             /** Contains subdivide segment method information.  This structure is used by
                        @link NXOpen::Routing::SegmentManager::Subdivide NXOpen::Routing::SegmentManager::Subdivide@endlink . */
            public:
            struct  SubdivideOption
            {
                public: /** Spacing Option */NXOpen::Routing::SegmentManager::SubdivideSpacing SpacingOption;
                public: /** Start Percentage; 0 \<= Start percent \< End percent */double StartPercent;
                public: /** End Percentage; start_percent \< end_percent \<= 100.0 */double EndPercent;
                public: /** Screen Point Percentage*/double ScreenPointPercentage;
                public: /** Direction; If direction = 1, normal curve direction
                                                                                             else if direction = -1, reverse the sense of curve direction */int Direction;
                public: /** Number of Segments */int NumberOfSegments;
                public: /** Geometric Progression Ratio */double GeometricRatio;
                public: /** Incremental Arc Length */double IncrementalArcLength;
                public: /** Chordal Tolerance */double ChordalTolerance;
                public: /** Create Tangency at subdivision point when subdividing splines */bool Dcm3CreateTangency;
                public: /** Add Points to subdivided splines to maintain shape */bool Dcm3AddPoints;
                public: /** dcm3addfixconstraint */ bool Dcm3AddFixConstraint;
                public: SubdivideOption() :
                    SpacingOption((NXOpen::Routing::SegmentManager::SubdivideSpacing)0),
                    StartPercent(),
                    EndPercent(),
                    ScreenPointPercentage(),
                    Direction(),
                    NumberOfSegments(),
                    GeometricRatio(),
                    IncrementalArcLength(),
                    ChordalTolerance(),
                    Dcm3CreateTangency(),
                    Dcm3AddPoints(),
                    Dcm3AddFixConstraint()
                {
                }
                /** Constructor for the SubdivideOption struct. */ 
                public: SubdivideOption(NXOpen::Routing::SegmentManager::SubdivideSpacing spacingOptionInitial /** Spacing Option */, 
                        double startPercentInitial /** Start Percentage; 0 \<= Start percent \< End percent */, 
                        double endPercentInitial /** End Percentage; start_percent \< end_percent \<= 100.0 */, 
                        double screenPointPercentageInitial /** Screen Point Percentage*/, 
                        int directionInitial /** Direction; If direction = 1, normal curve direction
                                                                                                     else if direction = -1, reverse the sense of curve direction */, 
                        int numberOfSegmentsInitial /** Number of Segments */, 
                        double geometricRatioInitial /** Geometric Progression Ratio */, 
                        double incrementalArcLengthInitial /** Incremental Arc Length */, 
                        double chordalToleranceInitial /** Chordal Tolerance */, 
                        bool dcm3CreateTangencyInitial /** Create Tangency at subdivision point when subdividing splines */, 
                        bool dcm3AddPointsInitial /** Add Points to subdivided splines to maintain shape */, 
                        bool dcm3AddFixConstraintInitial /** dcm3addfixconstraint */ ) :
                    SpacingOption(spacingOptionInitial),
                    StartPercent(startPercentInitial),
                    EndPercent(endPercentInitial),
                    ScreenPointPercentage(screenPointPercentageInitial),
                    Direction(directionInitial),
                    NumberOfSegments(numberOfSegmentsInitial),
                    GeometricRatio(geometricRatioInitial),
                    IncrementalArcLength(incrementalArcLengthInitial),
                    ChordalTolerance(chordalToleranceInitial),
                    Dcm3CreateTangency(dcm3CreateTangencyInitial),
                    Dcm3AddPoints(dcm3AddPointsInitial),
                    Dcm3AddFixConstraint(dcm3AddFixConstraintInitial)
                {
                }
            };

            private: SegmentManagerImpl * m_segmentmanager_impl;
            private: NXOpen::Part* m_owner;
            /// \cond NX_NO_DOC 
            public: explicit SegmentManager(NXOpen::Part *owner);


            /// \endcond 
            public: 
            /**Returns the tag of this object.  */
            tag_t Tag() const; 
            public: ~SegmentManager();
            /** Creates a @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink  object following a curve.  @return  Created segment 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: NXOpen::Routing::ISegment * CreateSegment
            (
                NXOpen::Curve * followCurve /** Curve to follow */,
                NXOpen::Routing::ControlPoint * startRcp /** Start @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  of the segment */,
                NXOpen::Routing::ControlPoint * endRcp /** End @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  of the segment */,
                NXOpen::Routing::UserDefined userDefined /** Is segment user defined? */
            );
            /** Creates a line @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink  object with input
                        @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  as ends.  @return  Created segment 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: NXOpen::Routing::ISegment * CreateSegment
            (
                NXOpen::Routing::ControlPoint * startRcp /** Start @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  of the segment */,
                NXOpen::Routing::ControlPoint * endRcp /** End @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  of the segment */
            );
            /** Set segment follow curve.  Segment can change type to mirror the type of the follow curve being set.  @return  Segment can possibly change types.
                                                                Use the returned segment object pointer instead
                                                                of any older pointers after calling this function.
                                                                For example: A LineSegment can become a SplineSegment after
                                                                calling this function if new follow curve is a spline. 
             <br>  Created in NX4.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: NXOpen::Routing::ISegment * SetFollowCurve
            (
                NXOpen::Routing::ISegment * segment /** Segment to set follow curve on */,
                NXOpen::Curve * followCurve /** Follow curve of segment */
            );
            /** Combine segments that are collinear and whose intermediate RCPs do not branch 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void SimplifySegments
            (
                const std::vector<NXOpen::Routing::ISegment *> & segments /** segments to combine */,
                bool doUpdate /**Fires update if True */,
                std::vector<NXOpen::Routing::ISegment *> & newSegments /** resulting segments */
            );
            /** Subdivide a routing path segment 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void Subdivide
            (
                NXOpen::Routing::ISegment * segment /** Segment to subdivide */,
                const NXOpen::Routing::SegmentManager::SubdivideOption & subdivideOption /** subdivide option */ ,
                std::vector<NXOpen::Routing::ISegment *> & subdivideSegments /** resulting segments */
            );
            /** Creates a constrained line @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink  object 
                         with input @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  as ends.  
                         
                         Only use this method when building segments in a part that 
                         use @link NXOpen::Positioning::Constraint NXOpen::Positioning::Constraint@endlink  objects to constraint components 
                         and geometry.  This is a new method for creating segments in NX5 and 
                         should be used instead of @link NXOpen::Routing::SegmentManager::CreateSegment NXOpen::Routing::SegmentManager::CreateSegment@endlink  
                         for all line segments.
                         @return  Created segment 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: NXOpen::Routing::ISegment * CreateConstrainedSegment
            (
                NXOpen::Routing::ControlPoint * startRcp /** Start @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  of the segment */,
                NXOpen::Routing::ControlPoint * endRcp /** End @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  of the segment */
            );
            /** Creates a spline @link NXOpen::Routing::ISegment NXOpen::Routing::ISegment@endlink  object 
                        with input @link NXOpen::Routing::ControlPoint NXOpen::Routing::ControlPoint@endlink  as ends.
                         @return  Created segment 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: NXOpen::Routing::ISegment * CreateHealSpline
            (
                NXOpen::DisplayableObject * startObject /** Start @link NXOpen::DisplayableObject NXOpen::DisplayableObject@endlink  of the segment, ideally it should be @link NXOpen::Routing::Port NXOpen::Routing::Port@endlink  */,
                NXOpen::DisplayableObject * endObject /** End @link NXOpen::DisplayableObject NXOpen::DisplayableObject@endlink  of the segment, ideally it should be @link NXOpen::Routing::Port NXOpen::Routing::Port@endlink  */,
                NXOpen::Routing::HealPath * healPath /** heal path */ 
            );
            /** Creates a new empty @link NXOpen::Routing::HealPath NXOpen::Routing::HealPath@endlink  object that can be
                        used as an input to @link NXOpen::Routing::SegmentManager::CreateHealSpline NXOpen::Routing::SegmentManager::CreateHealSpline@endlink .
                      @return  
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: NXOpen::Routing::HealPath * CreateHealPath
            (
            );
            /** Models spline paths to to specified terminals. Updates connection list to reflect 
                        changes to wire lengths of referencing connections. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void ModelTerminals
            (
                NXOpen::Routing::Port * multiPort /** MultiPort whose terminals are modeled */,
                double cutBackLength /** Length of cut back path connected to multiport. */,
                const NXString & extensionString /** Length of terminal segments which extends parallel to terminal ports */,
                bool overrideCharx /** if TRUE: extension_string determines all terminal extensions */,
                const std::vector<NXOpen::Routing::Port *> & terminalPorts /** Terminal ports from which terminals are modeled */
            );
            /** Models spline paths to to specified terminals. Updates connection list to reflect 
                        changes to wire lengths of referencing connections. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            void ModelTerminals
            (
                NXOpen::Routing::Port * multiPort /** MultiPort whose terminals are modeled */,
                double cutBackLength /** Length of cut back path connected to multiport. */,
                const char * extensionString /** Length of terminal segments which extends parallel to terminal ports */,
                bool overrideCharx /** if TRUE: extension_string determines all terminal extensions */,
                const std::vector<NXOpen::Routing::Port *> & terminalPorts /** Terminal ports from which terminals are modeled */
            );
            /** Un-model terminals and update connection list routes for specified terminal ports. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void UnmodelTerminals
            (
                NXOpen::Routing::Port * multiPort /** MultiPort whose terminals being un-modeled */,
                const std::vector<NXOpen::Routing::Port *> & terminalPorts /** Terminal ports being modeled */
            );
            /** Create segments of @link NXOpen::Routing::BuiltInPath NXOpen::Routing::BuiltInPath@endlink  objects present in this
                        @link NXOpen::Assemblies::Component NXOpen::Assemblies::Component@endlink  object. 
             <br>  Created in NX5.0.0.  <br>  
             <br> License requirements : routing_base ("Routing Basic") */
            public: void ProcessBuiltInPaths
            (
                NXOpen::Assemblies::Component * partOcc /** part occ */ 
            );


            /** All Segment types collection 
             <br>  Created in NX7.5.1.  <br>  
            */
            public: NXOpen::Routing::ISegmentCollection *Segments();
            /** Line Segment collection 
             <br>  Created in NX3.0.0.  <br>  
            */
            public: NXOpen::Routing::LineSegmentCollection *LineSegments();
            /** Arc Segment collection 
             <br>  Created in NX3.0.0.  <br>  
            */
            public: NXOpen::Routing::ArcSegmentCollection *ArcSegments();
            /** Spline Segment collection 
             <br>  Created in NX3.0.0.  <br>  
            */
            public: NXOpen::Routing::SplineSegmentCollection *SplineSegments();
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
