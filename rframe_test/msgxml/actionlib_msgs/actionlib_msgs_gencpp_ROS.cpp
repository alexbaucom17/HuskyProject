// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:45 -0500
//  From Template/Script: data_templates/ROSTemplate.cpp.rb
 
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

#include "actionlib_msgs_gencpp_ROS.h"
#include <common/Log.h>
#include <common/DataTypeInfo.h>

using namespace std;
using namespace actionlib_msgs;

rframe::ROSMessageFactory * ROS_actionlib_msgs_gencppfactory = NULL;

extern "C"
{
    /** library access method */
    rframe::MessageFactoryBase * AllocateMessageFactory()
    {
        ROS_actionlib_msgs_gencppfactory = new actionlib_msgs_gencppROSMessageFactory();

        return ROS_actionlib_msgs_gencppfactory;
    };
}

rframe::ROSMessageFactory * actionlib_msgs::allocate_actionlib_msgs_gencpp()
{
    ROS_actionlib_msgs_gencppfactory = new actionlib_msgs_gencppROSMessageFactory();
    return ROS_actionlib_msgs_gencppfactory;
};

actionlib_msgs_gencppROSMessageFactory::actionlib_msgs_gencppROSMessageFactory()
{
    name("actionlib_msgs_gencpp");
    // use constructor to register data types
    actionlib_msgs::registerLibrary();
}

actionlib_msgs_gencppROSMessageFactory::~actionlib_msgs_gencppROSMessageFactory()
{
}

int actionlib_msgs_gencppROSMessageFactory::dataType(ros::SerializedMessage & msg)
{
    return msg.message_type;
}

void actionlib_msgs_gencppROSMessageFactory::dataTypes(vector<DataTypeInfo> & ids)
{
    DataTypeInfo info;

    ids.clear();

    info.id(GoalID::ID);
    info.name(GoalID::DATA_TYPE_FULL_NAME);
    info.hashKey(GoalID::DATA_VERSION);
    info.md5Key(GoalID::VERSION_MD5);
    info.xmlSource(GoalID::XML_SOURCE);
    info.flat(GoalID::dataTypeFlat());
    ids.push_back(info);

    info.id(GoalStatus::ID);
    info.name(GoalStatus::DATA_TYPE_FULL_NAME);
    info.hashKey(GoalStatus::DATA_VERSION);
    info.md5Key(GoalStatus::VERSION_MD5);
    info.xmlSource(GoalStatus::XML_SOURCE);
    info.flat(GoalStatus::dataTypeFlat());
    ids.push_back(info);

    info.id(GoalStatusArray::ID);
    info.name(GoalStatusArray::DATA_TYPE_FULL_NAME);
    info.hashKey(GoalStatusArray::DATA_VERSION);
    info.md5Key(GoalStatusArray::VERSION_MD5);
    info.xmlSource(GoalStatusArray::XML_SOURCE);
    info.flat(GoalStatusArray::dataTypeFlat());
    ids.push_back(info);

}

