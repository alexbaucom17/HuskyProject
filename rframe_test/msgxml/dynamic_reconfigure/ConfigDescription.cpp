// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:48 -0500
//  From Template/Script: data_templates/DataClassTemplate.cpp
 
/*
  CTA RIGHTS

  This document contains information proprietary to General Dynamics
  Robotic Systems and is not to be reproduced, transmitted, transferred,
  or otherwise used without the express written consent of General
  Dynamics Robotic Systems except as described below.

  GOVERNMENT PURPOSE RIGHTS

  Contract No.:        W911NF-10-2-0016, Articles of Collaboration,
                       Article 5, Intellectual Property
  Contractor Name:     General Dynamics Robotic Systems, Inc. (GDRS)
  Contractor Address:  1231 Tech Court, Westminster, MD  21157

  Expiration Date - None

  Technical data and computer software first created by Member(s) in
  performance of the Agreement will be disclosed to the Government.
  General Dynamics Robotic Systems retains the entire right, title, and
  interest throughout the world to each subject invention subject to the
  provisions of this clause and 37 CFR Part 401, 32 CFR 32.36, and
  34 CFR 34.25. The Government shall have the right to obtain, reproduce,
  publish or otherwise use the work for Government purposes.

  NON-EXCLUSIVE LICENSE TO CONSORTIUM PARTICIPANTS
  Consortium Members and subawardees are defined as 'Participants'
  Under Article 5.3, Participants are granted a nonexclusive, royalty-
  free, non-sublicenseable, non-assignable, license to Consortium
  Intellectual Property for the limited purpose of performing tasks under
  The Cooperative Agreement, for Government purposes only, and to make and
  have the same made solely for such use.

*/

#include <math.h> // to allow use of common constants...
#include <common/Error.h>
#include "dynamic_reconfigure/ConfigDescription.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int dynamic_reconfigure::ConfigDescription::ID;
const unsigned int dynamic_reconfigure::ConfigDescription::DATA_VERSION;
const std::string dynamic_reconfigure::ConfigDescription::DATA_TYPE_NAME = "ConfigDescription";
const std::string dynamic_reconfigure::ConfigDescription::DATA_TYPE_FULL_NAME = "dynamic_reconfigure::ConfigDescription";
const std::string dynamic_reconfigure::ConfigDescription::VERSION_MD5 = "1b3132b22cfcc859b8126ebf47228bb5";
/* xml source for this class */
const std::string dynamic_reconfigure::ConfigDescription::XML_SOURCE = "<class name=\"ConfigDescription\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"757ce9d44ba8ddd801bb30bc456f946f\" rosDesc=\"Group[] groups\\nConfig max\\nConfig min\\nConfig dflt\\n\\n================================================================================\\nMSG: dynamic_reconfigure/Group\\nstring name\\nstring type\\nParamDescription[] parameters\\nint32 parent \\nint32 id\\n\\n================================================================================\\nMSG: dynamic_reconfigure/ParamDescription\\nstring name\\nstring type\\nuint32 level\\nstring description\\nstring edit_method\\n\\n================================================================================\\nMSG: dynamic_reconfigure/Config\\nBoolParameter[] bools\\nIntParameter[] ints\\nStrParameter[] strs\\nDoubleParameter[] doubles\\nGroupState[] groups\\n\\n================================================================================\\nMSG: dynamic_reconfigure/BoolParameter\\nstring name\\nbool value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/IntParameter\\nstring name\\nint32 value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/StrParameter\\nstring name\\nstring value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/DoubleParameter\\nstring name\\nfloat64 value\\n\\n================================================================================\\nMSG: dynamic_reconfigure/GroupState\\nstring name\\nbool state\\nint32 id\\nint32 parent\\n\" comment=\"\" id=\"535859632\">\
  <field name=\"groups\" type=\"vector(Group)\" sourceType=\"Group\" comment=\"\"/>\
  <field name=\"max\" type=\"Config\" sourceType=\"Config\" comment=\"\"/>\
  <field name=\"min\" type=\"Config\" sourceType=\"Config\" comment=\"\"/>\
  <field name=\"dflt\" type=\"Config\" sourceType=\"Config\" comment=\"\"/>\
</class>";

dynamic_reconfigure::ConfigDescription::ConfigDescription() : groups(), max(), min(), dflt()
{  
};

dynamic_reconfigure::ConfigDescription::ConfigDescription(const dynamic_reconfigure::ConfigDescription & inobj) : groups(inobj.groups), max(inobj.max), min(inobj.min), dflt(inobj.dflt)
{
};

dynamic_reconfigure::ConfigDescription::~ConfigDescription()
{
};

dynamic_reconfigure::ConfigDescription * dynamic_reconfigure::ConfigDescription::New()
{ 
    return new ConfigDescription();
};

bool dynamic_reconfigure::ConfigDescription::dataTypeFlat() 
{   
    return false; 
};

dynamic_reconfigure::ConfigDescription & dynamic_reconfigure::ConfigDescription::operator=(const dynamic_reconfigure::ConfigDescription & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus dynamic_reconfigure::ConfigDescription is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(dynamic_reconfigure::ConfigDescription));
        }
        else */ 
        {

            groups = inobj.groups;
            max = inobj.max;
            min = inobj.min;
            dflt = inobj.dflt;
        }
    }

    return *this;
}

bool dynamic_reconfigure::ConfigDescription::operator==(const dynamic_reconfigure::ConfigDescription & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (groups == inobj.groups)
             && (max == inobj.max)
             && (min == inobj.min)
             && (dflt == inobj.dflt);
    }

    return ret;
}

bool dynamic_reconfigure::ConfigDescription::operator!=(const dynamic_reconfigure::ConfigDescription & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool dynamic_reconfigure::ConfigDescription::operator<(const dynamic_reconfigure::ConfigDescription & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (groups < inobj.groups) return true;
        if (inobj.groups <  groups) return false; 
        if (max < inobj.max) return true;
        if (inobj.max <  max) return false; 
        if (min < inobj.min) return true;
        if (inobj.min <  min) return false; 
        if (dflt < inobj.dflt) return true;
        if (inobj.dflt <  dflt) return false; ;
    }

    return ret;
}

bool dynamic_reconfigure::ConfigDescription::operator>(const dynamic_reconfigure::ConfigDescription & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (groups > inobj.groups) return true;
        if (inobj.groups >  groups) return false; 
        if (max > inobj.max) return true;
        if (inobj.max >  max) return false; 
        if (min > inobj.min) return true;
        if (inobj.min >  min) return false; 
        if (dflt > inobj.dflt) return true;
        if (inobj.dflt >  dflt) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const dynamic_reconfigure::ConfigDescription & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"groups",t.groups,indent,false);
    rframe::json_io::encode(sstr,"max",t.max,indent,false);
    rframe::json_io::encode(sstr,"min",t.min,indent,false);
    rframe::json_io::encode(sstr,"dflt",t.dflt,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string dynamic_reconfigure::ConfigDescription::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const dynamic_reconfigure::ConfigDescription & value)
{
    return s << value.toStr(false);
}

