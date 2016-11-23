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
#include "sensor_msgs/NavSatFix.h"
#include <string.h> // for memset 
#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned char sensor_msgs::NavSatFix::COVARIANCE_TYPE_UNKNOWN = 0;
const unsigned char sensor_msgs::NavSatFix::COVARIANCE_TYPE_APPROXIMATED = 1;
const unsigned char sensor_msgs::NavSatFix::COVARIANCE_TYPE_DIAGONAL_KNOWN = 2;
const unsigned char sensor_msgs::NavSatFix::COVARIANCE_TYPE_KNOWN = 3;

const unsigned int sensor_msgs::NavSatFix::ID;
const unsigned int sensor_msgs::NavSatFix::DATA_VERSION;
const std::string sensor_msgs::NavSatFix::DATA_TYPE_NAME = "NavSatFix";
const std::string sensor_msgs::NavSatFix::DATA_TYPE_FULL_NAME = "sensor_msgs::NavSatFix";
const std::string sensor_msgs::NavSatFix::VERSION_MD5 = "7cbce13b38aae566425fc17edce01428";
/* xml source for this class */
const std::string sensor_msgs::NavSatFix::XML_SOURCE = "<class name=\"NavSatFix\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"2d3a8cd499b9b4a0249fb98fd05cfa48\" rosDesc=\"# Navigation Satellite fix for any Global Navigation Satellite System\\n#\\n# Specified using the WGS 84 reference ellipsoid\\n\\n# header.stamp specifies the ROS time for this measurement (the\\n#        corresponding satellite time may be reported using the\\n#        sensor_msgs/TimeReference message).\\n#\\n# header.frame_id is the frame of reference reported by the satellite\\n#        receiver, usually the location of the antenna.  This is a\\n#        Euclidean frame relative to the vehicle, not a reference\\n#        ellipsoid.\\nHeader header\\n\\n# satellite fix status information\\nNavSatStatus status\\n\\n# Latitude [degrees]. Positive is north of equator; negative is south.\\nfloat64 latitude\\n\\n# Longitude [degrees]. Positive is east of prime meridian; negative is west.\\nfloat64 longitude\\n\\n# Altitude [m]. Positive is above the WGS 84 ellipsoid\\n# (quiet NaN if no altitude is available).\\nfloat64 altitude\\n\\n# Position covariance [m^2] defined relative to a tangential plane\\n# through the reported position. The components are East, North, and\\n# Up (ENU), in row-major order.\\n#\\n# Beware: this coordinate system exhibits singularities at the poles.\\n\\nfloat64[9] position_covariance\\n\\n# If the covariance of the fix is known, fill it in completely. If the\\n# GPS receiver provides the variance of each measurement, put them\\n# along the diagonal. If only Dilution of Precision is available,\\n# estimate an approximate covariance from that.\\n\\nuint8 COVARIANCE_TYPE_UNKNOWN = 0\\nuint8 COVARIANCE_TYPE_APPROXIMATED = 1\\nuint8 COVARIANCE_TYPE_DIAGONAL_KNOWN = 2\\nuint8 COVARIANCE_TYPE_KNOWN = 3\\n\\nuint8 position_covariance_type\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: sensor_msgs/NavSatStatus\\n# Navigation Satellite fix status for any Global Navigation Satellite System\\n\\n# Whether to output an augmented fix is determined by both the fix\\n# type and the last time differential corrections were received.  A\\n# fix is valid when status &gt;= STATUS_FIX.\\n\\nint8 STATUS_NO_FIX =  -1        # unable to fix position\\nint8 STATUS_FIX =      0        # unaugmented fix\\nint8 STATUS_SBAS_FIX = 1        # with satellite-based augmentation\\nint8 STATUS_GBAS_FIX = 2        # with ground-based augmentation\\n\\nint8 status\\n\\n# Bits defining which Global Navigation Satellite System signals were\\n# used by the receiver.\\n\\nuint16 SERVICE_GPS =     1\\nuint16 SERVICE_GLONASS = 2\\nuint16 SERVICE_COMPASS = 4      # includes BeiDou.\\nuint16 SERVICE_GALILEO = 8\\n\\nuint16 service\\n\" comment=\"Navigation Satellite fix for any Global Navigation Satellite System   Specified using the WGS 84 reference ellipsoid\" id=\"237354227\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"satellite fix status information\"/>\
  <field name=\"status\" type=\"NavSatStatus\" sourceType=\"NavSatStatus\" comment=\"Latitude [degrees]. Positive is north of equator; negative is south.\"/>\
  <field name=\"latitude\" type=\"double\" sourceType=\"float64\" comment=\"Longitude [degrees]. Positive is east of prime meridian; negative is west.\"/>\
  <field name=\"longitude\" type=\"double\" sourceType=\"float64\" comment=\"Altitude [m]. Positive is above the WGS 84 ellipsoid  (quiet NaN if no altitude is available).\"/>\
  <field name=\"altitude\" type=\"double\" sourceType=\"float64\" comment=\"Position covariance [m^2] defined relative to a tangential plane  through the reported position. The components are East, North, and  Up (ENU), in row-major order.   Beware: this coordinate system exhibits singularities at the poles.\"/>\
  <field name=\"position_covariance\" type=\"double\" size=\"9\" sourceType=\"float64\" comment=\"If the covariance of the fix is known, fill it in completely. If the  GPS receiver provides the variance of each measurement, put them  along the diagonal. If only Dilution of Precision is available,  estimate an approximate covariance from that.\"/>\
  <constant init=\"0\" name=\"COVARIANCE_TYPE_UNKNOWN\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"1\" name=\"COVARIANCE_TYPE_APPROXIMATED\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"2\" name=\"COVARIANCE_TYPE_DIAGONAL_KNOWN\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <constant init=\"3\" name=\"COVARIANCE_TYPE_KNOWN\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
  <field name=\"position_covariance_type\" type=\"unsigned char\" sourceType=\"uint8\" comment=\"\"/>\
</class>";

