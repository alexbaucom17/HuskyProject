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
#include "geometry_msgs/PoseArray.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int geometry_msgs::PoseArray::ID;
const unsigned int geometry_msgs::PoseArray::DATA_VERSION;
const std::string geometry_msgs::PoseArray::DATA_TYPE_NAME = "PoseArray";
const std::string geometry_msgs::PoseArray::DATA_TYPE_FULL_NAME = "geometry_msgs::PoseArray";
const std::string geometry_msgs::PoseArray::VERSION_MD5 = "286608724fff0d99091463710d3048ae";
/* xml source for this class */
const std::string geometry_msgs::PoseArray::XML_SOURCE = "<class name=\"PoseArray\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"916c28c5764443f268b296bb671b9d97\" rosDesc=\"# An array of poses with a header for global reference.\\n\\nHeader header\\n\\nPose[] poses\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Pose\\n# A representation of pose in free space, composed of position and orientation. \\nPoint position\\nQuaternion orientation\\n\\n================================================================================\\nMSG: geometry_msgs/Point\\n# This contains the position of a point in free space\\nfloat64 x\\nfloat64 y\\nfloat64 z\\n\\n================================================================================\\nMSG: geometry_msgs/Quaternion\\n# This represents an orientation in free space in quaternion form.\\n\\nfloat64 x\\nfloat64 y\\nfloat64 z\\nfloat64 w\\n\" comment=\"An array of poses with a header for global reference.\" id=\"1901327803\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"poses\" type=\"vector(Pose)\" sourceType=\"Pose\" comment=\"\"/>\
</class>";

geometry_msgs::PoseArray::PoseArray() : header(), poses()
{  
};

geometry_msgs::PoseArray::PoseArray(const geometry_msgs::PoseArray & inobj) : header(inobj.header), poses(inobj.poses)
{
};

geometry_msgs::PoseArray::~PoseArray()
{
};

geometry_msgs::PoseArray * geometry_msgs::PoseArray::New()
{ 
    return new PoseArray();
};

bool geometry_msgs::PoseArray::dataTypeFlat() 
{   
    return false; 
};

geometry_msgs::PoseArray & geometry_msgs::PoseArray::operator=(const geometry_msgs::PoseArray & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus geometry_msgs::PoseArray is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(geometry_msgs::PoseArray));
        }
        else */ 
        {

            header = inobj.header;
            poses = inobj.poses;
        }
    }

    return *this;
}

bool geometry_msgs::PoseArray::operator==(const geometry_msgs::PoseArray & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (poses == inobj.poses);
    }

    return ret;
}

bool geometry_msgs::PoseArray::operator!=(const geometry_msgs::PoseArray & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool geometry_msgs::PoseArray::operator<(const geometry_msgs::PoseArray & inobj) const
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
        if (poses < inobj.poses) return true;
        if (inobj.poses <  poses) return false; ;
    }

    return ret;
}

bool geometry_msgs::PoseArray::operator>(const geometry_msgs::PoseArray & inobj) const
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
        if (poses > inobj.poses) return true;
        if (inobj.poses >  poses) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const geometry_msgs::PoseArray & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"poses",t.poses,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string geometry_msgs::PoseArray::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const geometry_msgs::PoseArray & value)
{
    return s << value.toStr(false);
}

