#pragma once
#include "GameDefinitions.h"
#include "InputHandler.h"
class InputHandlerFactory
{
public:
	InputHandler* createInputHandlerFactory(AvailableGamePlatforms availableGamePlatforms);
	~InputHandlerFactory();
};

