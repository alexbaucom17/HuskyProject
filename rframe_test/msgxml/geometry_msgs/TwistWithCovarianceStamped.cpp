// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:49 -0500
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
#include "geometry_msgs/TwistWithCovarianceStamped.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int geometry_msgs::TwistWithCovarianceStamped::ID;
const unsigned int geometry_msgs::TwistWithCovarianceStamped::DATA_VERSION;
const std::string geometry_msgs::TwistWithCovarianceStamped::DATA_TYPE_NAME = "TwistWithCovarianceStamped";
const std::string geometry_msgs::TwistWithCovarianceStamped::DATA_TYPE_FULL_NAME = "geometry_msgs::TwistWithCovarianceStamped";
const std::string geometry_msgs::TwistWithCovarianceStamped::VERSION_MD5 = "3e8322e1024287fd47e4d62c8a2bcdc0";
/* xml source for this class */
const std::string geometry_msgs::TwistWithCovarianceStamped::XML_SOURCE = "<class name=\"TwistWithCovarianceStamped\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"8927a1a12fb2607ceea095b2dc440a96\" rosDesc=\"# This represents an estimated twist with reference coordinate frame and timestamp.\\nHeader header\\nTwistWithCovariance twist\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/TwistWithCovariance\\n# This expresses velocity in free space with uncertainty.\\n\\nTwist twist\\n\\n# Row-major representation of the 6x6 covariance matrix\\n# The orientation parameters use a fixed-axis representation.\\n# In order, the parameters are:\\n# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\\nfloat64[36] covariance\\n\\n================================================================================\\nMSG: geometry_msgs/Twist\\n# This expresses velocity in free space broken into its linear and angular parts.\\nVector3  linear\\nVector3  angular\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"This represents an estimated twist with reference coordinate frame and timestamp.\" id=\"1901327814\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"twist\" type=\"TwistWithCovariance\" sourceType=\"TwistWithCovariance\" comment=\"\"/>\
</class>";

geometry_msgs::TwistWithCovarianceStamped::TwistWithCovarianceStamped() : header(), twist()
{  
};

geometry_msgs::TwistWithCovarianceStamped::TwistWithCovarianceStamped(const geometry_msgs::TwistWithCovarianceStamped & inobj) : header(inobj.header), twist(inobj.twist)
{
};

geometry_msgs::TwistWithCovarianceStamped::~TwistWithCovarianceStamped()
{
};

geometry_msgs::TwistWithCovarianceStamped * geometry_msgs::TwistWithCovarianceStamped::New()
{ 
    return new TwistWithCovarianceStamped();
};

bool geometry_msgs::TwistWithCovarianceStamped::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && TwistWithCovariance::dataTypeFlat();

};

geometry_msgs::TwistWithCovarianceStamped & geometry_msgs::TwistWithCovarianceStamped::operator=(const geometry_msgs::TwistWithCovarianceStamped & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus geometry_msgs::TwistWithCovarianceStamped is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(geometry_msgs::TwistWithCovarianceStamped));
        }
        else */ 
        {

            header = inobj.header;
            twist = inobj.twist;
        }
    }

    return *this;
}

bool geometry_msgs::TwistWithCovarianceStamped::operator==(const geometry_msgs::TwistWithCovarianceStamped & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (twist == inobj.twist);
    }

    return ret;
}

bool geometry_msgs::TwistWithCovarianceStamped::operator!=(const geometry_msgs::TwistWithCovarianceStamped & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool geometry_msgs::TwistWithCovarianceStamped::operator<(const geometry_msgs::TwistWithCovarianceStamped & inobj) const
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
        if (twist < inobj.twist) return true;
        if (inobj.twist <  twist) return false; ;
    }

    return ret;
}

bool geometry_msgs::TwistWithCovarianceStamped::operator>(const geometry_msgs::TwistWithCovarianceStamped & inobj) const
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
        if (twist > inobj.twist) return true;
        if (inobj.twist >  twist) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const geometry_msgs::TwistWithCovarianceStamped & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"twist",t.twist,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string geometry_msgs::TwistWithCovarianceStamped::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const geometry_msgs::TwistWithCovarianceStamped & value)
{
    return s << value.toStr(false);
}

