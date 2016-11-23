// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:54 -0500
//  From Template/Script: data_templates/DataHeaderTemplate.h
 
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

#ifndef _CODEGEN_SENSOR_MSGS_RELATIVEHUMIDITY_H_
#define _CODEGEN_SENSOR_MSGS_RELATIVEHUMIDITY_H_

//#include <ostream> handled by iosfwd included through <memory> in Common.h
#include <common/Common.h>
#include <common/CodeGenTraits.h>

#include <std_msgs/Header.h>

// predeclaration
namespace sensor_msgs{ 
    class RelativeHumidity; 
}; 

PREDECLARE_BSON(sensor_msgs::RelativeHumidity); // see Common.h, macro used for a cleaner header
PREDECLARE_JSON(sensor_msgs::RelativeHumidity); // see Common.h, macro used for a cleaner header

namespace sensor_msgs
{  

    // definition of nml serialization function for this class, necessary for friend'ing below.
    void nmlupdate(CMS * cms, RelativeHumidity & inobj);   

    /** 
        \ingroup CodeGen
        Single reading from a relative humidity sensor.  Defines the ratio of partial  pressure of water vapor to the saturated vapor pressure at a temperature.
    */
    class RelativeHumidity
    {
    public: 

        /** constructor */
        RelativeHumidity();
        /** copy constructor */
        RelativeHumidity(const RelativeHumidity & inobj);
        /** destructor */
        ~RelativeHumidity();

        /** allocator, convenience function for bind */
        static RelativeHumidity * New();

        // PUBLIC_POST_PROCESS_INSERT_TAG
        /** definitions */

        /* data member definition */ 
        std_msgs::Header  header; /**< timestamp of the measurement  frame_id is the location of the humidity sensor */
        double  relative_humidity; /**< Expression of the relative humidity  from 0.0 to 1.0.  0.0 is no partial pressure of water vapor  1.0 represents partial pressure of saturation */
        double  variance; /**< 0 is interpreted as variance unknown */

        /** DAQ enumeration not sure how to use it yet. here for proof of concept. */
        typedef enum
        { 
            DAQ_0_HEADER,
            DAQ_1_RELATIVE_HUMIDITY,
            DAQ_2_VARIANCE,
            DAQ_MAX_
        } DAQEnum;

        /* definition of member accessor methods */

        // PROTECTED_POST_PROCESS_INSERT_TAG

        /* data type definitions and methods */

        /** static data type id. capitlized to remove name conflicts with generate class members */
        static const unsigned int ID = 237354234U;
        /** data class version, created from a hash function. 
            global version of this data type is defined by the pair <id,version>
            as id will be unique between classes, and the hash should be unique within this class */
        static const unsigned int DATA_VERSION = 1246157971U;
        /** if true, this message may be delivered internally */
        static const bool INTRAPROCESS = true;
        /** xml source for this class */
        static const std::string XML_SOURCE;
        /** name of this data type. */
        //        static const char * dataTypeName() { return "RelativeHumidity"; };
        /** name of this data type */
        static const std::string DATA_TYPE_NAME;
        /** full name of data type, including namespace */
        static const std::string DATA_TYPE_FULL_NAME;
        /** does this class have bson support? */
        static const bool BSON_ENABLED = true;
        /** is this a "flat" data structure, meaning it can be memcpy'd safely 
            for now it is assumed that classes with virtual members are not flat
        */
        static bool dataTypeFlat();

        /** MD5sum of a string representation of the class, included as it is more robust than the hash above */
        static const std::string versionMD5() { return "7604f14e995bf3a9aca5311ee5001edc"; };
        /** md5 version of this data type */
        static const std::string VERSION_MD5;
        /** top 8 bytes of md5 in binary */
        static const unsigned long long VERSION_MD5_TOP = 0x7604f14e995bf3a9ULL;
        /** lower 8 bytes of md5 in binary */
        static const unsigned long long VERSION_MD5_BOTTOM = 0xaca5311ee5001edcULL;

        /** register this data type with the global type registry */
        //        static int registerType();

        /** \return a copy of this instance.  */
        RelativeHumidity * copy() { return new RelativeHumidity(*this); };

        /** assignment operator(s) */
        RelativeHumidity & operator=(const RelativeHumidity & inobj);
        /** equality operator */
        bool operator==(const RelativeHumidity & inobj) const;
        /** inequality operator */
        bool operator!=(const RelativeHumidity & inobj) const;
        /** less than operator */
        bool operator<(const RelativeHumidity & inobj) const;
        /** greater than operator */
        bool operator>(const RelativeHumidity & inobj) const;

        /** convert to string representation */
        std::string toXML() const;

        /** convert from string representation. class constructor is not provided due to potential conflicts with string derived classes */
        bool fromXML(const std::string &str);

        /** convert this class to a JSON string representation, provides std::bind'able string creation */
        std::string toStr(bool pretty = true) const;

        /** generic serialization encoder entrypoint
            currently instantiated with boost .cpp file
            \param type type of serialization used, values defined in Common.h
            \param buffer object to be casted into proper container based on value of type.
            \return rframe::Error depending on serialization type used */
        int encode(const rframe::SerializationTypes type, void * buffer) const;

        /** generic serialization decoder entrypoint
            currently instantiated with boost .cpp file by the GENERIC_SERIALIZATION_ENTRYPOINTS macro
            \param type type of serialization used, values defined in Common.h
            \param buffer object to be casted into proper container based on value of type.
            \return rframe::Error depending on serialization type used */
        int decode(const rframe::SerializationTypes type, void * buffer);

    private:

        /* definition of friend access for serialization helpers */
        friend void nmlupdate(CMS * cms, RelativeHumidity & inobj);

        DECLARE_BSON_FRIENDS(); // defined in Common.h, declares friend access to bson serializers

        template <class T> friend struct ros::serialization::Serializer;

        friend class boost::serialization::access;       

        /** boost serialization method. See "http://www.boost.org/libs/serialization/doc/tutorial.html#derivedclasses" for reason why serialize() should be private. */
		template<class Archive> void serialize(Archive &ar, const unsigned int version);

        // PRIVATE_POST_PROCESS_INSERT_TAG

    };

}; // end namespace sensor_msgs

namespace rframe
{
    template <> class CodeGenTraits<sensor_msgs::RelativeHumidity>
    {
    public:
        static bool flat() {return sensor_msgs::RelativeHumidity::dataTypeFlat(); };
        static std::string sourceXML() {return sensor_msgs::RelativeHumidity::XML_SOURCE; };
        //        static bool codegen() {return true;};
        static constexpr bool codegen = true;
    };
};

/** ostream operator */
//std::ostream& operator<<(std::ostream &s, const sensor_msgs::RelativeHumidity & value);
std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::RelativeHumidity & value);

#endif  //  _SENSOR_MSGS_RELATIVEHUMIDITY_H_
