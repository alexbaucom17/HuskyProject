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
#include "sensor_msgs/MagneticField.h"
#include <string.h> // for memset 
#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int sensor_msgs::MagneticField::ID;
const unsigned int sensor_msgs::MagneticField::DATA_VERSION;
const std::string sensor_msgs::MagneticField::DATA_TYPE_NAME = "MagneticField";
const std::string sensor_msgs::MagneticField::DATA_TYPE_FULL_NAME = "sensor_msgs::MagneticField";
const std::string sensor_msgs::MagneticField::VERSION_MD5 = "a085c070fe760133fed4546e593646d9";
/* xml source for this class */
const std::string sensor_msgs::MagneticField::XML_SOURCE = "<class name=\"MagneticField\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"2f3b0b43eed0c9501de0fa3ff89a45aa\" rosDesc=\"# Measurement of the Magnetic Field vector at a specific location.\\n\\n # If the covariance of the measurement is known, it should be filled in\\n # (if all you know is the variance of each measurement, e.g. from the datasheet,\\n #just put those along the diagonal)\\n # A covariance matrix of all zeros will be interpreted as \\&quot;covariance unknown\\&quot;,\\n # and to use the data a covariance will have to be assumed or gotten from some\\n # other source\\n\\n\\n Header header                        # timestamp is the time the\\n                                      # field was measured\\n                                      # frame_id is the location and orientation\\n                                      # of the field measurement\\n\\n geometry_msgs/Vector3 magnetic_field # x, y, and z components of the\\n                                      # field vector in Tesla\\n                                      # If your sensor does not output 3 axes,\\n                                      # put NaNs in the components not reported.\\n\\n float64[9] magnetic_field_covariance # Row major about x, y, z axes\\n                                      # 0 is interpreted as variance unknown\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"Measurement of the Magnetic Field vector at a specific location.\" id=\"237354224\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"timestamp is the time the  field was measured  frame_id is the location and orientation  of the field measurement\"/>\
  <field name=\"magnetic_field\" type=\"geometry_msgs::Vector3\" sourceType=\"geometry_msgs::Vector3\" comment=\"x, y, and z components of the  field vector in Tesla  If your sensor does not output 3 axes,  put NaNs in the components not reported.\"/>\
  <field name=\"magnetic_field_covariance\" type=\"double\" size=\"9\" sourceType=\"float64\" comment=\"Row major about x, y, z axes  0 is interpreted as variance unknown\"/>\
</class>";

sensor_msgs::MagneticField::MagneticField() : header(), magnetic_field()
{  
    memset(magnetic_field_covariance.data(),0,sizeof(double)*9); 
};

sensor_msgs::MagneticField::MagneticField(const sensor_msgs::MagneticField & inobj) : header(inobj.header), magnetic_field(inobj.magnetic_field)
{
    magnetic_field_covariance = inobj.magnetic_field_covariance;
};

sensor_msgs::MagneticField::~MagneticField()
{
};

sensor_msgs::MagneticField * sensor_msgs::MagneticField::New()
{ 
    return new MagneticField();
};

bool sensor_msgs::MagneticField::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && geometry_msgs::Vector3::dataTypeFlat();

};

sensor_msgs::MagneticField & sensor_msgs::MagneticField::operator=(const sensor_msgs::MagneticField & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus sensor_msgs::MagneticField is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(sensor_msgs::MagneticField));
        }
        else */ 
        {

            header = inobj.header;
            magnetic_field = inobj.magnetic_field;
            magnetic_field_covariance = inobj.magnetic_field_covariance;
        }
    }

    return *this;
}

bool sensor_msgs::MagneticField::operator==(const sensor_msgs::MagneticField & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (magnetic_field == inobj.magnetic_field)
             && (magnetic_field_covariance == inobj.magnetic_field_covariance);
    }

    return ret;
}

bool sensor_msgs::MagneticField::operator!=(const sensor_msgs::MagneticField & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool sensor_msgs::MagneticField::operator<(const sensor_msgs::MagneticField & inobj) const
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
        if (magnetic_field < inobj.magnetic_field) return true;
        if (inobj.magnetic_field <  magnetic_field) return false; 
        if (magnetic_field_covariance < inobj.magnetic_field_covariance) return true;
        if (inobj.magnetic_field_covariance <  magnetic_field_covariance) return false; ;
    }

    return ret;
}

bool sensor_msgs::MagneticField::operator>(const sensor_msgs::MagneticField & inobj) const
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
        if (magnetic_field > inobj.magnetic_field) return true;
        if (inobj.magnetic_field >  magnetic_field) return false; 
        if (magnetic_field_covariance > inobj.magnetic_field_covariance) return true;
        if (inobj.magnetic_field_covariance >  magnetic_field_covariance) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const sensor_msgs::MagneticField & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"magnetic_field",t.magnetic_field,indent,false);
    rframe::json_io::encode(sstr,"magnetic_field_covariance",t.magnetic_field_covariance,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string sensor_msgs::MagneticField::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::MagneticField & value)
{
    return s << value.toStr(false);
}

