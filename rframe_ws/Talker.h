// 
//  this notice is just to let you know this file was created by
//  a helper script, you may edit this file.
//
//  Generated by:         alex on alex-laptop, 2016-11-23 12:40:30 -0500
//  From Template/Script: module_templates/ModuleTemplate.h.rb
 
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

#ifndef _TALKER_H_
#define _TALKER_H_

#include <messaging/MessagingClient.h>
#include <common/Log.h>
#include <rctamagic/rctamagic_Library.h>
#include <worldmodel/interfaces/WorldModelInterface.h>


/**
   FILL THIS IN
*/
class Talker : public MessagingClient
{
public:

    /** constructor */
    Talker();
    /** destructor */
    virtual ~Talker();

  protected:
	virtual int onConfigure(Configuration & config = Configuration::instance());
    virtual int onInitialize();
    virtual int onStart();
    virtual int onStop();
    virtual int onShutdown();
    virtual int onOnce();

	

private:
	/** hokdata msg holder */
    rctamagic::HOKDATA my_hokdata; 
	void hokdataCallback(const std::shared_ptr<rctamagic::HOKDATA const> & msg);

	/** world model interface */
    worldmodel::WorldModelInterface gotoWm;


};




#endif // _TALKER_H_

