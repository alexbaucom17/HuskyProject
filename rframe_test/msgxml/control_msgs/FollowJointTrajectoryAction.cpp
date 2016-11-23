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
#include "control_msgs/FollowJointTrajectoryAction.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int control_msgs::FollowJointTrajectoryAction::ID;
const unsigned int control_msgs::FollowJointTrajectoryAction::DATA_VERSION;
const std::string control_msgs::FollowJointTrajectoryAction::DATA_TYPE_NAME = "FollowJointTrajectoryAction";
const std::string control_msgs::FollowJointTrajectoryAction::DATA_TYPE_FULL_NAME = "control_msgs::FollowJointTrajectoryAction";
const std::string control_msgs::FollowJointTrajectoryAction::VERSION_MD5 = "341659b365f60f9cfb220f0e8e773d46";
/* xml source for this class */
const std::string control_msgs::FollowJointTrajectoryAction::XML_SOURCE = "<class name=\"FollowJointTrajectoryAction\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"bc4f9b743838566551c0390c65f1a248\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nFollowJointTrajectoryActionGoal action_goal\\nFollowJointTrajectoryActionResult action_result\\nFollowJointTrajectoryActionFeedback action_feedback\\n\\n================================================================================\\nMSG: control_msgs/FollowJointTrajectoryActionGoal\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalID goal_id\\nFollowJointTrajectoryGoal goal\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: control_msgs/FollowJointTrajectoryGoal\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n# The joint trajectory to follow\\ntrajectory_msgs/JointTrajectory trajectory\\n\\n# Tolerances for the trajectory.  If the measured joint values fall\\n# outside the tolerances the trajectory goal is aborted.  Any\\n# tolerances that are not specified (by being omitted or set to 0) are\\n# set to the defaults for the action server (often taken from the\\n# parameter server).\\n\\n# Tolerances applied to the joints as the trajectory is executed.  If\\n# violated, the goal aborts with error_code set to\\n# PATH_TOLERANCE_VIOLATED.\\nJointTolerance[] path_tolerance\\n\\n# To report success, the joints must be within goal_tolerance of the\\n# final trajectory value.  The goal must be achieved by time the\\n# trajectory ends plus goal_time_tolerance.  (goal_time_tolerance\\n# allows some leeway in time, so that the trajectory goal can still\\n# succeed even if the joints reach the goal some time after the\\n# precise end time of the trajectory).\\n#\\n# If the joints are not within goal_tolerance after \\&quot;trajectory finish\\n# time\\&quot; + goal_time_tolerance, the goal aborts with error_code set to\\n# GOAL_TOLERANCE_VIOLATED\\nJointTolerance[] goal_tolerance\\nduration goal_time_tolerance\\n\\n\\n================================================================================\\nMSG: trajectory_msgs/JointTrajectory\\nHeader header\\nstring[] joint_names\\nJointTrajectoryPoint[] points\\n================================================================================\\nMSG: trajectory_msgs/JointTrajectoryPoint\\n# Each trajectory point specifies either positions[, velocities[, accelerations]]\\n# or positions[, effort] for the trajectory to be executed.\\n# All specified values are in the same order as the joint names in JointTrajectory.msg\\n\\nfloat64[] positions\\nfloat64[] velocities\\nfloat64[] accelerations\\nfloat64[] effort\\nduration time_from_start\\n\\n================================================================================\\nMSG: control_msgs/JointTolerance\\n# The tolerances specify the amount the position, velocity, and\\n# accelerations can vary from the setpoints.  For example, in the case\\n# of trajectory control, when the actual position varies beyond\\n# (desired position + position tolerance), the trajectory goal may\\n# abort.\\n# \\n# There are two special values for tolerances:\\n#  * 0 - The tolerance is unspecified and will remain at whatever the default is\\n#  * -1 - The tolerance is \\&quot;erased\\&quot;.  If there was a default, the joint will be\\n#         allowed to move without restriction.\\n\\nstring name\\nfloat64 position  # in radians or meters (for a revolute or prismatic joint, respectively)\\nfloat64 velocity  # in rad/sec or m/sec\\nfloat64 acceleration  # in rad/sec^2 or m/sec^2\\n\\n================================================================================\\nMSG: control_msgs/FollowJointTrajectoryActionResult\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalStatus status\\nFollowJointTrajectoryResult result\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalStatus\\nGoalID goal_id\\nuint8 status\\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\\n                            #   and has since completed its execution (Terminal State)\\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\\n                            #    to some failure (Terminal State)\\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\\n                            #    because the goal was unattainable or invalid (Terminal State)\\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\\n                            #    and has not yet completed execution\\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\\n                            #    but the action server has not yet confirmed that the goal is canceled\\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\\n                            #    and was successfully cancelled (Terminal State)\\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\\n                            #    sent over the wire by an action server\\n\\n#Allow for the user to associate a string with GoalStatus for debugging\\nstring text\\n\\n\\n================================================================================\\nMSG: control_msgs/FollowJointTrajectoryResult\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\nint32 error_code\\nint32 SUCCESSFUL = 0\\nint32 INVALID_GOAL = -1\\nint32 INVALID_JOINTS = -2\\nint32 OLD_HEADER_TIMESTAMP = -3\\nint32 PATH_TOLERANCE_VIOLATED = -4\\nint32 GOAL_TOLERANCE_VIOLATED = -5\\n\\n# Human readable description of the error code. Contains complementary\\n# information that is especially useful when execution fails, for instance:\\n# - INVALID_GOAL: The reason for the invalid goal (e.g., the requested\\n#   trajectory is in the past).\\n# - INVALID_JOINTS: The mismatch between the expected controller joints\\n#   and those provided in the goal.\\n# - PATH_TOLERANCE_VIOLATED and GOAL_TOLERANCE_VIOLATED: Which joint\\n#   violated which tolerance, and by how much.\\nstring error_string\\n\\n\\n================================================================================\\nMSG: control_msgs/FollowJointTrajectoryActionFeedback\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalStatus status\\nFollowJointTrajectoryFeedback feedback\\n\\n================================================================================\\nMSG: control_msgs/FollowJointTrajectoryFeedback\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\nHeader header\\nstring[] joint_names\\ntrajectory_msgs/JointTrajectoryPoint desired\\ntrajectory_msgs/JointTrajectoryPoint actual\\ntrajectory_msgs/JointTrajectoryPoint error\\n\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\" id=\"1246705429\">\
  <field name=\"action_goal\" type=\"FollowJointTrajectoryActionGoal\" sourceType=\"FollowJointTrajectoryActionGoal\" comment=\"\"/>\
  <field name=\"action_result\" type=\"FollowJointTrajectoryActionResult\" sourceType=\"FollowJointTrajectoryActionResult\" comment=\"\"/>\
  <field name=\"action_feedback\" type=\"FollowJointTrajectoryActionFeedback\" sourceType=\"FollowJointTrajectoryActionFeedback\" comment=\"\"/>\
</class>";

