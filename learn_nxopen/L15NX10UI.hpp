﻿//==============================================================================
//  WARNING!!  This file is overwritten by the Block Styler while generating
//  the automation code. Any modifications to this file will be lost after
//  generating the code again.
//
//       Filename:  F:\code\nx2\L15-NX10UI\L15NX10UI.hpp
//
//        This file was generated by the NX Block Styler
//        Created by: 王鑫
//              Version: NX 11
//              Date: 05-18-2025  (Format: mm-dd-yyyy)
//              Time: 19:34
//
//==============================================================================

#ifndef L15NX10UI_H_INCLUDED
#define L15NX10UI_H_INCLUDED

//------------------------------------------------------------------------------
//These includes are needed for the following template code
//------------------------------------------------------------------------------
#include <uf_defs.h>
#include <uf_ui_types.h>
#include <iostream>
#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_SpecifyPoint.hxx>
#include <NXOpen/BlockStyler_ExpressionBlock.hxx>

//------------------------------------------------------------------------------
// Namespaces needed for following template
//------------------------------------------------------------------------------
using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

class DllExport L15NX10UI
{
    // class members
public:
    static Session *theSession;
    static UI *theUI;
    L15NX10UI();
    ~L15NX10UI();
    int Show();
    
    //----------------------- BlockStyler Callback Prototypes ---------------------
    // The following member function prototypes define the callbacks 
    // specified in your BlockStyler dialog.  The empty implementation
    // of these prototypes is provided in the L15NX10UI.cpp file. 
    // You are REQUIRED to write the implementation for these functions.
    //------------------------------------------------------------------------------
    void initialize_cb();
    void dialogShown_cb();
    int apply_cb();
    int ok_cb();
    int update_cb(NXOpen::BlockStyler::UIBlock* block);
    PropertyList* GetBlockProperties(const char *blockID);
    
private:
    const char* theDlxFileName;
    NXOpen::BlockStyler::BlockDialog* theDialog;
    NXOpen::BlockStyler::Group* group0;// Block type: Group
    NXOpen::BlockStyler::SpecifyPoint* point0;// Block type: Specify Point
    NXOpen::BlockStyler::Group* group;// Block type: Group
    NXOpen::BlockStyler::ExpressionBlock* expression0;// Block type: Expression
    NXOpen::BlockStyler::ExpressionBlock* expression01;// Block type: Expression
    NXOpen::BlockStyler::ExpressionBlock* expression02;// Block type: Expression
    
};
#endif //L15NX10UI_H_INCLUDED
