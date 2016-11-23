// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:54 -0500
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
#include "sensor_msgs/TimeReference.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int sensor_msgs::TimeReference::ID;
const unsigned int sensor_msgs::TimeReference::DATA_VERSION;
const std::string sensor_msgs::TimeReference::DATA_TYPE_NAME = "TimeReference";
const std::string sensor_msgs::TimeReference::DATA_TYPE_FULL_NAME = "sensor_msgs::TimeReference";
const std::string sensor_msgs::TimeReference::VERSION_MD5 = "f9edf400eaaf99332f490066b44a4481";
/* xml source for this class */
const std::string sensor_msgs::TimeReference::XML_SOURCE = "<class name=\"TimeReference\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"fded64a0265108ba86c3d38fb11c0c16\" rosDesc=\"# Measurement from an external time source not actively synchronized with the system clock.\\n\\nHeader header    # stamp is system time for which measurement was valid\\n                 # frame_id is not used \\n\\ntime   time_ref  # corresponding time from this external source\\nstring source    # (optional) name of time source\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\" comment=\"Measurement from an external time source not actively synchronized with the system clock.\" id=\"237354236\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"stamp is system time for which measurement was valid  frame_id is not used\"/>\
  <field name=\"time_ref\" type=\"std_msgs::RosTime\" sourceType=\"time\" comment=\"corresponding time from this external source\"/>\
  <field name=\"source\" type=\"string\" sourceType=\"string\" comment=\"(optional) name of time source\"/>\
</class>";

sensor_msgs::TimeReference::TimeReference() : header(), time_ref(), source()
{  
};

sensor_msgs::TimeReference::TimeReference(const sensor_msgs::TimeReference & inobj) : header(inobj.header), time_ref(inobj.time_ref), source(inobj.source)
{
};

sensor_msgs::TimeReference::~TimeReference()
{
};

sensor_msgs::TimeReference * sensor_msgs::TimeReference::New()
{ 
    return new TimeReference();
};

bool sensor_msgs::TimeReference::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && std_msgs::RosTime::dataTypeFlat() && rframe::CodeGenTraits<std::string>::flat();

};

sensor_msgs::TimeReference & sensor_msgs::TimeReference::operator=(const sensor_msgs::TimeReference & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus sensor_msgs::TimeReference is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(sensor_msgs::TimeReference));
        }
        else */ 
        {

            header = inobj.header;
            time_ref = inobj.time_ref;
            source = inobj.source;
        }
    }

    return *this;
}

bool sensor_msgs::TimeReference::operator==(const sensor_msgs::TimeReference & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (time_ref == inobj.time_ref)
             && (source == inobj.source);
    }

    return ret;
}

bool sensor_msgs::TimeReference::operator!=(const sensor_msgs::TimeReference & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool sensor_msgs::TimeReference::operator<(const sensor_msgs::TimeReference & inobj) const
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
        if (time_ref < inobj.time_ref) return true;
        if (inobj.time_ref <  time_ref) return false; 
        if (source < inobj.source) return true;
        if (inobj.source <  source) return false; ;
    }

    return ret;
}

bool sensor_msgs::TimeReference::operator>(const sensor_msgs::TimeReference & inobj) const
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
        if (time_ref > inobj.time_ref) return true;
        if (inobj.time_ref >  time_ref) return false; 
        if (source > inobj.source) return true;
        if (inobj.source >  source) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const sensor_msgs::TimeReference & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"time_ref",t.time_ref,indent,false);
    rframe::json_io::encode(sstr,"source",t.source,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string sensor_msgs::TimeReference::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::TimeReference & value)
{
    return s << value.toStr(false);
}

