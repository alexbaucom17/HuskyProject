// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:52 -0500
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

#ifndef _CODEGEN_ROSCPP_GENCPPNML_H_
#define _CODEGEN_ROSCPP_GENCPPNML_H_

#include <messaging/nml/NMLMessageFactory.h>
//#include <DataTypeInfo.h>
#include <messaging/Message.h>

#include "roscpp_gencpp_NMLSupport.h"

namespace rframe { class DataTypeInfo; };

#include "Logger.h"
#include "EmptyRequest.h"
#include "EmptyResponse.h"
#include "Empty.h"
#include "GetLoggersRequest.h"
#include "GetLoggersResponse.h"
#include "GetLoggers.h"
#include "SetLoggerLevelRequest.h"
#include "SetLoggerLevelResponse.h"
#include "SetLoggerLevel.h"

namespace roscpp {

    /** definition of message factory for roscpp_gencpp */
    class roscpp_gencppNMLMessageFactory : public NMLMessageFactory
    {
    public:
        /** constructor */
        roscpp_gencppNMLMessageFactory();
        /** destructor */
        virtual ~roscpp_gencppNMLMessageFactory();

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
    NMLMessageFactory * allocate_roscpp_gencpp();

    /** NML interface for Logger 

    */
    class LoggerNML : public NMLmsg
    {
    public:

        /** constructor */
        LoggerNML();
        /** destructor */
        ~LoggerNML();

        /** assignment operator */
        LoggerNML & operator=(const LoggerNML &inobj);
        /** assignment operator for base data class */
        LoggerNML & operator=(const Logger &inobj);

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
        Logger nmlPayload;

        /** set payload */
        void payload(const Logger &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<Logger> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        Logger * payload() { return & nmlPayload; };

    //     std::shared_ptr<Logger> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

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

    /** NML interface for GetLoggersRequest 

    */
    class GetLoggersRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        GetLoggersRequestNML();
        /** destructor */
        ~GetLoggersRequestNML();

        /** assignment operator */
        GetLoggersRequestNML & operator=(const GetLoggersRequestNML &inobj);
        /** assignment operator for base data class */
        GetLoggersRequestNML & operator=(const GetLoggersRequest &inobj);

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
        GetLoggersRequest nmlPayload;

        /** set payload */
        void payload(const GetLoggersRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<GetLoggersRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        GetLoggersRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<GetLoggersRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for GetLoggersResponse 

    */
    class GetLoggersResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        GetLoggersResponseNML();
        /** destructor */
        ~GetLoggersResponseNML();

        /** assignment operator */
        GetLoggersResponseNML & operator=(const GetLoggersResponseNML &inobj);
        /** assignment operator for base data class */
        GetLoggersResponseNML & operator=(const GetLoggersResponse &inobj);

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
        GetLoggersResponse nmlPayload;

        /** set payload */
        void payload(const GetLoggersResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<GetLoggersResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        GetLoggersResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<GetLoggersResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for GetLoggers 

    */
    class GetLoggersNML : public NMLmsg
    {
    public:

        /** constructor */
        GetLoggersNML();
        /** destructor */
        ~GetLoggersNML();

        /** assignment operator */
        GetLoggersNML & operator=(const GetLoggersNML &inobj);
        /** assignment operator for base data class */
        GetLoggersNML & operator=(const GetLoggers &inobj);

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
        GetLoggers nmlPayload;

        /** set payload */
        void payload(const GetLoggers &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<GetLoggers> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        GetLoggers * payload() { return & nmlPayload; };

    //     std::shared_ptr<GetLoggers> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for SetLoggerLevelRequest 

    */
    class SetLoggerLevelRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        SetLoggerLevelRequestNML();
        /** destructor */
        ~SetLoggerLevelRequestNML();

        /** assignment operator */
        SetLoggerLevelRequestNML & operator=(const SetLoggerLevelRequestNML &inobj);
        /** assignment operator for base data class */
        SetLoggerLevelRequestNML & operator=(const SetLoggerLevelRequest &inobj);

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
        SetLoggerLevelRequest nmlPayload;

        /** set payload */
        void payload(const SetLoggerLevelRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<SetLoggerLevelRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        SetLoggerLevelRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<SetLoggerLevelRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for SetLoggerLevelResponse 

    */
    class SetLoggerLevelResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        SetLoggerLevelResponseNML();
        /** destructor */
        ~SetLoggerLevelResponseNML();

        /** assignment operator */
        SetLoggerLevelResponseNML & operator=(const SetLoggerLevelResponseNML &inobj);
        /** assignment operator for base data class */
        SetLoggerLevelResponseNML & operator=(const SetLoggerLevelResponse &inobj);

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
        SetLoggerLevelResponse nmlPayload;

        /** set payload */
        void payload(const SetLoggerLevelResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<SetLoggerLevelResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        SetLoggerLevelResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<SetLoggerLevelResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for SetLoggerLevel 

    */
    class SetLoggerLevelNML : public NMLmsg
    {
    public:

        /** constructor */
        SetLoggerLevelNML();
        /** destructor */
        ~SetLoggerLevelNML();

        /** assignment operator */
        SetLoggerLevelNML & operator=(const SetLoggerLevelNML &inobj);
        /** assignment operator for base data class */
        SetLoggerLevelNML & operator=(const SetLoggerLevel &inobj);

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
        SetLoggerLevel nmlPayload;

        /** set payload */
        void payload(const SetLoggerLevel &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<SetLoggerLevel> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        SetLoggerLevel * payload() { return & nmlPayload; };

    //     std::shared_ptr<SetLoggerLevel> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    // predeclaration of nmlupdate functions (necessary due to namespaces )

    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::Logger & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::EmptyRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::EmptyResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::Empty & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::GetLoggersRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::GetLoggersResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::GetLoggers & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::SetLoggerLevelRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::SetLoggerLevelResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, roscpp::SetLoggerLevel & inobj);

    /** nml format function */
    int roscpp_gencpp_format(NMLTYPE type, void * buffer, CMS* cms);

}; // end namespace roscpp

#endif // _ROSCPP_GENCPPNML_H_
