
/*
-----------------------------------------------------------------------------
Filename:    MessageHandler.h
*/
#ifndef __MessageHandler_h_
#define __MessageHandler_h_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class GameServer;

class MessageHandler
{

public:
    MessageHandler();
    virtual ~MessageHandler(void);

	virtual void translateMessage(char* message);
        virtual void setGameServer(GameServer* gameServer) { mGameServer = gameServer; }

protected:
	char* mMessage;
	GameServer* mGameServer;



};

#endif
