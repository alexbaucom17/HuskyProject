// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:59 -0500
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
#include "turtle_actionlib/ShapeResult.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int turtle_actionlib::ShapeResult::ID;
const unsigned int turtle_actionlib::ShapeResult::DATA_VERSION;
const std::string turtle_actionlib::ShapeResult::DATA_TYPE_NAME = "ShapeResult";
const std::string turtle_actionlib::ShapeResult::DATA_TYPE_FULL_NAME = "turtle_actionlib::ShapeResult";
const std::string turtle_actionlib::ShapeResult::VERSION_MD5 = "21a91550a82f47140ec9b48d50ca2b8c";
/* xml source for this class */
const std::string turtle_actionlib::ShapeResult::XML_SOURCE = "<class name=\"ShapeResult\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"b06c6e2225f820dbc644270387cd1a7c\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n#result definition\\nfloat32 interior_angle\\nfloat32 apothem\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ====== result definition\" id=\"1300583016\">\
  <field name=\"interior_angle\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
  <field name=\"apothem\" type=\"float\" sourceType=\"float32\" comment=\"\"/>\
</class>";

turtle_actionlib::ShapeResult::ShapeResult() : interior_angle(0), apothem(0)
{  
};

turtle_actionlib::ShapeResult::ShapeResult(const turtle_actionlib::ShapeResult & inobj) : interior_angle(inobj.interior_angle), apothem(inobj.apothem)
{
};

turtle_actionlib::ShapeResult::~ShapeResult()
{
};

turtle_actionlib::ShapeResult * turtle_actionlib::ShapeResult::New()
{ 
    return new ShapeResult();
};

bool turtle_actionlib::ShapeResult::dataTypeFlat() 
{  
    return true;
};

turtle_actionlib::ShapeResult & turtle_actionlib::ShapeResult::operator=(const turtle_actionlib::ShapeResult & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus turtle_actionlib::ShapeResult is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(turtle_actionlib::ShapeResult));
        }
        else */ 
        {

            interior_angle = inobj.interior_angle;
            apothem = inobj.apothem;
        }
    }

    return *this;
}

bool turtle_actionlib::ShapeResult::operator==(const turtle_actionlib::ShapeResult & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (interior_angle == inobj.interior_angle)
             && (apothem == inobj.apothem);
    }

    return ret;
}

bool turtle_actionlib::ShapeResult::operator!=(const turtle_actionlib::ShapeResult & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool turtle_actionlib::ShapeResult::operator<(const turtle_actionlib::ShapeResult & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (interior_angle < inobj.interior_angle) return true;
        if (inobj.interior_angle <  interior_angle) return false; 
        if (apothem < inobj.apothem) return true;
        if (inobj.apothem <  apothem) return false; ;
    }

    return ret;
}

bool turtle_actionlib::ShapeResult::operator>(const turtle_actionlib::ShapeResult & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (interior_angle > inobj.interior_angle) return true;
        if (inobj.interior_angle >  interior_angle) return false; 
        if (apothem > inobj.apothem) return true;
        if (inobj.apothem >  apothem) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const turtle_actionlib::ShapeResult & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"interior_angle",t.interior_angle,indent,false);
    rframe::json_io::encode(sstr,"apothem",t.apothem,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string turtle_actionlib::ShapeResult::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const turtle_actionlib::ShapeResult & value)
{
    return s << value.toStr(false);
}

