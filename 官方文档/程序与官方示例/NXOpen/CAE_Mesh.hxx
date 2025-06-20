#ifndef NXOpen_CAE_MESH_HXX_INCLUDED
#define NXOpen_CAE_MESH_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_Mesh.ja
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
#include <NXOpen/CAE_MeshDisplaySettings.hxx>
#include <NXOpen/CAE_IExportableFEEntity.hxx>
#include <NXOpen/DisplayableObject.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class Mesh;
    }
    namespace CAE
    {
        class IExportableFEEntity;
    }
    namespace CAE
    {
        class IMeshCollector;
    }
    namespace CAE
    {
        class MeshDisplaySettings;
    }
    namespace CAE
    {
        class PropertyTable;
    }
    class DisplayableObject;
    namespace CAE
    {
        class _MeshBuilder;
        class MeshImpl;
        /** Represents a Mesh

                For more information, refer to the Solver language documentation 
                in the <a href="../opencae/Solvers.html"> Solver language documentation </a>.

             <br> This is an abstract class  <br> 
         <br>  Created in NX5.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  Mesh : public NXOpen::DisplayableObject, public virtual NXOpen::CAE::IExportableFEEntity
        {
            private: MeshImpl * m_mesh_impl;
            private: friend class  _MeshBuilder;
            protected: Mesh();
            public: ~Mesh();
            /**Returns  the element property table associated with the mesh object 
             <br>  Created in NX5.0.1.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::PropertyTable * ElementPropertyTable
            (
            );
            /**Returns  the lock status for this mesh. If a mesh is locked then it will not 
                        update when the FE Model is updated. Meshes are typically locked
                        by the use of manual node and element commands. 
             <br>  Created in NX6.0.4.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: bool LockStatus
            (
            );
            /**Sets  the lock status for this mesh. If a mesh is locked then it will not 
                        update when the FE Model is updated. Meshes are typically locked
                        by the use of manual node and element commands. 
             <br>  Created in NX6.0.4.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetLockStatus
            (
                bool lockStatus /** lock status */ 
            );
            /**Returns  the MeshCollector for this mesh.  
                     
             <br>  Created in NX7.5.2.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::IMeshCollector * MeshCollector
            (
            );
            /** The MeshDisplaySettings for this mesh.  
                      @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::MeshDisplaySettings * GetMeshDisplaySettings
            (
            );
            /**Returns  the export mesh property for this mesh. 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: bool ExportMeshProperty
            (
            );
            /**Sets  the export mesh property for this mesh. 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void SetExportMeshProperty
            (
                bool fExportMesh /** fexportmesh */ 
            );
            /** Judges whether the mesh is valid in current solver environment.
                      @return  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: bool IsValid
            (
            );
            /** Returns the solver card syntax strings for this entity.  @return  
             <br>  Created in NX8.5.0.  <br>  
             <br> License requirements : None */
            public: virtual std::vector<NXString> GetSolverCardSyntax
            (
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
