// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:53 -0500
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
#include "sensor_msgs/FluidPressure.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int sensor_msgs::FluidPressure::ID;
const unsigned int sensor_msgs::FluidPressure::DATA_VERSION;
const std::string sensor_msgs::FluidPressure::DATA_TYPE_NAME = "FluidPressure";
const std::string sensor_msgs::FluidPressure::DATA_TYPE_FULL_NAME = "sensor_msgs::FluidPressure";
const std::string sensor_msgs::FluidPressure::VERSION_MD5 = "acadd0049d2c97907557bc3790a1b311";
/* xml source for this class */
const std::string sensor_msgs::FluidPressure::XML_SOURCE = "<class name=\"FluidPressure\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"804dc5cea1c5306d6a2eb80b9833befe\" rosDesc=\"# Single pressure reading.  This message is appropriate for measuring the\\n # pressure inside of a fluid (air, water, etc).  This also includes\\n # atmospheric or barometric pressure.\\n\\n # This message is not appropriate for force/pressure contact sensors.\\n\\n Header header           # timestamp of the measurement\\n                         # frame_id is the location of the pressure sensor\\n\\n float64 fluid_pressure  # Absolute pressure reading in Pascals.\\n\\n float64 variance        # 0 is interpreted as variance unknown\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"Single pressure reading.  This message is appropriate for measuring the  pressure inside of a fluid (air, water, etc).  This also includes  atmospheric or barometric pressure.\" id=\"237354214\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"timestamp of the measurement  frame_id is the location of the pressure sensor\"/>\
  <field name=\"fluid_pressure\" type=\"double\" sourceType=\"float64\" comment=\"Absolute pressure reading in Pascals.\"/>\
  <field name=\"variance\" type=\"double\" sourceType=\"float64\" comment=\"0 is interpreted as variance unknown\"/>\
</class>";

sensor_msgs::FluidPressure::FluidPressure() : header(), fluid_pressure(0), variance(0)
{  
};

sensor_msgs::FluidPressure::FluidPressure(const sensor_msgs::FluidPressure & inobj) : header(inobj.header), fluid_pressure(inobj.fluid_pressure), variance(inobj.variance)
{
};

sensor_msgs::FluidPressure::~FluidPressure()
{
};

sensor_msgs::FluidPressure * sensor_msgs::FluidPressure::New()
{ 
    return new FluidPressure();
};

bool sensor_msgs::FluidPressure::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat();

};

sensor_msgs::FluidPressure & sensor_msgs::FluidPressure::operator=(const sensor_msgs::FluidPressure & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus sensor_msgs::FluidPressure is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(sensor_msgs::FluidPressure));
        }
        else */ 
        {

            header = inobj.header;
            fluid_pressure = inobj.fluid_pressure;
            variance = inobj.variance;
        }
    }

    return *this;
}

bool sensor_msgs::FluidPressure::operator==(const sensor_msgs::FluidPressure & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (fluid_pressure == inobj.fluid_pressure)
             && (variance == inobj.variance);
    }

    return ret;
}

bool sensor_msgs::FluidPressure::operator!=(const sensor_msgs::FluidPressure & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool sensor_msgs::FluidPressure::operator<(const sensor_msgs::FluidPressure & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header < inobj.header) return true;
        if (inobj.header <  header) return false; 
        if (fluid_pressure < inobj.fluid_pressure) return true;
        if (inobj.fluid_pressure <  fluid_pressure) return false; 
        if (variance < inobj.variance) return true;
        if (inobj.variance <  variance) return false; ;
    }

    return ret;
}

bool sensor_msgs::FluidPressure::operator>(const sensor_msgs::FluidPressure & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header > inobj.header) return true;
        if (inobj.header >  header) return false; 
        if (fluid_pressure > inobj.fluid_pressure) return true;
        if (inobj.fluid_pressure >  fluid_pressure) return false; 
        if (variance > inobj.variance) return true;
        if (inobj.variance >  variance) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const sensor_msgs::FluidPressure & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"fluid_pressure",t.fluid_pressure,indent,false);
    rframe::json_io::encode(sstr,"variance",t.variance,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string sensor_msgs::FluidPressure::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::FluidPressure & value)
{
    return s << value.toStr(false);
}

