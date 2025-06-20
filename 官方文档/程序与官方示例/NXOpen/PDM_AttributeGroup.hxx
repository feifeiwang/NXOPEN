#ifndef NXOpen_PDM_ATTRIBUTEGROUP_HXX_INCLUDED
#define NXOpen_PDM_ATTRIBUTEGROUP_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PDM_AttributeGroup.ja
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
#include <NXOpen/NXObject.hxx>
#include <NXOpen/libnxopencpp_pdm_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace PDM
    {
        class AttributeGroup;
    }
    class NXObject;
    namespace PDM
    {
        class IAttributeGroupOwner;
    }
    namespace PDM
    {
        class _AttributeGroupBuilder;
        class AttributeGroupImpl;
        /** Represents an attribute group.  <br> KF not supported.  <br> 
         <br>  Created in NX9.0.0.  <br>  
        */
        class NXOPENCPP_PDMEXPORT  AttributeGroup : public NXOpen::NXObject
        {
            private: AttributeGroupImpl * m_attributegroup_impl;
            private: friend class  _AttributeGroupBuilder;
            protected: AttributeGroup();
            public: ~AttributeGroup();
            /**Returns  the display name for the attribute group. 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: NXString DisplayName
            (
            );
            /** Returns a list of @link NXOpen::PDM::IAttributeGroupOwner NXOpen::PDM::IAttributeGroupOwner@endlink  objects referencing this attribute group.  @return   
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : None */
            public: std::vector<NXOpen::PDM::IAttributeGroupOwner *> GetReferencingAttributeGroupOwners
            (
            );
            /** Detaches Attribute Group 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: void DetachAttributeGroup
            (
                NXOpen::PDM::IAttributeGroupOwner * attributeGroupOwner /** attributegroupowner */ 
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
