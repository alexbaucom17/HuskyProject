// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:48 -0500
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
#include "geometry_msgs/AccelWithCovariance.h"
#include <string.h> // for memset 
#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int geometry_msgs::AccelWithCovariance::ID;
const unsigned int geometry_msgs::AccelWithCovariance::DATA_VERSION;
const std::string geometry_msgs::AccelWithCovariance::DATA_TYPE_NAME = "AccelWithCovariance";
const std::string geometry_msgs::AccelWithCovariance::DATA_TYPE_FULL_NAME = "geometry_msgs::AccelWithCovariance";
const std::string geometry_msgs::AccelWithCovariance::VERSION_MD5 = "166835ef239f3e450e5df47a9a6625db";
/* xml source for this class */
const std::string geometry_msgs::AccelWithCovariance::XML_SOURCE = "<class name=\"AccelWithCovariance\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"ad5a718d699c6be72a02b8d6a139f334\" rosDesc=\"# This expresses acceleration in free space with uncertainty.\\n\\nAccel accel\\n\\n# Row-major representation of the 6x6 covariance matrix\\n# The orientation parameters use a fixed-axis representation.\\n# In order, the parameters are:\\n# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\\nfloat64[36] covariance\\n\\n================================================================================\\nMSG: geometry_msgs/Accel\\n# This expresses acceleration in free space broken into its linear and angular parts.\\nVector3  linear\\nVector3  angular\\n\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"This expresses acceleration in free space with uncertainty.\" id=\"1901327792\">\
  <field name=\"accel\" type=\"Accel\" sourceType=\"Accel\" comment=\"Row-major representation of the 6x6 covariance matrix  The orientation parameters use a fixed-axis representation.  In order, the parameters are:  (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\"/>\
  <field name=\"covariance\" type=\"double\" size=\"36\" sourceType=\"float64\" comment=\"\"/>\
</class>";

geometry_msgs::AccelWithCovariance::AccelWithCovariance() : accel()
{  
    memset(covariance.data(),0,sizeof(double)*36); 
};

geometry_msgs::AccelWithCovariance::AccelWithCovariance(const geometry_msgs::AccelWithCovariance & inobj) : accel(inobj.accel)
{
    covariance = inobj.covariance;
};

geometry_msgs::AccelWithCovariance::~AccelWithCovariance()
{
};

geometry_msgs::AccelWithCovariance * geometry_msgs::AccelWithCovariance::New()
{ 
    return new AccelWithCovariance();
};

bool geometry_msgs::AccelWithCovariance::dataTypeFlat() 
{  
    return Accel::dataTypeFlat();

};

geometry_msgs::AccelWithCovariance & geometry_msgs::AccelWithCovariance::operator=(const geometry_msgs::AccelWithCovariance & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus geometry_msgs::AccelWithCovariance is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(geometry_msgs::AccelWithCovariance));
        }
        else */ 
        {

            accel = inobj.accel;
            covariance = inobj.covariance;
        }
    }

    return *this;
}

bool geometry_msgs::AccelWithCovariance::operator==(const geometry_msgs::AccelWithCovariance & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (accel == inobj.accel)
             && (covariance == inobj.covariance);
    }

    return ret;
}

bool geometry_msgs::AccelWithCovariance::operator!=(const geometry_msgs::AccelWithCovariance & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool geometry_msgs::AccelWithCovariance::operator<(const geometry_msgs::AccelWithCovariance & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (accel < inobj.accel) return true;
        if (inobj.accel <  accel) return false; 
        if (covariance < inobj.covariance) return true;
        if (inobj.covariance <  covariance) return false; ;
    }

    return ret;
}

bool geometry_msgs::AccelWithCovariance::operator>(const geometry_msgs::AccelWithCovariance & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (accel > inobj.accel) return true;
        if (inobj.accel >  accel) return false; 
        if (covariance > inobj.covariance) return true;
        if (inobj.covariance >  covariance) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const geometry_msgs::AccelWithCovariance & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"accel",t.accel,indent,false);
    rframe::json_io::encode(sstr,"covariance",t.covariance,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string geometry_msgs::AccelWithCovariance::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const geometry_msgs::AccelWithCovariance & value)
{
    return s << value.toStr(false);
}

