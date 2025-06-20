#ifndef NXOpen_CAEOBJVALIDATIONBUILDER_HXX_INCLUDED
#define NXOpen_CAEOBJVALIDATIONBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CaeObjValidationBuilder.ja
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
#include <NXOpen/CaeObjValidationBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/libnxopendebugsessioncpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class CaeObjValidationBuilder;
    class Builder;
    namespace CAE
    {
        class CAEBody;
    }
    namespace CAE
    {
        class Mesh;
    }
    class Expression;
    class _CaeObjValidationBuilderBuilder;
    class CaeObjValidationBuilderImpl;

    /// \cond NX_NO_DOC 
    /** Represents a @link CaeObjValidationBuilder CaeObjValidationBuilder@endlink  builder which can be used to validate Cae Objects
          as within Autotests.  <br> An instance of this class can be obtained through  @link CAE::CaeAutotest CAE::CaeAutotest@endlink    <br> 
     <br>  Created in NX7.5.0.  <br>  
    */
    class NXOPENDEBUGSESSIONCPPEXPORT  CaeObjValidationBuilder : public NXOpen::Builder
    {
        /** represents the type of CAE objects that can be validated */
        public: enum ValidationType
        {
            ValidationTypeFields/** Fields */,
            ValidationTypeGroups/** Groups */,
            ValidationTypeMainObjects/** MainObjects */,
            ValidationTypePhysicalProperties/** PhysicalProperties */,
            ValidationTypeRegions/** Regions */,
            ValidationTypeSections/** Sections  */,
            ValidationTypeSolutions/** Solutions  */,
            ValidationTypeSolutionSteps/** SolutionSteps  */,
            ValidationTypeSSMOs/** SSMOs */,
            ValidationTypeMad/** Mesh Associated Data */,
            ValidationTypeLoads/** Loads */,
            ValidationTypeConstraints/** Constraints */,
            ValidationTypeSSSOs/** SSSos */,
            ValidationTypeMeshes/** Meshes */,
            ValidationTypeMeshCollectors/** Mesh Collectors */,
            ValidationTypeGeometryOptimizations/** Geometry Optimizations */,
            ValidationTypePolygonBodies/** Polygon Bodies */,
            ValidationTypeExpressions/** expressions */ ,
            ValidationTypeMeshBoundingBox/** Simple validation of the mesh position using its bounding box */,
            ValidationTypeMeshNodePositions/** Full validation of the position of all the mesh nodes */
        };

        private: CaeObjValidationBuilderImpl * m_caeobjvalidationbuilder_impl;
        private: friend class  _CaeObjValidationBuilderBuilder;
        protected: CaeObjValidationBuilder();
        public: ~CaeObjValidationBuilder();
        /**Returns  the type to validate 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::CaeObjValidationBuilder::ValidationType TypeToValidate
        (
        );
        /**Sets  the type to validate 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void SetTypeToValidate
        (
            NXOpen::CaeObjValidationBuilder::ValidationType typeToValidate /** typetovalidate */ 
        );
        /**Returns  the include occs 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: bool IncludeOccs
        (
        );
        /**Sets  the include occs 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void SetIncludeOccs
        (
            bool includeOccs /** includeoccs */ 
        );
        /** Print Mesh Associated Data 
         <br>  Created in NX7.5.2.  <br>  
         <br> License requirements : None */
        public: void PrintMad
        (
            NXOpen::CAE::Mesh * meshTag /**Mesh*/
        );
        /** Print mesh basic position information: its bounding box. 
         <br>  Created in NX11.0.0.  <br>  
         <br> License requirements : None */
        public: void PrintMeshBoundingBox
        (
            NXOpen::CAE::Mesh * meshTag /**Mesh*/
        );
        /** Print mesh detailed position information: detailed list of node coordinates 
         <br>  Created in NX11.0.0.  <br>  
         <br> License requirements : None */
        public: void PrintMeshNodePositions
        (
            NXOpen::CAE::Mesh * meshTag /**Mesh*/
        );
        /** Print Mesh Associated Data 
         <br>  Created in NX8.0.0.  <br>  
         <br> License requirements : None */
        public: void ValidateAll
        (
        );
        /** Validate Polygon Body 
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: void ValidatePolygonBody
        (
            NXOpen::CAE::CAEBody * bodyTag /**Polygon Body*/
        );
        /** Validate Expression 
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: void ValidateExpression
        (
            NXOpen::Expression * bodyTag /**Expression*/
        );
    };

    /// \endcond 
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
