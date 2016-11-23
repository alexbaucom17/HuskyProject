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
#include "dynamic_reconfigure/SensorLevels.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const char dynamic_reconfigure::SensorLevels::RECONFIGURE_CLOSE = 3;
const char dynamic_reconfigure::SensorLevels::RECONFIGURE_STOP = 1;
const char dynamic_reconfigure::SensorLevels::RECONFIGURE_RUNNING = 0;

const unsigned int dynamic_reconfigure::SensorLevels::ID;
const unsigned int dynamic_reconfigure::SensorLevels::DATA_VERSION;
const std::string dynamic_reconfigure::SensorLevels::DATA_TYPE_NAME = "SensorLevels";
const std::string dynamic_reconfigure::SensorLevels::DATA_TYPE_FULL_NAME = "dynamic_reconfigure::SensorLevels";
const std::string dynamic_reconfigure::SensorLevels::VERSION_MD5 = "f351af2d71ceebff0d950fbb611f32b3";
/* xml source for this class */
const std::string dynamic_reconfigure::SensorLevels::XML_SOURCE = "<class name=\"SensorLevels\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"6322637bee96d5489db6e2127c47602c\" rosDesc=\"# This message is deprecated, please use driver_base/SensorLevels instead.\\n\\nbyte RECONFIGURE_CLOSE = 3  # Parameters that need a sensor to be stopped completely when changed\\nbyte RECONFIGURE_STOP = 1  # Parameters that need a sensor to stop streaming when changed\\nbyte RECONFIGURE_RUNNING = 0 # Parameters that can be changed while a sensor is streaming\\n\" comment=\"This message is deprecated, please use driver_base/SensorLevels instead.\" id=\"535859638\">\
  <constant init=\"3\" name=\"RECONFIGURE_CLOSE\" type=\"char\" sourceType=\"byte\" comment=\"Parameters that need a sensor to be stopped completely when changed\"/>\
  <constant init=\"1\" name=\"RECONFIGURE_STOP\" type=\"char\" sourceType=\"byte\" comment=\"Parameters that need a sensor to stop streaming when changed\"/>\
  <constant init=\"0\" name=\"RECONFIGURE_RUNNING\" type=\"char\" sourceType=\"byte\" comment=\"Parameters that can be changed while a sensor is streaming\"/>\
</class>";

dynamic_reconfigure::SensorLevels::SensorLevels() 
{  
};

dynamic_reconfigure::SensorLevels::SensorLevels(const dynamic_reconfigure::SensorLevels & inobj) 
{
};

dynamic_reconfigure::SensorLevels::~SensorLevels()
{
};

dynamic_reconfigure::SensorLevels * dynamic_reconfigure::SensorLevels::New()
{ 
    return new SensorLevels();
};

bool dynamic_reconfigure::SensorLevels::dataTypeFlat() 
{  
    return true;
};

dynamic_reconfigure::SensorLevels & dynamic_reconfigure::SensorLevels::operator=(const dynamic_reconfigure::SensorLevels & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus dynamic_reconfigure::SensorLevels is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(dynamic_reconfigure::SensorLevels));
        }
        else */ 
        {

        }
    }

    return *this;
}

bool dynamic_reconfigure::SensorLevels::operator==(const dynamic_reconfigure::SensorLevels & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
    }

    return ret;
}

bool dynamic_reconfigure::SensorLevels::operator!=(const dynamic_reconfigure::SensorLevels & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool dynamic_reconfigure::SensorLevels::operator<(const dynamic_reconfigure::SensorLevels & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm
        ;
    }

    return ret;
}

bool dynamic_reconfigure::SensorLevels::operator>(const dynamic_reconfigure::SensorLevels & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm
        ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const dynamic_reconfigure::SensorLevels & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string dynamic_reconfigure::SensorLevels::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const dynamic_reconfigure::SensorLevels & value)
{
    return s << value.toStr(false);
}