control_msgs::FollowJointTrajectoryAction::FollowJointTrajectoryAction() : action_goal(), action_result(), action_feedback()
{  
};

control_msgs::FollowJointTrajectoryAction::FollowJointTrajectoryAction(const control_msgs::FollowJointTrajectoryAction & inobj) : action_goal(inobj.action_goal), action_result(inobj.action_result), action_feedback(inobj.action_feedback)
{
};

control_msgs::FollowJointTrajectoryAction::~FollowJointTrajectoryAction()
{
};

control_msgs::FollowJointTrajectoryAction * control_msgs::FollowJointTrajectoryAction::New()
{ 
    return new FollowJointTrajectoryAction();
};

bool control_msgs::FollowJointTrajectoryAction::dataTypeFlat() 
{  
    return FollowJointTrajectoryActionGoal::dataTypeFlat() && FollowJointTrajectoryActionResult::dataTypeFlat() && FollowJointTrajectoryActionFeedback::dataTypeFlat();

};

control_msgs::FollowJointTrajectoryAction & control_msgs::FollowJointTrajectoryAction::operator=(const control_msgs::FollowJointTrajectoryAction & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus control_msgs::FollowJointTrajectoryAction is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(control_msgs::FollowJointTrajectoryAction));
        }
        else */ 
        {

            action_goal = inobj.action_goal;
            action_result = inobj.action_result;
            action_feedback = inobj.action_feedback;
        }
    }

    return *this;
}

bool control_msgs::FollowJointTrajectoryAction::operator==(const control_msgs::FollowJointTrajectoryAction & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (action_goal == inobj.action_goal)
             && (action_result == inobj.action_result)
             && (action_feedback == inobj.action_feedback);
    }

    return ret;
}

bool control_msgs::FollowJointTrajectoryAction::operator!=(const control_msgs::FollowJointTrajectoryAction & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool control_msgs::FollowJointTrajectoryAction::operator<(const control_msgs::FollowJointTrajectoryAction & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (action_goal < inobj.action_goal) return true;
        if (inobj.action_goal <  action_goal) return false; 
        if (action_result < inobj.action_result) return true;
        if (inobj.action_result <  action_result) return false; 
        if (action_feedback < inobj.action_feedback) return true;
        if (inobj.action_feedback <  action_feedback) return false; ;
    }

    return ret;
}

bool control_msgs::FollowJointTrajectoryAction::operator>(const control_msgs::FollowJointTrajectoryAction & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (action_goal > inobj.action_goal) return true;
        if (inobj.action_goal >  action_goal) return false; 
        if (action_result > inobj.action_result) return true;
        if (inobj.action_result >  action_result) return false; 
        if (action_feedback > inobj.action_feedback) return true;
        if (inobj.action_feedback >  action_feedback) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const control_msgs::FollowJointTrajectoryAction & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"action_goal",t.action_goal,indent,false);
    rframe::json_io::encode(sstr,"action_result",t.action_result,indent,false);
    rframe::json_io::encode(sstr,"action_feedback",t.action_feedback,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string control_msgs::FollowJointTrajectoryAction::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const control_msgs::FollowJointTrajectoryAction & value)
{
    return s << value.toStr(false);
}