sensor_msgs::NavSatFix::NavSatFix() : header(), status(), latitude(0), longitude(0), altitude(0), position_covariance_type(0)
{  
    memset(position_covariance.data(),0,sizeof(double)*9); 
};

sensor_msgs::NavSatFix::NavSatFix(const sensor_msgs::NavSatFix & inobj) : header(inobj.header), status(inobj.status), latitude(inobj.latitude), longitude(inobj.longitude), altitude(inobj.altitude), position_covariance_type(inobj.position_covariance_type)
{
    position_covariance = inobj.position_covariance;
};

sensor_msgs::NavSatFix::~NavSatFix()
{
};

sensor_msgs::NavSatFix * sensor_msgs::NavSatFix::New()
{ 
    return new NavSatFix();
};

bool sensor_msgs::NavSatFix::dataTypeFlat() 
{  
    return std_msgs::Header::dataTypeFlat() && NavSatStatus::dataTypeFlat();

};

sensor_msgs::NavSatFix & sensor_msgs::NavSatFix::operator=(const sensor_msgs::NavSatFix & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus sensor_msgs::NavSatFix is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(sensor_msgs::NavSatFix));
        }
        else */ 
        {

            header = inobj.header;
            status = inobj.status;
            latitude = inobj.latitude;
            longitude = inobj.longitude;
            altitude = inobj.altitude;
            position_covariance = inobj.position_covariance;
            position_covariance_type = inobj.position_covariance_type;
        }
    }

    return *this;
}

bool sensor_msgs::NavSatFix::operator==(const sensor_msgs::NavSatFix & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (status == inobj.status)
             && (latitude == inobj.latitude)
             && (longitude == inobj.longitude)
             && (altitude == inobj.altitude)
             && (position_covariance == inobj.position_covariance)
             && (position_covariance_type == inobj.position_covariance_type);
    }

    return ret;
}

bool sensor_msgs::NavSatFix::operator!=(const sensor_msgs::NavSatFix & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool sensor_msgs::NavSatFix::operator<(const sensor_msgs::NavSatFix & inobj) const
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
        if (latitude < inobj.latitude) return true;
        if (inobj.latitude <  latitude) return false; 
        if (longitude < inobj.longitude) return true;
        if (inobj.longitude <  longitude) return false; 
        if (altitude < inobj.altitude) return true;
        if (inobj.altitude <  altitude) return false; 
        if (position_covariance < inobj.position_covariance) return true;
        if (inobj.position_covariance <  position_covariance) return false; 
        if (position_covariance_type < inobj.position_covariance_type) return true;
        if (inobj.position_covariance_type <  position_covariance_type) return false; ;
    }

    return ret;
}

bool sensor_msgs::NavSatFix::operator>(const sensor_msgs::NavSatFix & inobj) const
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
        if (latitude > inobj.latitude) return true;
        if (inobj.latitude >  latitude) return false; 
        if (longitude > inobj.longitude) return true;
        if (inobj.longitude >  longitude) return false; 
        if (altitude > inobj.altitude) return true;
        if (inobj.altitude >  altitude) return false; 
        if (position_covariance > inobj.position_covariance) return true;
        if (inobj.position_covariance >  position_covariance) return false; 
        if (position_covariance_type > inobj.position_covariance_type) return true;
        if (inobj.position_covariance_type >  position_covariance_type) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const sensor_msgs::NavSatFix & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"status",t.status,indent,false);
    rframe::json_io::encode(sstr,"latitude",t.latitude,indent,false);
    rframe::json_io::encode(sstr,"longitude",t.longitude,indent,false);
    rframe::json_io::encode(sstr,"altitude",t.altitude,indent,false);
    rframe::json_io::encode(sstr,"position_covariance",t.position_covariance,indent,false);
    rframe::json_io::encode(sstr,"position_covariance_type",t.position_covariance_type,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string sensor_msgs::NavSatFix::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const sensor_msgs::NavSatFix & value)
{
    return s << value.toStr(false);
}

