// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:44:55 -0500
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

#include "shape_msgs_gencpp_ROS.h"
#include <common/Log.h>
#include <common/DataTypeInfo.h>

using namespace std;
using namespace shape_msgs;

rframe::ROSMessageFactory * ROS_shape_msgs_gencppfactory = NULL;

extern "C"
{
    /** library access method */
    rframe::MessageFactoryBase * AllocateMessageFactory()
    {
        ROS_shape_msgs_gencppfactory = new shape_msgs_gencppROSMessageFactory();

        return ROS_shape_msgs_gencppfactory;
    };
}

rframe::ROSMessageFactory * shape_msgs::allocate_shape_msgs_gencpp()
{
    ROS_shape_msgs_gencppfactory = new shape_msgs_gencppROSMessageFactory();
    return ROS_shape_msgs_gencppfactory;
};

shape_msgs_gencppROSMessageFactory::shape_msgs_gencppROSMessageFactory()
{
    name("shape_msgs_gencpp");
    // use constructor to register data types
    shape_msgs::registerLibrary();
}

shape_msgs_gencppROSMessageFactory::~shape_msgs_gencppROSMessageFactory()
{
}

int shape_msgs_gencppROSMessageFactory::dataType(ros::SerializedMessage & msg)
{
    return msg.message_type;
}

void shape_msgs_gencppROSMessageFactory::dataTypes(vector<DataTypeInfo> & ids)
{
    DataTypeInfo info;

    ids.clear();

    info.id(Mesh::ID);
    info.name(Mesh::DATA_TYPE_FULL_NAME);
    info.hashKey(Mesh::DATA_VERSION);
    info.md5Key(Mesh::VERSION_MD5);
    info.xmlSource(Mesh::XML_SOURCE);
    info.flat(Mesh::dataTypeFlat());
    ids.push_back(info);

    info.id(MeshTriangle::ID);
    info.name(MeshTriangle::DATA_TYPE_FULL_NAME);
    info.hashKey(MeshTriangle::DATA_VERSION);
    info.md5Key(MeshTriangle::VERSION_MD5);
    info.xmlSource(MeshTriangle::XML_SOURCE);
    info.flat(MeshTriangle::dataTypeFlat());
    ids.push_back(info);

    info.id(Plane::ID);
    info.name(Plane::DATA_TYPE_FULL_NAME);
    info.hashKey(Plane::DATA_VERSION);
    info.md5Key(Plane::VERSION_MD5);
    info.xmlSource(Plane::XML_SOURCE);
    info.flat(Plane::dataTypeFlat());
    ids.push_back(info);

    info.id(SolidPrimitive::ID);
    info.name(SolidPrimitive::DATA_TYPE_FULL_NAME);
    info.hashKey(SolidPrimitive::DATA_VERSION);
    info.md5Key(SolidPrimitive::VERSION_MD5);
    info.xmlSource(SolidPrimitive::XML_SOURCE);
    info.flat(SolidPrimitive::dataTypeFlat());
    ids.push_back(info);

}

