#include "PCInputHandler.h"

PCInputHandler::PCInputHandler() : InputHandler()
{
	
}

bool PCInputHandler::isButtonPressed(BUTTON_MAPPING buttonMapping)
{
	//
	// ovveride specific button pressed behaviour for PC Platform
	//
	return false;
}