int actionlib_msgs_gencppROSMessageFactory::typeName(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case GoalID::ID:
        {
            str = "actionlib_msgs/GoalID";
            break;
        }
        case GoalStatus::ID:
        {
            str = "actionlib_msgs/GoalStatus";
            break;
        }
        case GoalStatusArray::ID:
        {
            str = "actionlib_msgs/GoalStatusArray";
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::desc(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case GoalID::ID:
        {
            str = "# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n";
            break;
        }
        case GoalStatus::ID:
        {
            str = "GoalID goal_id\nuint8 status\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n                            #   and has since completed its execution (Terminal State)\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n                            #    to some failure (Terminal State)\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n                            #    because the goal was unattainable or invalid (Terminal State)\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n                            #    and has not yet completed execution\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n                            #    but the action server has not yet confirmed that the goal is canceled\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n                            #    and was successfully cancelled (Terminal State)\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n                            #    sent over the wire by an action server\n\n#Allow for the user to associate a string with GoalStatus for debugging\nstring text\n\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n";
            break;
        }
        case GoalStatusArray::ID:
        {
            str = "# Stores the statuses for goals that are currently being tracked\n# by an action server\nHeader header\nGoalStatus[] status_list\n\n\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n\n================================================================================\nMSG: actionlib_msgs/GoalStatus\nGoalID goal_id\nuint8 status\nuint8 PENDING         = 0   # The goal has yet to be processed by the action server\nuint8 ACTIVE          = 1   # The goal is currently being processed by the action server\nuint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n                            #   and has since completed its execution (Terminal State)\nuint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\nuint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n                            #    to some failure (Terminal State)\nuint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n                            #    because the goal was unattainable or invalid (Terminal State)\nuint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n                            #    and has not yet completed execution\nuint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n                            #    but the action server has not yet confirmed that the goal is canceled\nuint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n                            #    and was successfully cancelled (Terminal State)\nuint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n                            #    sent over the wire by an action server\n\n#Allow for the user to associate a string with GoalStatus for debugging\nstring text\n\n\n================================================================================\nMSG: actionlib_msgs/GoalID\n# The stamp should store the time at which this goal was requested.\n# It is used by an action server when it tries to preempt all\n# goals that were requested before a certain time\ntime stamp\n\n# The id provides a way to associate feedback and\n# result message with specific goal requests. The id\n# specified must be unique.\nstring id\n\n";
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::md5String(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case GoalID::ID:
        {
            str = "302881f31927c1df708a2dbab0e80ee8";
            break;
        }
        case GoalStatus::ID:
        {
            str = "d388f9b87b3c471f784434d671988d4a";
            break;
        }
        case GoalStatusArray::ID:
        {
            str = "8b2b82f13216d0a8ea88bd3af735e619";
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::md5(unsigned long long & highOrder, unsigned long long & lowOrder, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case GoalID::ID:
        {   
		    highOrder = 0x302881f31927c1dfULL;
            lowOrder = 0x708a2dbab0e80ee8ULL;
            break;
        }
        case GoalStatus::ID:
        {   
		    highOrder = 0xd388f9b87b3c471fULL;
            lowOrder = 0x784434d671988d4aULL;
            break;
        }
        case GoalStatusArray::ID:
        {   
		    highOrder = 0x8b2b82f13216d0a8ULL;
            lowOrder = 0xea88bd3af735e619ULL;
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<ros::SerializedMessage> & msg)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    { 
        case GoalID::ID:
        case GoalStatus::ID:
        case GoalStatusArray::ID:
        {
            break;
        } 
        default:
	    {
            retval = rframe::Error::PARAM_RANGE;
            break;
	    }
    }

    if (retval == rframe::Error::SUCCESS)
	{
        std::shared_ptr<ros::SerializedMessage> newmsg(new ros::SerializedMessage);

        if (newmsg.get() == NULL)
	    {
            retval = rframe::Error::MEMORY_ALLOC;
        }
        else
	    {
            newmsg->message_type = id;
            msg.swap(newmsg);
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    { 
        case GoalID::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<GoalID>(),std::bind(&actionlib_msgs_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

            if (tempMsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(tempMsg);
            }
            break;
        } 
        case GoalStatus::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<GoalStatus>(),std::bind(&actionlib_msgs_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

            if (tempMsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(tempMsg);
            }
            break;
        } 
        case GoalStatusArray::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<GoalStatusArray>(),std::bind(&actionlib_msgs_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

            if (tempMsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(tempMsg);
            }
            break;
        } 
        default:
        {
            retval = rframe::Error::PARAM_RANGE;
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::deallocateMessage(MessageBase * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
	{
        delete msg;
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::deallocateTransport(ros::SerializedMessage * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
    {
        delete msg;
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::toTransport(MessageBase & src, ros::SerializedMessage & dst)
{
    int retval = rframe::Error::SUCCESS;

    if (dst.message_type != src.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (dst.message_type)
        { 
            case GoalID::ID:
            {
                Message<GoalID > & tempSrc = static_cast<Message<GoalID>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: actionlib_msgs_gencpp::GoalID buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
				}

                // deprecated, now uses pre allocated buffers
                dst.num_bytes = bufSize+sizeof(uint32_t);

                // create stream to hold serialized data + its length
                ros::serialization::OStream stream(dst.buf.get(),dst.num_bytes);
                // encode buffer length
				ros::serialization::serialize(stream,(uint32_t)bufSize);
                // encode payload
			    dst.message_start = stream.getData();
                ros::serialization::serialize(stream,tempSrc.payload());
                break;
            } 
            case GoalStatus::ID:
            {
                Message<GoalStatus > & tempSrc = static_cast<Message<GoalStatus>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: actionlib_msgs_gencpp::GoalStatus buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
				}

                // deprecated, now uses pre allocated buffers
                dst.num_bytes = bufSize+sizeof(uint32_t);

                // create stream to hold serialized data + its length
                ros::serialization::OStream stream(dst.buf.get(),dst.num_bytes);
                // encode buffer length
				ros::serialization::serialize(stream,(uint32_t)bufSize);
                // encode payload
			    dst.message_start = stream.getData();
                ros::serialization::serialize(stream,tempSrc.payload());
                break;
            } 
            case GoalStatusArray::ID:
            {
                Message<GoalStatusArray > & tempSrc = static_cast<Message<GoalStatusArray>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: actionlib_msgs_gencpp::GoalStatusArray buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
				}

                // deprecated, now uses pre allocated buffers
                dst.num_bytes = bufSize+sizeof(uint32_t);

                // create stream to hold serialized data + its length
                ros::serialization::OStream stream(dst.buf.get(),dst.num_bytes);
                // encode buffer length
				ros::serialization::serialize(stream,(uint32_t)bufSize);
                // encode payload
			    dst.message_start = stream.getData();
                ros::serialization::serialize(stream,tempSrc.payload());
                break;
            } 
            default:
            {
                retval = rframe::Error::PARAM;
                break;
            }
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::fromTransport(ros::SerializedMessage & src, MessageBase & dst)
{
    int retval = rframe::Error::SUCCESS;

    if ((unsigned int)src.message_type != dst.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (src.message_type)
        { 
            case GoalID::ID:
            {
                Message<GoalID > & tempDst = static_cast<Message<GoalID>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            case GoalStatus::ID:
            {
                Message<GoalStatus > & tempDst = static_cast<Message<GoalStatus>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            case GoalStatusArray::ID:
            {
                Message<GoalStatusArray > & tempDst = static_cast<Message<GoalStatusArray>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                rframe::Time t(tempDst.payload().header.stamp.sec,tempDst.payload().header.stamp.nsec);
                tempDst.timestamp(t.toTimestamp());

                break;
            } 
            default:
            {
                retval = rframe::Error::PARAM;
            }
        }
    }

    return retval;
}

int actionlib_msgs_gencppROSMessageFactory::updateHeader(rframe::MessageBase &msg, unsigned int seqNo)
{
    int retval = rframe::Error::SUCCESS;

    switch (msg.id())
    {   
        // GoalID does not have a Header as its first member 
        // GoalStatus does not have a Header as its first member 
        case GoalStatusArray::ID:
        {
            Message<GoalStatusArray > & tempMsg = static_cast<Message<GoalStatusArray>&>(msg);
            rframe::Time t(rframe::Time::now());
            tempMsg.payload().header.seq = seqNo;
            tempMsg.payload().header.stamp.sec = t.sec();
            tempMsg.payload().header.stamp.nsec = t.nsec();
            break;
        } 
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}
