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
#include "dynamic_reconfigure/ParamDescription.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int dynamic_reconfigure::ParamDescription::ID;
const unsigned int dynamic_reconfigure::ParamDescription::DATA_VERSION;
const std::string dynamic_reconfigure::ParamDescription::DATA_TYPE_NAME = "ParamDescription";
const std::string dynamic_reconfigure::ParamDescription::DATA_TYPE_FULL_NAME = "dynamic_reconfigure::ParamDescription";
const std::string dynamic_reconfigure::ParamDescription::VERSION_MD5 = "e7ee741049d21f8cce27820f4b524ec2";
/* xml source for this class */
const std::string dynamic_reconfigure::ParamDescription::XML_SOURCE = "<class name=\"ParamDescription\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"7434fcb9348c13054e0c3b267c8cb34d\" rosDesc=\"string name\\nstring type\\nuint32 level\\nstring description\\nstring edit_method\\n\" comment=\"\" id=\"535859637\">\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"type\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"level\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"\"/>\
  <field name=\"description\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"edit_method\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>";

dynamic_reconfigure::ParamDescription::ParamDescription() : name(), type(), level(0), description(), edit_method()
{  
};

dynamic_reconfigure::ParamDescription::ParamDescription(const dynamic_reconfigure::ParamDescription & inobj) : name(inobj.name), type(inobj.type), level(inobj.level), description(inobj.description), edit_method(inobj.edit_method)
{
};

dynamic_reconfigure::ParamDescription::~ParamDescription()
{
};

dynamic_reconfigure::ParamDescription * dynamic_reconfigure::ParamDescription::New()
{ 
    return new ParamDescription();
};

bool dynamic_reconfigure::ParamDescription::dataTypeFlat() 
{  
    return rframe::CodeGenTraits<std::string>::flat();

};

dynamic_reconfigure::ParamDescription & dynamic_reconfigure::ParamDescription::operator=(const dynamic_reconfigure::ParamDescription & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus dynamic_reconfigure::ParamDescription is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(dynamic_reconfigure::ParamDescription));
        }
        else */ 
        {

            name = inobj.name;
            type = inobj.type;
            level = inobj.level;
            description = inobj.description;
            edit_method = inobj.edit_method;
        }
    }

    return *this;
}

bool dynamic_reconfigure::ParamDescription::operator==(const dynamic_reconfigure::ParamDescription & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (name == inobj.name)
             && (type == inobj.type)
             && (level == inobj.level)
             && (description == inobj.description)
             && (edit_method == inobj.edit_method);
    }

    return ret;
}

bool dynamic_reconfigure::ParamDescription::operator!=(const dynamic_reconfigure::ParamDescription & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool dynamic_reconfigure::ParamDescription::operator<(const dynamic_reconfigure::ParamDescription & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (name < inobj.name) return true;
        if (inobj.name <  name) return false; 
        if (type < inobj.type) return true;
        if (inobj.type <  type) return false; 
        if (level < inobj.level) return true;
        if (inobj.level <  level) return false; 
        if (description < inobj.description) return true;
        if (inobj.description <  description) return false; 
        if (edit_method < inobj.edit_method) return true;
        if (inobj.edit_method <  edit_method) return false; ;
    }

    return ret;
}

bool dynamic_reconfigure::ParamDescription::operator>(const dynamic_reconfigure::ParamDescription & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (name > inobj.name) return true;
        if (inobj.name >  name) return false; 
        if (type > inobj.type) return true;
        if (inobj.type >  type) return false; 
        if (level > inobj.level) return true;
        if (inobj.level >  level) return false; 
        if (description > inobj.description) return true;
        if (inobj.description >  description) return false; 
        if (edit_method > inobj.edit_method) return true;
        if (inobj.edit_method >  edit_method) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const dynamic_reconfigure::ParamDescription & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"name",t.name,indent,false);
    rframe::json_io::encode(sstr,"type",t.type,indent,false);
    rframe::json_io::encode(sstr,"level",t.level,indent,false);
    rframe::json_io::encode(sstr,"description",t.description,indent,false);
    rframe::json_io::encode(sstr,"edit_method",t.edit_method,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string dynamic_reconfigure::ParamDescription::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const dynamic_reconfigure::ParamDescription & value)
{
    return s << value.toStr(false);
}

