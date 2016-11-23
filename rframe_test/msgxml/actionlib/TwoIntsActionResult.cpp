// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:44 -0500
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
#include "actionlib/TwoIntsActionResult.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int actionlib::TwoIntsActionResult::ID;
const unsigned int actionlib::TwoIntsActionResult::DATA_VERSION;
const std::string actionlib::TwoIntsActionResult::DATA_TYPE_NAME = "TwoIntsActionResult";
const std::string actionlib::TwoIntsActionResult::DATA_TYPE_FULL_NAME = "actionlib::TwoIntsActionResult";
const std::string actionlib::TwoIntsActionResult::VERSION_MD5 = "1904568e679bb4cd1b72b0b49384155a";
/* xml source for this class */
const std::string actionlib::TwoIntsActionResult::XML_SOURCE = "<class name=\"TwoIntsActionResult\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"3ba7dea8b8cddcae4528ade4ef74b6e7\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\\nHeader header\\nactionlib_msgs/GoalStatus status\\nTwoIntsResult result\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalStatus\\nGoalID goal_id\\nuint8 status\\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\\n                            #   and has since completed its execution (Terminal State)\\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\\n                            #    to some failure (Terminal State)\\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\\n                            #    because the goal was unattainable or invalid (Terminal State)\\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\\n                            #    and has not yet completed execution\\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\\n                            #    but the action server has not yet confirmed that the goal is canceled\\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\\n                            #    and was successfully cancelled (Terminal State)\\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\\n                            #    sent over the wire by an action server\\n\\n#Allow for the user to associate a string with GoalStatus for debugging\\nstring text\\n\\n\\n================================================================================\\nMSG: actionlib_msgs/GoalID\\n# The stamp should store the time at which this goal was requested.\\n# It is used by an action server when it tries to preempt all\\n# goals that were requested before a certain time\\ntime stamp\\n\\n# The id provides a way to associate feedback and\\n# result message with specific goal requests. The id\\n# specified must be unique.\\nstring id\\n\\n\\n================================================================================\\nMSG: actionlib/TwoIntsResult\\n# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\nint64 sum\\n\" comment=\"====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\" id=\"1134863294\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"status\" type=\"actionlib_msgs::GoalStatus\" sourceType=\"actionlib_msgs::GoalStatus\" comment=\"\"/>\
  <field name=\"result\" type=\"TwoIntsResult\" sourceType=\"TwoIntsResult\" comment=\"\"/>\
</class>";

actionlib::TwoIntsActionResult::TwoIntsActionResult() : header(), status(), result()
{  
};

actionlib::TwoIntsActionResult::TwoIntsActionResult(const actionlib::TwoIntsActionResult & inobj) : header(inobj.header), status(inobj.status), result(inobj.result)
{
};

actionlib::TwoIntsActionResult::~TwoIntsActionResult()
{
};

actionlib::TwoIntsActionResult * actionlib::TwoIntsActionResult::New()
{ 
    return new TwoIntsActionResult();
};

bool actionlib::TwoIntsActionResult::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && actionlib_msgs::GoalStatus::dataTypeFlat() && TwoIntsResult::dataTypeFlat();

};

actionlib::TwoIntsActionResult & actionlib::TwoIntsActionResult::operator=(const actionlib::TwoIntsActionResult & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus actionlib::TwoIntsActionResult is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(actionlib::TwoIntsActionResult));
        }
        else */ 
        {

            header = inobj.header;
            status = inobj.status;
            result = inobj.result;
        }
    }

    return *this;
}

bool actionlib::TwoIntsActionResult::operator==(const actionlib::TwoIntsActionResult & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (status == inobj.status)
             && (result == inobj.result);
    }

    return ret;
}

bool actionlib::TwoIntsActionResult::operator!=(const actionlib::TwoIntsActionResult & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool actionlib::TwoIntsActionResult::operator<(const actionlib::TwoIntsActionResult & inobj) const
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
        if (status < inobj.status) return true;
        if (inobj.status <  status) return false; 
        if (result < inobj.result) return true;
        if (inobj.result <  result) return false; ;
    }

    return ret;
}

bool actionlib::TwoIntsActionResult::operator>(const actionlib::TwoIntsActionResult & inobj) const
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
        if (status > inobj.status) return true;
        if (inobj.status >  status) return false; 
        if (result > inobj.result) return true;
        if (inobj.result >  result) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const actionlib::TwoIntsActionResult & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"status",t.status,indent,false);
    rframe::json_io::encode(sstr,"result",t.result,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string actionlib::TwoIntsActionResult::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const actionlib::TwoIntsActionResult & value)
{
    return s << value.toStr(false);
}

