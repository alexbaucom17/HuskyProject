// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:57 -0500
//  From Template/Script: data_templates/BSONSerializationTemplate.cpp
 
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

#include <common/BsonIo.h>
#include <common/Time.h>
#include <common/Log.h>

#include <stereo_msgs/DisparityImage.h>

using namespace std;

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const stereo_msgs::DisparityImage & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.header,"header");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.image,"image");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.f,"f");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.T,"T");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.valid_window,"valid_window");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.min_disparity,"min_disparity");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.max_disparity,"max_disparity");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.delta_d,"delta_d");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(stereo_msgs::DisparityImage & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of DisparityImage, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member header
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member header" << endl;
            retval = rframe::bson_io::decode(t.header,*tempIt,"header",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member image
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member image" << endl;
            retval = rframe::bson_io::decode(t.image,*tempIt,"image",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member f
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member f" << endl;
            retval = rframe::bson_io::decode(t.f,*tempIt,"f",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member T
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member T" << endl;
            retval = rframe::bson_io::decode(t.T,*tempIt,"T",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member valid_window
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member valid_window" << endl;
            retval = rframe::bson_io::decode(t.valid_window,*tempIt,"valid_window",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member min_disparity
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member min_disparity" << endl;
            retval = rframe::bson_io::decode(t.min_disparity,*tempIt,"min_disparity",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member max_disparity
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member max_disparity" << endl;
            retval = rframe::bson_io::decode(t.max_disparity,*tempIt,"max_disparity",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member delta_d
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member delta_d" << endl;
            retval = rframe::bson_io::decode(t.delta_d,*tempIt,"delta_d",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member header
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member header" << endl;
            it2 = it["header"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.header,it2,"header",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member image
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member image" << endl;
            it2 = it["image"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.image,it2,"image",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member f
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member f" << endl;
            it2 = it["f"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.f,it2,"f",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member T
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member T" << endl;
            it2 = it["T"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.T,it2,"T",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member valid_window
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member valid_window" << endl;
            it2 = it["valid_window"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.valid_window,it2,"valid_window",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member min_disparity
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member min_disparity" << endl;
            it2 = it["min_disparity"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.min_disparity,it2,"min_disparity",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member max_disparity
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member max_disparity" << endl;
            it2 = it["max_disparity"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.max_disparity,it2,"max_disparity",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member delta_d
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member delta_d" << endl;
            it2 = it["delta_d"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.delta_d,it2,"delta_d",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}

