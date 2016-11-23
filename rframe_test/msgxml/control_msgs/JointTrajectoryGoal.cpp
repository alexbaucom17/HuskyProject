// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:46 -0500
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
#include "control_msgs/JointTrajectoryGoal.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int control_msgs::JointTrajectoryGoal::ID;
const unsigned int control_msgs::JointTrajectoryGoal::DATA_VERSION;
const std::string control_msgs::JointTrajectoryGoal::DATA_TYPE_NAME = "JointTrajectoryGoal";
const std::string control_msgs::JointTrajectoryGoal::DATA_TYPE_FULL_NAME = "control_msgs::JointTrajectoryGoal";
const std::string control_msgs::JointTrajectoryGoal::VERSION_MD5 = "043f199ab62344f2c6431402017639ec";
/* xml source for this class */
const std::string control_msgs::JointTrajectoryGoal::XML_SOURCE = "<class name=\"JointTrajectoryGoal\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"2a0eff76c870e8595636c2a562ca298e\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\ntrajectory_msgs/JointTrajectory trajectory\\n\\n================================================================================\\nMSG: trajectory_msgs/JointTrajectory\\nHeader header\\nstring[] joint_names\\nJointTrajectoryPoint[] points\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: trajectory_msgs/JointTrajectoryPoint\\n# Each trajectory point specifies either positions[, velocities[, accelerations]]\\n# or positions[, effort] for the trajectory to be executed.\\n# All specified values are in the same order as the joint names in JointTrajectory.msg\\n\\nfloat64[] positions\\nfloat64[] velocities\\nfloat64[] accelerations\\nfloat64[] effort\\nduration time_from_start\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\" id=\"1246705452\">\
  <field name=\"trajectory\" type=\"trajectory_msgs::JointTrajectory\" sourceType=\"trajectory_msgs::JointTrajectory\" comment=\"\"/>\
</class>";

control_msgs::JointTrajectoryGoal::JointTrajectoryGoal() : trajectory()
{  
};

control_msgs::JointTrajectoryGoal::JointTrajectoryGoal(const control_msgs::JointTrajectoryGoal & inobj) : trajectory(inobj.trajectory)
{
};

control_msgs::JointTrajectoryGoal::~JointTrajectoryGoal()
{
};

control_msgs::JointTrajectoryGoal * control_msgs::JointTrajectoryGoal::New()
{ 
    return new JointTrajectoryGoal();
};

bool control_msgs::JointTrajectoryGoal::dataTypeFlat() 
{  
    return trajectory_msgs::JointTrajectory::dataTypeFlat();

};

control_msgs::JointTrajectoryGoal & control_msgs::JointTrajectoryGoal::operator=(const control_msgs::JointTrajectoryGoal & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus control_msgs::JointTrajectoryGoal is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(control_msgs::JointTrajectoryGoal));
        }
        else */ 
        {

            trajectory = inobj.trajectory;
        }
    }

    return *this;
}

bool control_msgs::JointTrajectoryGoal::operator==(const control_msgs::JointTrajectoryGoal & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (trajectory == inobj.trajectory);
    }

    return ret;
}

bool control_msgs::JointTrajectoryGoal::operator!=(const control_msgs::JointTrajectoryGoal & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool control_msgs::JointTrajectoryGoal::operator<(const control_msgs::JointTrajectoryGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (trajectory < inobj.trajectory) return true;
        if (inobj.trajectory <  trajectory) return false; ;
    }

    return ret;
}

bool control_msgs::JointTrajectoryGoal::operator>(const control_msgs::JointTrajectoryGoal & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (trajectory > inobj.trajectory) return true;
        if (inobj.trajectory >  trajectory) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const control_msgs::JointTrajectoryGoal & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"trajectory",t.trajectory,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string control_msgs::JointTrajectoryGoal::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const control_msgs::JointTrajectoryGoal & value)
{
    return s << value.toStr(false);
}

