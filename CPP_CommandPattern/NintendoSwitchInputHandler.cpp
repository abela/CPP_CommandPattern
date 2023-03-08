#include "NintendoSwitchInputHandler.h"

NintendoSwitchInputHandler::NintendoSwitchInputHandler()
{

}

bool NintendoSwitchInputHandler::isButtonPressed(BUTTON_MAPPING buttonMapping)
{
	//
	// ovveride specific button pressed behaviour for Nintendo Switch Platform
	//
	return false;
}