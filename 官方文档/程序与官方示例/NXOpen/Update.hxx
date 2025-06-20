#ifndef NXOpen_UPDATE_HXX_INCLUDED
#define NXOpen_UPDATE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Update.ja
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
#include <NXOpen/ErrorList.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class Update;
    class Session;
    class ErrorList;
    class NXObject;
    class Part;
    class TaggedObject;
    class UpdateImpl;
    /** Provides methods for update and delete.  <br> To obtain an instance of this class, refer to @link NXOpen::Session  NXOpen::Session @endlink  <br> 
     <br>  Created in NX3.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  Update
    {
        /** Specifies whether a method should perform an update or not.  Methods that choose not
                to perform an update will need to call @link NXOpen::Update::DoUpdate NXOpen::Update::DoUpdate@endlink  at a
                later time.  Some methods in the Common API may perform an update.  In an effort to
                improve performance, these methods take an option as input to not perform an update.  
                For example, a method called in a loop may set the option to not update and then perform
                an explicit update after the loop completes. 
         <br>  Created in NX5.0.1.  <br>  
        */
        public: enum Option
        {
            OptionNow/** Perform an update immediately */,
            OptionLater/** Do not perform an update */
        };

        /** Specifies the action to take when an object fails to update.
            
         <br>  Created in NX7.5.0.  <br>  
        */
        public: enum FailureOption
        {
            FailureOptionNoOption/** No option */,
            FailureOptionUndo/** Perform undo */,
            FailureOptionSuppress/** Suppress failing object */,
            FailureOptionSuppressAll/** Suppress failing objects and subsequent objects */,
            FailureOptionAccept/** Accept failure of failing objects */,
            FailureOptionAcceptAll/** Accept failure of failing objects and subsequent objects */,
            FailureOptionDelete/** Delete failing object */,
            FailureOptionDeleteDependents/** Delete failing object and its dependents */,
            FailureOptionInterrupt/** Interrupt update upon failure */
        };

        private: UpdateImpl * m_update_impl;
        private: NXOpen::Session* m_owner;
        /// \cond NX_NO_DOC 
        public: explicit Update(NXOpen::Session *owner);


        /// \endcond 
        public: 
        /**Returns the tag of this object.  */
        tag_t Tag() const; 
        public: ~Update();
        /** Adds objects to the global delete list.
            The objects in the global delete list will be deleted when the next update is performed.  
            An update can be performed through the @link NXOpen::Update::DoUpdate NXOpen::Update::DoUpdate@endlink  method. 
             <br> 
            Note:  if you are removing objects from a sketch, @link NXOpen::Sketch::DeleteObjects NXOpen::Sketch::DeleteObjects@endlink 
            should be used instead.  
             <br> 
             @return  The number of errors in the update module's
                                       error list.  If errors occurred during the execution
                                       of this method, they will be added to that error list.
                                       To obtain a list of these errors, 
                                       use @link NXOpen::Update::ErrorList NXOpen::Update::ErrorList@endlink  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: int AddToDeleteList
        (
            const std::vector<NXOpen::NXObject *> & objects /** The objects to be deleted */
        );
        /** Adds an object to the global delete list.
            The objects in the global delete list will be deleted when the next update is performed.  
            An update can be performed through the @link NXOpen::Update::DoUpdate NXOpen::Update::DoUpdate@endlink  method. 
            
             <br> 
            Note:  if you are removing objects from a sketch, @link NXOpen::Sketch::DeleteObjects NXOpen::Sketch::DeleteObjects@endlink 
            should be used instead.  
             <br> 
             @return  The number of errors in the update module's
                                       error list.  If errors occurred during the execution
                                       of this method, they will be added to that error list.
                                       To obtain a list of these errors, 
                                       use @link NXOpen::Update::ErrorList NXOpen::Update::ErrorList@endlink  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: int AddToDeleteList
        (
            NXOpen::TaggedObject * object /** The object to be deleted */
        );
        /** Removes objects from the global delete list.
            Note: if the object is not in the delete list, it will be ignored.  An exception
            will not be raised. 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void RemoveFromDeleteList
        (
            const std::vector<NXOpen::NXObject *> & objects /** The objects to be removed from the delete list */
        );
        /** Returns the global delete list  @return  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::NXObject *> GetDeleteList
        (
        );
        /** Clears the contents of the global delete list.  (Does not delete any of the objects on the list.)  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void ClearDeleteList
        (
        );
        /** Updates the current session  @return  The number of errors in the update module's error list.
                                       If errors occurred during update they will be added to that
                                       error list.  To obtain a list of these errors, use
                                       @link NXOpen::Update::ErrorList NXOpen::Update::ErrorList@endlink  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: int DoUpdate
        (
            NXOpen::Session::UndoMarkId undoMark /** If any update error occurs, the system will roll back to this
                                                                  undo mark and throw an exception. */
        );
        /**Returns  the list of all the errors that the Update module has encountered
            since the last time that the list was cleared.  To clear the list,
            use @link NXOpen::Update::ClearErrorList NXOpen::Update::ClearErrorList@endlink . 
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::ErrorList * ErrorList
        (
        );
        /** Clears the error list. See @link NXOpen::Update::ErrorList NXOpen::Update::ErrorList@endlink  
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void ClearErrorList
        (
        );
        /**Sets  the state of the interpart delay flag.  If interpart delay is turned on, then
                updates will not be propagated beyond the work part. If off, then updates will be
                applied across all parts in the session.
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void SetInterpartDelay
        (
            bool delayed /** The new state of the interpart delay flag. */
        );
        /**Returns  the state of the interpart delay flag.  If interpart delay is turned on, then
                updates will not be propagated beyond the work part. If off, then updates will be
                applied across all parts in the session.
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: bool InterpartDelay
        (
        );
        /** Performs an interpart update. This ensures that all parts in the session are updated 
                with respect to any changes on other loaded parts. Note that this update will always
                occur regardless of the state of the interpart delay flag. See @link NXOpen::Update::SetInterpartDelay NXOpen::Update::SetInterpartDelay@endlink 
            
         <br>  Created in NX3.0.0.  <br>  
         <br> License requirements : None */
        public: void DoInterpartUpdate
        (
            NXOpen::Session::UndoMarkId undoMark /** If any update error occurs, the system will roll back to this
                                                                  undo mark. */
        );
        /** Action to take when an object fails to update even with specific action set to that object. 
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: void SetDefaultUpdateFailureAction
        (
            NXOpen::Update::FailureOption failureAction /** The default update failure action */
        );
        /** The default update failure action. An object will take that action if it fails to update even with specific action set to that object.  @return  The default update failure action 
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: NXOpen::Update::FailureOption GetDefaultUpdateFailureAction
        (
        );
        /** Action to take when an object fails to update. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void SetUpdateFailureAction
        (
            NXOpen::TaggedObject * object /** The object that fails to update */,
            NXOpen::Update::FailureOption failureAction /** The update failure action */
        );
        /** Remove update failure action. 
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void RemoveUpdateFailureAction
        (
            NXOpen::TaggedObject * object /** The object that fails to update */
        );
        /**Returns  the state of the assembly constraints delay flag. If true, then all the assembly constraints
                in the session will be delayed from update. If false, then updates will be applied across all
                parts in the session.
            
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: bool AssemblyConstraintsDelay
        (
        );
        /**Sets  the state of the assembly constraints delay flag. If true, then all the assembly constraints
                in the session will be delayed from update. If false, then updates will be applied across all
                parts in the session.
            
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void SetAssemblyConstraintsDelay
        (
            bool delayed /** The new state of the assembly constraints delay flag. */
        );
        /** Performs an assembly constraints update. This ensures that the specified part containing out-of-date assembly
                constraints is updated.
            
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void DoAssemblyConstraintsUpdateInPart
        (
            NXOpen::Part * partTag /** parttag */ ,
            NXOpen::Session::UndoMarkId undoMarkId /** If any update error occurs, the system will roll back to this
                                                                  undo mark. */
        );
        /** Performs an assembly constraints update. This ensures that all parts containing out-of-date assembly
                constraints in this session are updated.
            
         <br>  Created in NX7.5.0.  <br>  
         <br> License requirements : None */
        public: void DoAssemblyConstraintsUpdate
        (
            NXOpen::Session::UndoMarkId undoMarkId /** If any update error occurs, the system will roll back to this
                                                                  undo mark. */
        );
        /** Set an update mark. This ensures that only entities added into update list since the mark setting are updated 
                 when the next update is performed before the mark is cleared.To perform update,use @link NXOpen::Update::DoUpdate NXOpen::Update::DoUpdate@endlink .
                 To clear the mark, use @link NXOpen::Update::EndLocalUpdate NXOpen::Update::EndLocalUpdate@endlink .
                  <br> 
                 Note: [1] Any entities updated while the mark was in place will not be updated during the next update even if 
                           they depend on entities on the newly restored list.
                       [2] Local update may not be nested.i.e.if a local update process is started and not yet ended, you cannot start another one.
                  <br>        
           
         <br>  Created in NX7.5.1.  <br>  
         <br> License requirements : None */
        public: void StartLocalUpdate
        (
        );
        /** Clear the update mark.See@link NXOpen::Update::StartLocalUpdate NXOpen::Update::StartLocalUpdate@endlink . 
         <br>  Created in NX7.5.1.  <br>  
         <br> License requirements : None */
        public: void EndLocalUpdate
        (
        );
        /** Undelay an Object
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: void UndelayObjectUpdate
        (
            NXOpen::TaggedObject * objectToUpdate /** The object to be undelayed*/
        );
        /**Log Object for Update 
         <br>  Created in NX7.5.3.  <br>  
         <br> License requirements : None */
        public: void LogForUpdate
        (
            NXOpen::TaggedObject * objectToUpdate /** The object to be updated */
        );
        /** Lock and unlock updates. Locking updates will lock model updates until updates are unlocked. Note that updates 
                should be locked with utmost care as operations can produce undesired results or possibly result in unexpected
                failures when they are performed when updates are locked.
               
                 <br> 
                If you do choose to lock updates then you have to ensure that the update lock state prior to locking update is 
                restored after your operation. See @link NXOpen::Update::GetUpdateLock NXOpen::Update::GetUpdateLock@endlink  to get the lock status. 
                Additionally, a call to @link NXOpen::Update::DoUpdate NXOpen::Update::DoUpdate@endlink  has to be made after restoring the 
                lock status to ensure that entities added to the update list after update was locked are updated. 
                 <br>    
            
         <br>  Created in NX7.5.5.  <br>  
         <br> License requirements : None */
        public: void SetUpdateLock
        (
            bool lock /** The lock state */
        );
        /** Get the current update lock status. Also see @link NXOpen::Update::SetUpdateLock NXOpen::Update::SetUpdateLock@endlink   @return  The lock state 
         <br>  Created in NX7.5.5.  <br>  
         <br> License requirements : None */
        public: bool GetUpdateLock
        (
        );
        /**Sets  the delay status for intrapart part modules delays
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: void SetIntrapartPartModuleDelay
        (
            bool delayed /** The new state of the interpart delay flag. */
        );
        /**Returns  the delay status for intrapart part modules delays
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: bool IntrapartPartModuleDelay
        (
        );
        /** Updates all out-of-date intrapart part modules 
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: void UpdateAllIntrapartPartModulesInPart
        (
            NXOpen::Part * partTag /** parttag */ ,
            NXOpen::Session::UndoMarkId undoMarkId /** If any update error occurs, the system will roll back to this
                                                                  undo mark. */
        );
        /** Updates all given out-of-date features or expression to make them up to date 
         <br>  Created in NX9.0.0.  <br>  
         <br> License requirements : None */
        public: void MakeUpToDate
        (
            const std::vector<NXOpen::NXObject *> & objects /** The objects to be made up to date */,
            NXOpen::Session::UndoMarkId undoMarkId /** If any update error occurs, the system will roll back to this
                                                                  undo mark. */
        );
        /** Updates all linked part modules in the part 
         <br>  Created in NX10.0.0.  <br>  
         <br> License requirements : usr_defined_features ("USER DEFINED FEATURES") */
        public: void UpdateAllLinkedPartModulesInPart
        (
            NXOpen::Part * partTag /** parttag */ ,
            NXOpen::Session::UndoMarkId undoMarkId /** If any update error occurs, the system will roll back to this
                                                                  undo mark. */
        );
        /** Adds objects to the global delete list.
            The objects in the global delete list will be deleted when the next update is performed.  
            An update can be performed through the @link NXOpen::Update::DoUpdate NXOpen::Update::DoUpdate@endlink  method. 
             <br> 
            Note:  if you are removing objects from a sketch, @link NXOpen::Sketch::DeleteObjects NXOpen::Sketch::DeleteObjects@endlink 
            should be used instead.  
             <br> 
             @return  The number of errors in the update module's
                                       error list.  If errors occurred during the execution
                                       of this method, they will be added to that error list.
                                       To obtain a list of these errors, 
                                       use @link NXOpen::Update::ErrorList NXOpen::Update::ErrorList@endlink  
         <br>  Created in NX11.0.0.  <br>  
         <br> License requirements : None */
        public: int AddObjectsToDeleteList
        (
            const std::vector<NXOpen::TaggedObject *> & objects /** The objects to be deleted */
        );
        /** Removes objects from the global delete list.
            Note: if the object is not in the delete list, it will be ignored.  An exception
            will not be raised. 
         <br>  Created in NX11.0.0.  <br>  
         <br> License requirements : None */
        public: void RemoveObjectsFromDeleteList
        (
            const std::vector<NXOpen::TaggedObject *> & objects /** The objects to be removed from the delete list */
        );
        /** Returns the global delete list  @return  
         <br>  Created in NX11.0.0.  <br>  
         <br> License requirements : None */
        public: std::vector<NXOpen::TaggedObject *> GetObjectsOnDeleteList
        (
        );
    }; //lint !e1712 default constructor not defined for class  

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
