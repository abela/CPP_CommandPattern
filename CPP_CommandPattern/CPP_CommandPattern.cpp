// CPP_CommandPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "InputHandlerFactory.h"
#include "InputHandler.h"
#include "NintendoSwitchInputHandler.h"
#include "PS5InputHandler.h"


int main()
{
	// create our platform input selector factory object
	std::unique_ptr<InputHandlerFactory> m_InputHandlerFactory(new InputHandlerFactory());

	// declare our current input handler variable
	std::unique_ptr<InputHandler> m_currentInputHandler;

	// let's decide which input handler do we want to create per platform, i.e. switch?! (and create it)
	m_currentInputHandler.reset(m_InputHandlerFactory->createInputHandlerFactory(kNintendoSwitch));


	// now we are free to go and just use the method handleInput in game loop ( we are sure that correct game input handling is provided per suitable platform:
	
	// i.e.
	//your game loop start 
	//{
	m_currentInputHandler->handleInput();
	//} your game loop end
}

