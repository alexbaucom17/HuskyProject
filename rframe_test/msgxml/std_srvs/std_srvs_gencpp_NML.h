// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:57 -0500
//  From Template/Script: data_templates/NMLHeaderTemplate.h
 
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

#ifndef _CODEGEN_STD_SRVS_GENCPPNML_H_
#define _CODEGEN_STD_SRVS_GENCPPNML_H_

#include <messaging/nml/NMLMessageFactory.h>
//#include <DataTypeInfo.h>
#include <messaging/Message.h>

#include "std_srvs_gencpp_NMLSupport.h"

namespace rframe { class DataTypeInfo; };

#include "EmptyRequest.h"
#include "EmptyResponse.h"
#include "Empty.h"
#include "SetBoolRequest.h"
#include "SetBoolResponse.h"
#include "SetBool.h"
#include "TriggerRequest.h"
#include "TriggerResponse.h"
#include "Trigger.h"

namespace std_srvs {

    /** definition of message factory for std_srvs_gencpp */
    class std_srvs_gencppNMLMessageFactory : public NMLMessageFactory
    {
    public:
        /** constructor */
        std_srvs_gencppNMLMessageFactory();
        /** destructor */
        virtual ~std_srvs_gencppNMLMessageFactory();

        /** see  rframe::MessageFactoryInterface */
        virtual void dataTypes(std::vector<DataTypeInfo> & ids);
        /** see  rframe::MessageFactoryInterface */
        virtual int dataType(NMLmsg & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<NMLmsg> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateTransport(NMLmsg * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateMessage(MessageBase * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int toTransport( MessageBase & src, NMLmsg & dst);
        /** see  rframe::MessageFactoryInterface */
        virtual int fromTransport( NMLmsg & src, MessageBase & dst);

        /** \return poitner to nml format function */
        virtual NML_FORMAT_PTR FormatPointer();
        /** run constructor for class of type id in the provided buffer */
        virtual int constructBuffer(rframe::ID_TYPE id, void * buffer);
        /** run destructor for class of type id in the buffer */
        virtual int destructBuffer(rframe::ID_TYPE id, void * buffer);
    };

    /** factory allocation function for use when not dynamically loading the factory library  */
    NMLMessageFactory * allocate_std_srvs_gencpp();

    /** NML interface for EmptyRequest 

    */
    class EmptyRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        EmptyRequestNML();
        /** destructor */
        ~EmptyRequestNML();

        /** assignment operator */
        EmptyRequestNML & operator=(const EmptyRequestNML &inobj);
        /** assignment operator for base data class */
        EmptyRequestNML & operator=(const EmptyRequest &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        EmptyRequest nmlPayload;

        /** set payload */
        void payload(const EmptyRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<EmptyRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        EmptyRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<EmptyRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for EmptyResponse 

    */
    class EmptyResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        EmptyResponseNML();
        /** destructor */
        ~EmptyResponseNML();

        /** assignment operator */
        EmptyResponseNML & operator=(const EmptyResponseNML &inobj);
        /** assignment operator for base data class */
        EmptyResponseNML & operator=(const EmptyResponse &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        EmptyResponse nmlPayload;

        /** set payload */
        void payload(const EmptyResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<EmptyResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        EmptyResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<EmptyResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for Empty 

    */
    class EmptyNML : public NMLmsg
    {
    public:

        /** constructor */
        EmptyNML();
        /** destructor */
        ~EmptyNML();

        /** assignment operator */
        EmptyNML & operator=(const EmptyNML &inobj);
        /** assignment operator for base data class */
        EmptyNML & operator=(const Empty &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        Empty nmlPayload;

        /** set payload */
        void payload(const Empty &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Empty> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Empty * payload() { return & nmlPayload; };

    //     std::shared_ptr<Empty> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for SetBoolRequest 

    */
    class SetBoolRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        SetBoolRequestNML();
        /** destructor */
        ~SetBoolRequestNML();

        /** assignment operator */
        SetBoolRequestNML & operator=(const SetBoolRequestNML &inobj);
        /** assignment operator for base data class */
        SetBoolRequestNML & operator=(const SetBoolRequest &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        SetBoolRequest nmlPayload;

        /** set payload */
        void payload(const SetBoolRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<SetBoolRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        SetBoolRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<SetBoolRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for SetBoolResponse 

    */
    class SetBoolResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        SetBoolResponseNML();
        /** destructor */
        ~SetBoolResponseNML();

        /** assignment operator */
        SetBoolResponseNML & operator=(const SetBoolResponseNML &inobj);
        /** assignment operator for base data class */
        SetBoolResponseNML & operator=(const SetBoolResponse &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        SetBoolResponse nmlPayload;

        /** set payload */
        void payload(const SetBoolResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<SetBoolResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        SetBoolResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<SetBoolResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for SetBool 

    */
    class SetBoolNML : public NMLmsg
    {
    public:

        /** constructor */
        SetBoolNML();
        /** destructor */
        ~SetBoolNML();

        /** assignment operator */
        SetBoolNML & operator=(const SetBoolNML &inobj);
        /** assignment operator for base data class */
        SetBoolNML & operator=(const SetBool &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        SetBool nmlPayload;

        /** set payload */
        void payload(const SetBool &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<SetBool> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        SetBool * payload() { return & nmlPayload; };

    //     std::shared_ptr<SetBool> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for TriggerRequest 

    */
    class TriggerRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        TriggerRequestNML();
        /** destructor */
        ~TriggerRequestNML();

        /** assignment operator */
        TriggerRequestNML & operator=(const TriggerRequestNML &inobj);
        /** assignment operator for base data class */
        TriggerRequestNML & operator=(const TriggerRequest &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        TriggerRequest nmlPayload;

        /** set payload */
        void payload(const TriggerRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<TriggerRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        TriggerRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<TriggerRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for TriggerResponse 

    */
    class TriggerResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        TriggerResponseNML();
        /** destructor */
        ~TriggerResponseNML();

        /** assignment operator */
        TriggerResponseNML & operator=(const TriggerResponseNML &inobj);
        /** assignment operator for base data class */
        TriggerResponseNML & operator=(const TriggerResponse &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        TriggerResponse nmlPayload;

        /** set payload */
        void payload(const TriggerResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<TriggerResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        TriggerResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<TriggerResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for Trigger 

    */
    class TriggerNML : public NMLmsg
    {
    public:

        /** constructor */
        TriggerNML();
        /** destructor */
        ~TriggerNML();

        /** assignment operator */
        TriggerNML & operator=(const TriggerNML &inobj);
        /** assignment operator for base data class */
        TriggerNML & operator=(const Trigger &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        Trigger nmlPayload;

        /** set payload */
        void payload(const Trigger &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Trigger> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Trigger * payload() { return & nmlPayload; };

    //     std::shared_ptr<Trigger> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    // predeclaration of nmlupdate functions (necessary due to namespaces )

    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::EmptyRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::EmptyResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::Empty & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::SetBoolRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::SetBoolResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::SetBool & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::TriggerRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::TriggerResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, std_srvs::Trigger & inobj);

    /** nml format function */
    int std_srvs_gencpp_format(NMLTYPE type, void * buffer, CMS* cms);

}; // end namespace std_srvs

#endif // _STD_SRVS_GENCPPNML_H_
