#include "PS5InputHandler.h"

PS5InputHandler::PS5InputHandler()
{

}

bool PS5InputHandler::isButtonPressed(BUTTON_MAPPING buttonMapping)
{
	//
	// ovveride specific button pressed behaviour for PS5 Platform
	//
	return false;
}