int shape_msgs_gencppROSMessageFactory::typeName(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case Mesh::ID:
        {
            str = "shape_msgs/Mesh";
            break;
        }
        case MeshTriangle::ID:
        {
            str = "shape_msgs/MeshTriangle";
            break;
        }
        case Plane::ID:
        {
            str = "shape_msgs/Plane";
            break;
        }
        case SolidPrimitive::ID:
        {
            str = "shape_msgs/SolidPrimitive";
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

int shape_msgs_gencppROSMessageFactory::desc(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case Mesh::ID:
        {
            str = "# Definition of a mesh\n\n# list of triangles; the index values refer to positions in vertices[]\nMeshTriangle[] triangles\n\n# the actual vertices that make up the mesh\ngeometry_msgs/Point[] vertices\n\n================================================================================\nMSG: shape_msgs/MeshTriangle\n# Definition of a triangle's vertices\nuint32[3] vertex_indices\n\n================================================================================\nMSG: geometry_msgs/Point\n# This contains the position of a point in free space\nfloat64 x\nfloat64 y\nfloat64 z\n";
            break;
        }
        case MeshTriangle::ID:
        {
            str = "# Definition of a triangle's vertices\nuint32[3] vertex_indices\n";
            break;
        }
        case Plane::ID:
        {
            str = "# Representation of a plane, using the plane equation ax + by + cz + d = 0\n\n# a := coef[0]\n# b := coef[1]\n# c := coef[2]\n# d := coef[3]\n\nfloat64[4] coef\n";
            break;
        }
        case SolidPrimitive::ID:
        {
            str = "# Define box, sphere, cylinder, cone \n# All shapes are defined to have their bounding boxes centered around 0,0,0.\n\nuint8 BOX=1\nuint8 SPHERE=2\nuint8 CYLINDER=3\nuint8 CONE=4\n\n# The type of the shape\nuint8 type\n\n\n# The dimensions of the shape\nfloat64[] dimensions\n\n# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n\n# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n# sides of the box.\nuint8 BOX_X=0\nuint8 BOX_Y=1\nuint8 BOX_Z=2\n\n\n# For the SPHERE type, only one component is used, and it gives the radius of\n# the sphere.\nuint8 SPHERE_RADIUS=0\n\n\n# For the CYLINDER and CONE types, the center line is oriented along\n# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n# of dimensions gives the height of the cylinder (cone).  The\n# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n# radius of the base of the cylinder (cone).  Cone and cylinder\n# primitives are defined to be circular. The tip of the cone is\n# pointing up, along +Z axis.\n\nuint8 CYLINDER_HEIGHT=0\nuint8 CYLINDER_RADIUS=1\n\nuint8 CONE_HEIGHT=0\nuint8 CONE_RADIUS=1\n";
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

int shape_msgs_gencppROSMessageFactory::md5String(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case Mesh::ID:
        {
            str = "1ffdae9486cd3316a121c578b47a85cc";
            break;
        }
        case MeshTriangle::ID:
        {
            str = "23688b2e6d2de3d32fe8af104a903253";
            break;
        }
        case Plane::ID:
        {
            str = "2c1b92ed8f31492f8e73f6a4a44ca796";
            break;
        }
        case SolidPrimitive::ID:
        {
            str = "d8f8cbc74c5ff283fca29569ccefb45d";
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

int shape_msgs_gencppROSMessageFactory::md5(unsigned long long & highOrder, unsigned long long & lowOrder, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case Mesh::ID:
        {   
		    highOrder = 0x1ffdae9486cd3316ULL;
            lowOrder = 0xa121c578b47a85ccULL;
            break;
        }
        case MeshTriangle::ID:
        {   
		    highOrder = 0x23688b2e6d2de3d3ULL;
            lowOrder = 0x2fe8af104a903253ULL;
            break;
        }
        case Plane::ID:
        {   
		    highOrder = 0x2c1b92ed8f31492fULL;
            lowOrder = 0x8e73f6a4a44ca796ULL;
            break;
        }
        case SolidPrimitive::ID:
        {   
		    highOrder = 0xd8f8cbc74c5ff283ULL;
            lowOrder = 0xfca29569ccefb45dULL;
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

int shape_msgs_gencppROSMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<ros::SerializedMessage> & msg)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    { 
        case Mesh::ID:
        case MeshTriangle::ID:
        case Plane::ID:
        case SolidPrimitive::ID:
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

int shape_msgs_gencppROSMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    { 
        case Mesh::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<Mesh>(),std::bind(&shape_msgs_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
        case MeshTriangle::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<MeshTriangle>(),std::bind(&shape_msgs_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
        case Plane::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<Plane>(),std::bind(&shape_msgs_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
        case SolidPrimitive::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<SolidPrimitive>(),std::bind(&shape_msgs_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

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

int shape_msgs_gencppROSMessageFactory::deallocateMessage(MessageBase * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
	{
        delete msg;
    }

    return retval;
}

int shape_msgs_gencppROSMessageFactory::deallocateTransport(ros::SerializedMessage * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
    {
        delete msg;
    }

    return retval;
}

int shape_msgs_gencppROSMessageFactory::toTransport(MessageBase & src, ros::SerializedMessage & dst)
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
            case Mesh::ID:
            {
                Message<Mesh > & tempSrc = static_cast<Message<Mesh>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: shape_msgs_gencpp::Mesh buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
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
            case MeshTriangle::ID:
            {
                Message<MeshTriangle > & tempSrc = static_cast<Message<MeshTriangle>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: shape_msgs_gencpp::MeshTriangle buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
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
            case Plane::ID:
            {
                Message<Plane > & tempSrc = static_cast<Message<Plane>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: shape_msgs_gencpp::Plane buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
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
            case SolidPrimitive::ID:
            {
                Message<SolidPrimitive > & tempSrc = static_cast<Message<SolidPrimitive>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: shape_msgs_gencpp::SolidPrimitive buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
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

int shape_msgs_gencppROSMessageFactory::fromTransport(ros::SerializedMessage & src, MessageBase & dst)
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
            case Mesh::ID:
            {
                Message<Mesh > & tempDst = static_cast<Message<Mesh>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            case MeshTriangle::ID:
            {
                Message<MeshTriangle > & tempDst = static_cast<Message<MeshTriangle>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            case Plane::ID:
            {
                Message<Plane > & tempDst = static_cast<Message<Plane>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            case SolidPrimitive::ID:
            {
                Message<SolidPrimitive > & tempDst = static_cast<Message<SolidPrimitive>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

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

int shape_msgs_gencppROSMessageFactory::updateHeader(rframe::MessageBase &msg, unsigned int seqNo)
{
    int retval = rframe::Error::SUCCESS;

    switch (msg.id())
    {   
        // Mesh does not have a Header as its first member 
        // MeshTriangle does not have a Header as its first member 
        // Plane does not have a Header as its first member 
        // SolidPrimitive does not have a Header as its first member 
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}
