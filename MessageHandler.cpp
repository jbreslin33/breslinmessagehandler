
/*
-----------------------------------------------------------------------------
Filename:    MessageHandler.cpp
*/

#include "MessageHandler.h"
#include "../breslinlistenserver/ListenServer.h"

#include <iostream>

//-------------------------------------------------------------------------------------
MessageHandler::MessageHandler()
{
	//create ListenServer here as ListenServer has no need to be subclassed for different games.
	std::cout << "MessageHandler Constructor\n";
	ListenServer* ls = new ListenServer();

	std::cout << "setListenServer(ls) from inside MessageHandler Constructor\n";
	setListenServer(ls);
	
	//I won't pass in MessageHandler to ListenServer I will let the subclass particular to the game do it.

}
//-------------------------------------------------------------------------------------
MessageHandler::~MessageHandler(void)
{
}

/*this should call a function on the client or the server */
void MessageHandler::translateMessage(char* message)
{
}
