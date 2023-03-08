#include "InputHandlerFactory.h"
#include "PCInputHandler.h"
#include "PS5InputHandler.h"
#include "NintendoSwitchInputHandler.h"

InputHandler* InputHandlerFactory::createInputHandlerFactory(AvailableGamePlatforms availableGamePlatforms)
{
	switch (availableGamePlatforms)
	{
	case kPC:
		return new PCInputHandler();
		break;
	case kNintendoSwitch:
		return new NintendoSwitchInputHandler();
		break;
	case kPs5:
		return new PS5InputHandler();
	default:
		return new InputHandler();
		break;
	}
}

InputHandlerFactory::~InputHandlerFactory()
{

}