// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:45 -0500
//  From Template/Script: data_templates/ROSTemplate.h.rb
 
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

#ifndef _CODEGEN_BOND_GENCPP_ROS_H_
#define _CODEGEN_BOND_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "bond_gencpp_Library.h"

#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace bond { 

    /** definition of message factory for bond_gencpp */
    class bond_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        bond_gencppROSMessageFactory();
        /** destructor */
        virtual ~bond_gencppROSMessageFactory();

        /** see  rframe::MessageFactoryInterface */
        virtual void dataTypes(std::vector<DataTypeInfo> & ids);
        /** see  rframe::MessageFactoryInterface */
        virtual int dataType(ros::SerializedMessage & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<ros::SerializedMessage> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateTransport(ros::SerializedMessage * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateMessage(MessageBase * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int toTransport( MessageBase & src, ros::SerializedMessage & dst);
        /** see  rframe::MessageFactoryInterface */
        virtual int fromTransport( ros::SerializedMessage & src, MessageBase & dst);

		/** see rframe::ROSMessageFactory */
        virtual int typeName(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int desc(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int md5String(std::string & str, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
        virtual int md5(unsigned long long & highOrder, unsigned long long & lowOrder, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
		int updateHeader(rframe::MessageBase &msg, unsigned int seqNo);
    };

    /** factory allocation function for use when not dynamically loading the factory library  */
    ROSMessageFactory * allocate_bond_gencpp();

}; // end namespace bond

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<bond::Constants>
      {
          template <typename Stream> inline static void write(Stream & stream, const bond::Constants & t)
          { 
          };

          template <typename Stream> inline static void read(Stream & stream, bond::Constants & t)
          { 
          };

          inline static uint32_t serializedLength(const bond::Constants & t)
          { 
              uint32_t size = 0;

              return size;
          };
      }; // end struct Serializer<bond::Constants>

      template <> struct Serializer<bond::Status>
      {
          template <typename Stream> inline static void write(Stream & stream, const bond::Status & t)
          { 
              stream.next(t.header); 
              stream.next(t.id); 
              stream.next(t.instance_id); 
              stream.next(t.active); 
              stream.next(t.heartbeat_timeout); 
              stream.next(t.heartbeat_period); 
          };

          template <typename Stream> inline static void read(Stream & stream, bond::Status & t)
          { 
              stream.next(t.header); 
              stream.next(t.id); 
              stream.next(t.instance_id); 
              stream.next(t.active); 
              stream.next(t.heartbeat_timeout); 
              stream.next(t.heartbeat_period); 
          };

          inline static uint32_t serializedLength(const bond::Status & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.header); 
              size += serializationLength(t.id); 
              size += serializationLength(t.instance_id); 
              size += serializationLength(t.active); 
              size += serializationLength(t.heartbeat_timeout); 
              size += serializationLength(t.heartbeat_period); 
              return size;
          };
      }; // end struct Serializer<bond::Status>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<bond::Constants>
      {

          static const char * value() 
          { 
              return "6fc594dc1d7bd7919077042712f8c8b0"; 
          };

          static const uint64_t static_value1 = 0x6fc594dc1d7bd791ULL;
          static const uint64_t static_value2 = 0x9077042712f8c8b0ULL;
      }; // end struct MD5Sum<bond::Constants>

      template <> struct DataType<bond::Constants>
      {
          static const char * value() { return "bond/Constants";};
      }; // end DataType

      template <> struct Definition<bond::Constants>
      {
          static const char * value()
          { 
              return "float32 DEAD_PUBLISH_PERIOD = 0.05\nfloat32 DEFAULT_CONNECT_TIMEOUT = 10.0\nfloat32 DEFAULT_HEARTBEAT_TIMEOUT = 4.0\nfloat32 DEFAULT_DISCONNECT_TIMEOUT = 2.0\nfloat32 DEFAULT_HEARTBEAT_PERIOD = 1.0\n\n";
          };
      };

      template <> struct MD5Sum<bond::Status>
      {

          static const char * value() 
          { 
              return "eacc84bf5d65b6777d4c50f463dfb9c8"; 
          };

          static const uint64_t static_value1 = 0xeacc84bf5d65b677ULL;
          static const uint64_t static_value2 = 0x7d4c50f463dfb9c8ULL;
      }; // end struct MD5Sum<bond::Status>

      template <> struct DataType<bond::Status>
      {
          static const char * value() { return "bond/Status";};
      }; // end DataType

      template <> struct Definition<bond::Status>
      {
          static const char * value()
          { 
              return "Header header\nstring id  # ID of the bond\nstring instance_id  # Unique ID for an individual in a bond\nbool active\n\n# Including the timeouts for the bond makes it easier to debug mis-matches\n# between the two sides.\nfloat32 heartbeat_timeout\nfloat32 heartbeat_period\n================================================================================\nMSG: std_msgs/Header\n# Standard metadata for higher-level stamped data types.\n# This is generally used to communicate timestamped data \n# in a particular coordinate frame.\n# \n# sequence ID: consecutively increasing ID \nuint32 seq\n#Two-integer timestamp that is expressed as:\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n# time-handling sugar is provided by the client library\ntime stamp\n#Frame this data is associated with\n# 0: no frame\n# 1: global frame\nstring frame_id\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_BOND_GENCPP_ROS_H_

