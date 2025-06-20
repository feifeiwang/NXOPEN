#ifndef NXOpen_FEATURES_SHIPDESIGN_STANDARDPARTFRAMEWORKBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_SHIPDESIGN_STANDARDPARTFRAMEWORKBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ShipDesign_StandardPartFrameworkBuilder.ja
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
#include <NXOpen/Features_ShipDesign_ManufacturingStockBuilder.hxx>
#include <NXOpen/Features_ShipDesign_ShipNamesBuilder.hxx>
#include <NXOpen/Features_ShipDesign_StandardPartFrameworkBuilder.hxx>
#include <NXOpen/Features_ShipDesign_StandardPartItemBuilder.hxx>
#include <NXOpen/Builder.hxx>
#include <NXOpen/ObjectList.hxx>
#include <NXOpen/Weld_CharacteristicsBuilder.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace ShipDesign
        {
            class StandardPartFrameworkBuilder;
        }
    }
    class Builder;
    class Expression;
    namespace Features
    {
        namespace ShipDesign
        {
            class ManufacturingStockBuilder;
        }
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class ShipNamesBuilder;
        }
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class StandardPartItemBuilder;
        }
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class StandardPartItemBuilderList;
        }
    }
    namespace Weld
    {
        class CharacteristicsBuilder;
    }
    namespace Features
    {
        namespace ShipDesign
        {
            class _StandardPartFrameworkBuilderBuilder;
            class StandardPartFrameworkBuilderImpl;
            /** Represents the standard part framework builder to add or edit ship standard part.  <br> To create a new instance of this class, use @link NXOpen::Features::ShipCollection::CreateStandardPartFrameworkBuilder  NXOpen::Features::ShipCollection::CreateStandardPartFrameworkBuilder @endlink  <br> 
            Default values.
            <table border="1"> 
             
            <tr><th> 
            Property</th>  <th> 
            Value</th> </tr>
            <tr><td> 
             
            Thickness.Value (deprecated) </td> <td> 
             
            5 (millimeters part), 0.02 (inches part) </td> </tr> 

            </table>  

             <br>  Created in NX8.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  StandardPartFrameworkBuilder : public NXOpen::Builder
            {
                /** Indicates the creation type */
                public: enum CreationType
                {
                    CreationTypeCreation/** In creation */,
                    CreationTypeAdoption/** In adoption */
                };

                /** Indicates the stage of the smart rule. */
                public: enum SmartRuleStage
                {
                    SmartRuleStagePreUpdate/** In pre-update stage */,
                    SmartRuleStagePostUpdate/** In post-update stage */
                };

                private: StandardPartFrameworkBuilderImpl * m_standardpartframeworkbuilder_impl;
                private: friend class  _StandardPartFrameworkBuilderBuilder;
                protected: StandardPartFrameworkBuilder();
                public: ~StandardPartFrameworkBuilder();
                /**Returns  the creation type. 
                 <br>  Created in NX9.0.2.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder::CreationType PartCreationType
                (
                );
                /**Sets  the creation type. 
                 <br>  Created in NX9.0.2.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetPartCreationType
                (
                    NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder::CreationType creationType /** creationtype */ 
                );
                /**Returns  the part category, which is defined in registration file. The typical standard part types include stiffener end bracket,
                            collar plate, tripping bracket, flat bar etc. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString PartCategory
                (
                );
                /**Sets  the part category, which is defined in registration file. The typical standard part types include stiffener end bracket,
                            collar plate, tripping bracket, flat bar etc. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetPartCategory
                (
                    const NXString & partType /** parttype */ 
                );
                /**Sets  the part category, which is defined in registration file. The typical standard part types include stiffener end bracket,
                            collar plate, tripping bracket, flat bar etc. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                void SetPartCategory
                (
                    const char * partType /** parttype */ 
                );
                /**Returns  the part type, which is the sub category of part type. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString PartType
                (
                );
                /**Sets  the part type, which is the sub category of part type. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetPartType
                (
                    const NXString & partSubType /** partsubtype */ 
                );
                /**Sets  the part type, which is the sub category of part type. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                void SetPartType
                (
                    const char * partSubType /** partsubtype */ 
                );
                /**Returns  the part sub type, which is the sub category of sub type. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString PartSubType
                (
                );
                /**Sets  the part sub type, which is the sub category of sub type. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetPartSubType
                (
                    const NXString & partLeafType /** partleaftype */ 
                );
                /**Sets  the part sub type, which is the sub category of sub type. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                void SetPartSubType
                (
                    const char * partLeafType /** partleaftype */ 
                );
                /**Returns  the standard part item, which is the builder of the selection item.
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder * StandardPartItem
                (
                );
                /**Returns  the standard part list, which supports to add more than one standard part at one time.
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilderList * StandardPartList
                (
                );
                /**Returns  the option whether to group multiple standard parts together to share the same parameters during the update when editing. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: bool StandardPartGroupOption
                (
                );
                /**Returns  the first compartment option. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString FirstCompartment
                (
                );
                /**Sets  the first compartment option. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetFirstCompartment
                (
                    const NXString & firstOption /** firstoption */ 
                );
                /**Sets  the first compartment option. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                void SetFirstCompartment
                (
                    const char * firstOption /** firstoption */ 
                );
                /**Returns  the second compartment option. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString SecondCompartment
                (
                );
                /**Sets  the second compartment option. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetSecondCompartment
                (
                    const NXString & secondOption /** secondoption */ 
                );
                /**Sets  the second compartment option. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                void SetSecondCompartment
                (
                    const char * secondOption /** secondoption */ 
                );
                /**Sets  the option whether to group multiple standard parts together to share the same parameters during the update when editing. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetStandardPartGroupOption
                (
                    bool stdPartGroupOption /** stdpartgroupoption */ 
                );
                /**
                            Sets the current view normal to the main plane, which is the base plane to construct the primary
                            sketch in the template part. If there is no sketch found, nothing will be done.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetView
                (
                );
                /**Returns  the standard part thickness. 
                 <br>  @deprecated Deprecated in NX8.0.3.  Removed with no replacement <br>  

                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public:  NX_DEPRECATED("Deprecated in NX8.0.3.  Removed with no replacement") NXOpen::Expression * Thickness
                (
                );
                /**Returns  the option whether to reverse direction. 
                 <br>  @deprecated Deprecated in NX8.0.3.  Removed with no replacement <br>  

                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public:  NX_DEPRECATED("Deprecated in NX8.0.3.  Removed with no replacement") bool ReverseDirection
                (
                );
                /**Sets  the option whether to reverse direction. 
                 <br>  @deprecated Deprecated in NX8.0.3.  Use @link NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder@endlink .ModifySpreadSheetData() instead. <br>  

                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public:  NX_DEPRECATED("Deprecated in NX8.0.3.  Use NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder.ModifySpreadSheetData() instead.") void SetReverseDirection
                (
                    bool reverseDirectionOption /** reversedirectionoption */ 
                );
                /**Returns  the weld characteristics. 
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Weld::CharacteristicsBuilder * WeldCharacteristics
                (
                );
                /** 
                            Returns the default name of the added standard part name 
                             @return  
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString GetStandardPartName
                (
                    bool bFullName /** bfullname */ 
                );
                /** 
                            Retrieves the model file name from the registration spread sheet.
                             @return  
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString GetModelFile
                (
                );
                /** 
                            Retrieves the data file name from the registration spread sheet. 
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: void GetDataFile
                (
                    bool updateConfiguration /** Whether to update the selection configuration */
                );
                /** 
                            Modifies specific parameter values without change parameter statuses. This could be used to apply
                            smart rule result.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void ModifySpreadsheetData
                (
                    std::vector<NXString> & strParamName /** strparamname */ ,
                    std::vector<NXString> & strParamValue /** strparamvalue */ 
                );
                /** 
                            Updates the parameter values which are defined in the parameter spreadsheet. It also updates the standard
                            parts.  
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void UpdateSpreadsheetData
                (
                    std::vector<NXString> & strParamName /** strparamname */ ,
                    std::vector<NXString> & strParamValue /** strparamvalue */ ,
                    const std::vector<int> & pnParamStatus /** pnparamstatus */ 
                );
                /** 
                            Updates all standard parts
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void UpdateModel
                (
                );
                /** 
                            Adds a standard part into the assembly context, restores the broken wave links and renames the standard
                            part when all external references are defined.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void AddStandardPart
                (
                );
                /** 
                            Runs the smart rule engine to get the inference result.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void RunSmartRule
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * pItemBuilder /** pitembuilder */ ,
                    NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder::SmartRuleStage stage /** stage */ ,
                    std::vector<NXString> & ppStrParamName /** ppstrparamname */ ,
                    std::vector<NXString> & ppStrParamValue /** ppstrparamvalue */ ,
                    std::vector<NXString> & ppStrParamDescription /** ppstrparamdescription */ 
                );
                /** 
                            Looks for the parameter values that are owned by reference geometeries(Attributes) and/or
                            template parts(attributes or expressions) and used as inputs to look for the parameter values
                            in spreadsheet.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void CheckSpreadsheetInput
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * pItemBuilder /** pitembuilder */ ,
                    std::vector<NXString> & ppStrParamName /** ppstrparamname */ ,
                    std::vector<NXString> & ppStrParamValue /** ppstrparamvalue */ 
                );
                /** 
                            End run the smart rules.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void EndRunSmartRule
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * pItemBuilder /** pitembuilder */ 
                );
                /** 
                            Applies the smart rule results to the spreadsheet data block.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void ApplySmartRuleResult
                (
                    std::vector<NXString> & pStrParamName /** pstrparamname */ ,
                    std::vector<NXString> & pStrParamValue /** pstrparamvalue */ 
                );
                /**Returns  
                            the configure attribute,  which is read from the design environment by the settings in 
                            the configuration XML file.
                             
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXString ConfigAttribute
                (
                );
                /**Sets  
                            the configure attribute,  which is read from the design environment by the settings in 
                            the configuration XML file.
                             
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetConfigAttribute
                (
                    const NXString & strConfigAttr /** strconfigattr */ 
                );
                /**Sets  
                            the configure attribute,  which is read from the design environment by the settings in 
                            the configuration XML file.
                             
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                void SetConfigAttribute
                (
                    const char * strConfigAttr /** strconfigattr */ 
                );
                /** 
                            Removes the standard part instance.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void RemoveInstance
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * itemBuilder /** itembuilder */ 
                );
                /** 
                            Flips the standard part thickness direction. If bUpdateModel is true, the model will be updated.
                            If it is false, the thickness direction will be flipped but the model will not be updated.
                            
                 <br>  @deprecated Deprecated in NX8.0.3.  Use @link NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder@endlink .ModifySpreadSheetData() instead. <br>  

                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public:  NX_DEPRECATED("Deprecated in NX8.0.3.  Use NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder.ModifySpreadSheetData() instead.") void FlipThicknessDirection
                (
                    bool bUpdateModel /** bupdatemodel */ 
                );
                /** 
                            Updates the user input thickness to the standard parts. If bUpdateModel is true, the model will be updated. 
                            If it is false, the thickness value will be changed but the model will not be updated. 
                            
                 <br>  @deprecated Deprecated in NX8.0.3.  Use @link NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder@endlink .ModifySpreadSheetData() instead. <br>  

                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public:  NX_DEPRECATED("Deprecated in NX8.0.3.  Use NXOpen::Features::ShipDesign::StandardPartFrameworkBuilder.ModifySpreadSheetData() instead.") void UpdateThickness
                (
                    bool bUpdateModel /** bupdatemodel */ 
                );
                /** 
                            Creates a new StandardPartItemBuilder and intialize the builder with data from the reference builder.
                             @return  
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder * CreateStandardPartItem
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * refBuilder /** refbuilder */ 
                );
                /** 
                            Does the final check to finish the process of updating standar parts.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : None */
                public: void PostUpdate
                (
                );
                /** 
                            Resets rule trigger source cache so the rule trigger evaluation can start from original point.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void ResetRuleInputCache
                (
                );
                /**
                            Checks the clearance between the standard parts and the other components in current assembly.
                            There are two types of interference to be checked. 1) Interference between standard part and
                            other componenets, and 2) interference between standard part and cutouts.
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void CheckInterference
                (
                );
                /**
                            Resets the standard part index so that the next standard part would be added with the index in its name starting from 1.
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void ResetPartIndex
                (
                );
                /**
                            Sets the current standard part item that is edited. This is useful if standard part framework works in non-group
                            mode.
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetCurrentStandardPartItem
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * pCurItemBuilder /** pcuritembuilder */ 
                );
                /**Returns  the option whether to change thickness direction. 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction ThicknessDirection
                (
                );
                /**Sets  the option whether to change thickness direction. 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetThicknessDirection
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder::Direction thicknessDirectionOption /** thicknessdirectionoption */ 
                );
                /** 
                            Updates the standard part thickness direction. If bUpdateModel is true, the model will be updated.
                            If it is false, the thickness direction will be flipped but the model will not be updated.
                            
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void UpdateThicknessDirection
                (
                    bool bUpdateModel /** bupdatemodel */ 
                );
                /** 
                            Updates the parameter values which are defined in the parameter spreadsheet but not update the standard
                            parts.  
                            
                 <br>  Created in NX8.0.0.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void UpdateSpreadsheetDataNoUpdate
                (
                    std::vector<NXString> & strParamName /** strparamname */ ,
                    std::vector<NXString> & strParamValue /** strparamvalue */ ,
                    const std::vector<int> & pnParamStatus /** pnparamstatus */ 
                );
                /**Returns  the manufacturing stock builder that holds the manufacturing data. 
                 <br>  Created in NX8.5.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ManufacturingStockBuilder * ManufacturingStock
                (
                );
                /** Copies the weld characteristics from the specific standard part item builder. 
                 <br>  Created in NX9.0.1.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void CopyFromWeldCharacteristics
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * stdPartItemBuilder /** stdpartitembuilder */ 
                );
                /** Copies the weld characteristics to the specific standard part item builder. 
                 <br>  Created in NX9.0.1.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void CopyToWeldCharacteristics
                (
                    NXOpen::Features::ShipDesign::StandardPartItemBuilder * stdPartItemBuilder /** stdpartitembuilder */ 
                );
                /** Set the standard part version. 
                 <br>  Created in NX9.0.1.  <br>  
                 <br> License requirements : nx_ship_detail ("Ship Detail Design") OR nx_ship_basic ("Ship Basic Design") */
                public: void SetStandardPartVersion
                (
                    double standardPartVersion /** standardpartversion */ 
                );
                /**Returns  the Ship Names builder, used to assign names to the Standard Parts created. 
                 <br>  Created in NX9.0.2.  <br>  
                 <br> License requirements : None */
                public: NXOpen::Features::ShipDesign::ShipNamesBuilder * ShipNames
                (
                );
            };
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
