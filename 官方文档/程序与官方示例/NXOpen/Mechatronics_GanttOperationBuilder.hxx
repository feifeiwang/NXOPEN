#ifndef NXOpen_MECHATRONICS_GANTTOPERATIONBUILDER_HXX_INCLUDED
#define NXOpen_MECHATRONICS_GANTTOPERATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mechatronics_GanttOperationBuilder.ja
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
#include <NXOpen/Mechatronics_GanttOperationBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/libnxopencpp_mechatronics_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mechatronics
    {
        class GanttOperationBuilder;
    }
    class BasePart;
    class Builder;
    class Expression;
    namespace Mechatronics
    {
        class GanttOperationConditionBuilder;
    }
    namespace Mechatronics
    {
        class GanttOperationConditionBuilderList;
    }
    namespace Mechatronics
    {
        class GanttOperationParameterBuilder;
    }
    namespace Mechatronics
    {
        class GanttOperationParameterBuilderList;
    }
    class NXObject;
    namespace Mechatronics
    {
        class _GanttOperationBuilderBuilder;
        class GanttOperationBuilderImpl;
        /** Represents a @link NXOpen::Mechatronics::GanttOperationBuilder NXOpen::Mechatronics::GanttOperationBuilder@endlink  builder  <br> To create a new instance of this class, use @link NXOpen::Mechatronics::GanttCollection::CreateGanttOperationBuilder  NXOpen::Mechatronics::GanttCollection::CreateGanttOperationBuilder @endlink  <br> 
         <br>  Created in NX7.5.1.  <br>  
        */
        class NXOPENCPP_MECHATRONICSEXPORT  GanttOperationBuilder : public NXOpen::Builder
        {
            /** the pause operation Type enum*/
            public: enum SimpleOperationType
            {
                SimpleOperationTypeSimple/** simple */ ,
                SimpleOperationTypePause/** pause */ 
            };

            /** the operation Type enum*/
            public: enum OperationType
            {
                OperationTypeSimple/** Simple operation */,
                OperationTypeCommpound = 16/** Compound operation */,
                OperationTypeTrigger = 32/** Trigger operation */,
                OperationTypePause = 64/** Pause operation */
            };

            private: GanttOperationBuilderImpl * m_ganttoperationbuilder_impl;
            private: friend class  _GanttOperationBuilderBuilder;
            protected: GanttOperationBuilder();
            public: ~GanttOperationBuilder();
            /**Returns  the owner part of operation 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::BasePart * Context
            (
            );
            /**Sets  the owner part of operation 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetContext
            (
                NXOpen::BasePart * context /** context */ 
            );
            /**Returns  the operation id 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString OperationID
            (
            );
            /**Sets  the operation id 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetOperationID
            (
                const NXString & id /** id */ 
            );
            /**Sets  the operation id 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetOperationID
            (
                const char * id /** id */ 
            );
            /**Returns  the operation name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString OperationName
            (
            );
            /**Sets  the operation name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetOperationName
            (
                const NXString & name /** name */ 
            );
            /**Sets  the operation name 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetOperationName
            (
                const char * name /** name */ 
            );
            /**Returns  the parent operation id in sequence editor tree 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXString ParentID
            (
            );
            /**Sets  the parent operation id in sequence editor tree 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetParentID
            (
                const NXString & parent /** parent */ 
            );
            /**Sets  the parent operation id in sequence editor tree 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            void SetParentID
            (
                const char * parent /** parent */ 
            );
            /**Returns  the input of the operation : it can be a physics object(Rigid Body, 
                        Collision, Constraints, Joints etc.), FunctionTable, part occurrence. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::NXObject * Physics
            (
            );
            /**Sets  the input of the operation : it can be a physics object(Rigid Body, 
                        Collision, Constraints, Joints etc.), FunctionTable, part occurrence. 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetPhysics
            (
                NXOpen::NXObject * physics /** physics */ 
            );
            /**Returns  the operation type 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::GanttOperationBuilder::OperationType OperationTypes
            (
            );
            /**Sets  the operation type 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetOperationTypes
            (
                NXOpen::Mechatronics::GanttOperationBuilder::OperationType type /** type */ 
            );
            /**Returns  the operation duration 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: double Duration
            (
            );
            /**Sets  the operation duration 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetDuration
            (
                double duration /** duration */ 
            );
            /**Returns  the operation duration expression 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Expression * ExpressionDuration
            (
            );
            /**Returns  the start time of operation 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: double StartTime
            (
            );
            /**Sets  the start time of operation 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetStartTime
            (
                double start /** start */ 
            );
            /**Returns  the parameter data 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::GanttOperationParameterBuilderList * ParameterList
            (
            );
            /** Sets the parameter data 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void AddParameterList
            (
                const std::vector<NXOpen::Mechatronics::GanttOperationParameterBuilder *> & parameters /** Input parameters*/
            );
            /**Returns  the condition data 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: NXOpen::Mechatronics::GanttOperationConditionBuilderList * ConditionList
            (
            );
            /** Sets the condition data 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void AddConditionList
            (
                const std::vector<NXOpen::Mechatronics::GanttOperationConditionBuilder *> & conditions /** Input conditions*/
            );
            /**Returns  the active status 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: bool ActiveStatus
            (
            );
            /**Sets  the active status 
             <br>  Created in NX7.5.1.  <br>  
             <br> License requirements : nx_mcd_core ("MECHATRONICS CONCEPT DESIGNER") */
            public: void SetActiveStatus
            (
                bool status /** status */ 
            );
            /**Returns  the type of simple operation. 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXOpen::Mechatronics::GanttOperationBuilder::SimpleOperationType Type
            (
            );
            /**Sets  the type of simple operation. 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: void SetType
            (
                NXOpen::Mechatronics::GanttOperationBuilder::SimpleOperationType type /** Indicates the type value of the dialog's types block to be set to */
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
