// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:56 -0500
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
#include "std_msgs/UInt64MultiArray.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int std_msgs::UInt64MultiArray::ID;
const unsigned int std_msgs::UInt64MultiArray::DATA_VERSION;
const std::string std_msgs::UInt64MultiArray::DATA_TYPE_NAME = "UInt64MultiArray";
const std::string std_msgs::UInt64MultiArray::DATA_TYPE_FULL_NAME = "std_msgs::UInt64MultiArray";
const std::string std_msgs::UInt64MultiArray::VERSION_MD5 = "84d0d840c46d09599e4475cfc5f43425";
/* xml source for this class */
const std::string std_msgs::UInt64MultiArray::XML_SOURCE = "<class name=\"UInt64MultiArray\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"6088f127afb1d6c72927aa1247e945af\" rosDesc=\"# Please look at the MultiArrayLayout message definition for\\n# documentation on all multiarrays.\\n\\nMultiArrayLayout  layout        # specification of data layout\\nuint64[]          data          # array of data\\n\\n\\n================================================================================\\nMSG: std_msgs/MultiArrayLayout\\n# The multiarray declares a generic multi-dimensional array of a\\n# particular data type.  Dimensions are ordered from outer most\\n# to inner most.\\n\\nMultiArrayDimension[] dim # Array of dimension properties\\nuint32 data_offset        # padding elements at front of data\\n\\n# Accessors should ALWAYS be written in terms of dimension stride\\n# and specified outer-most dimension first.\\n# \\n# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]\\n#\\n# A standard, 3-channel 640x480 image with interleaved color channels\\n# would be specified as:\\n#\\n# dim[0].label  = \\&quot;height\\&quot;\\n# dim[0].size   = 480\\n# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)\\n# dim[1].label  = \\&quot;width\\&quot;\\n# dim[1].size   = 640\\n# dim[1].stride = 3*640 = 1920\\n# dim[2].label  = \\&quot;channel\\&quot;\\n# dim[2].size   = 3\\n# dim[2].stride = 3\\n#\\n# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.\\n\\n================================================================================\\nMSG: std_msgs/MultiArrayDimension\\nstring label   # label of given dimension\\nuint32 size    # size of given dimension (in type units)\\n\" comment=\"Please look at the MultiArrayLayout message definition for  documentation on all multiarrays.\" id=\"2068109293\">\
  <field name=\"layout\" type=\"std_msgs::MultiArrayLayout\" sourceType=\"MultiArrayLayout\" comment=\"specification of data layout\"/>\
  <field name=\"data\" type=\"vector(unsigned long long int)\" sourceType=\"uint64\" comment=\"array of data\"/>\
</class>";

std_msgs::UInt64MultiArray::UInt64MultiArray() : layout(), data()
{  
};

std_msgs::UInt64MultiArray::UInt64MultiArray(const std_msgs::UInt64MultiArray & inobj) : layout(inobj.layout), data(inobj.data)
{
};

std_msgs::UInt64MultiArray::~UInt64MultiArray()
{
};

std_msgs::UInt64MultiArray * std_msgs::UInt64MultiArray::New()
{ 
    return new UInt64MultiArray();
};

bool std_msgs::UInt64MultiArray::dataTypeFlat() 
{   
    return false; 
};

std_msgs::UInt64MultiArray & std_msgs::UInt64MultiArray::operator=(const std_msgs::UInt64MultiArray & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus std_msgs::UInt64MultiArray is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(std_msgs::UInt64MultiArray));
        }
        else */ 
        {

            layout = inobj.layout;
            data = inobj.data;
        }
    }

    return *this;
}

bool std_msgs::UInt64MultiArray::operator==(const std_msgs::UInt64MultiArray & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (layout == inobj.layout)
             && (data == inobj.data);
    }

    return ret;
}

bool std_msgs::UInt64MultiArray::operator!=(const std_msgs::UInt64MultiArray & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool std_msgs::UInt64MultiArray::operator<(const std_msgs::UInt64MultiArray & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (layout < inobj.layout) return true;
        if (inobj.layout <  layout) return false; 
        if (data < inobj.data) return true;
        if (inobj.data <  data) return false; ;
    }

    return ret;
}

bool std_msgs::UInt64MultiArray::operator>(const std_msgs::UInt64MultiArray & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (layout > inobj.layout) return true;
        if (inobj.layout >  layout) return false; 
        if (data > inobj.data) return true;
        if (inobj.data >  data) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const std_msgs::UInt64MultiArray & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"layout",t.layout,indent,false);
    rframe::json_io::encode(sstr,"data",t.data,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string std_msgs::UInt64MultiArray::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const std_msgs::UInt64MultiArray & value)
{
    return s << value.toStr(false);
}

