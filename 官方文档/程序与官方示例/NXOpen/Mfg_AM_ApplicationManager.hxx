#ifndef NXOpen_MFG_AM_APPLICATIONMANAGER_HXX_INCLUDED
#define NXOpen_MFG_AM_APPLICATIONMANAGER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Mfg_AM_ApplicationManager.ja
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
#include <NXOpen/libmfgamopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Mfg
    {
        namespace AM
        {
            class ApplicationManager;
        }
    }
    class Session;
    namespace Mfg
    {
        namespace AM
        {
            class ApplicationManagerImpl;

            /// \cond NX_NO_DOC 
            /** Represents the Additive Manufacturing application  <br> Use the static method in this class to obtain an instance.  <br> 
             <br>  Created in NX11.0.1.  <br>  
            */
            class MFGAMOPENCPPEXPORT  ApplicationManager
            {
                private: ApplicationManagerImpl * m_applicationmanager_impl;
                private: NXOpen::Session* m_owner;
                /// \cond NX_NO_DOC 
                public: explicit ApplicationManager(NXOpen::Session *owner);


                /// \endcond 
                public: 
                /**Returns the tag of this object.  */
                tag_t Tag() const; 
                private: static ApplicationManager* theApplicationManager;
                /** Returns the ApplicationManager object for the running session which serves as the 'gateway' class for the application API.  
                    References to all other objects in this API are obtained either directly or indirectly via methods and properties on this class.  
                    Platform Session should be initialized using 'GetSession' method from NXOpen API prior to this call.  
                */
                public: static ApplicationManager* GetApplicationManager(NXOpen::Session *owner);
                public: ~ApplicationManager();
            }; //lint !e1712 default constructor not defined for class  


            /// \endcond 
        }
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
