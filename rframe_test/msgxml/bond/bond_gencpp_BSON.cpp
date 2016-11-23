// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:45 -0500
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

#include <bond/Constants.h>
#include <bond/Status.h>

using namespace std;

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const bond::Constants & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    if (name != nullptr)
    {
        BsonObj child;
        bson_append_document_begin(b,name,strlen(name),child);
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(bond::Constants & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of Constants, lookup fields: " << lookupFields << endl;

    return retval;
}

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const bond::Status & inobj, const char * name)
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
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.id,"id");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.instance_id,"instance_id");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.active,"active");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.heartbeat_timeout,"heartbeat_timeout");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.heartbeat_period,"heartbeat_period");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(bond::Status & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of Status, lookup fields: " << lookupFields << endl;

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

        // decode of member id
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member id" << endl;
            retval = rframe::bson_io::decode(t.id,*tempIt,"id",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member instance_id
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member instance_id" << endl;
            retval = rframe::bson_io::decode(t.instance_id,*tempIt,"instance_id",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member active
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member active" << endl;
            retval = rframe::bson_io::decode(t.active,*tempIt,"active",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member heartbeat_timeout
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member heartbeat_timeout" << endl;
            retval = rframe::bson_io::decode(t.heartbeat_timeout,*tempIt,"heartbeat_timeout",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member heartbeat_period
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member heartbeat_period" << endl;
            retval = rframe::bson_io::decode(t.heartbeat_period,*tempIt,"heartbeat_period",lookupFields);
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

        // decode of member id
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member id" << endl;
            it2 = it["id"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.id,it2,"id",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member instance_id
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member instance_id" << endl;
            it2 = it["instance_id"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.instance_id,it2,"instance_id",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member active
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member active" << endl;
            it2 = it["active"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.active,it2,"active",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member heartbeat_timeout
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member heartbeat_timeout" << endl;
            it2 = it["heartbeat_timeout"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.heartbeat_timeout,it2,"heartbeat_timeout",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member heartbeat_period
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member heartbeat_period" << endl;
            it2 = it["heartbeat_period"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.heartbeat_period,it2,"heartbeat_period",lookupFields);
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

