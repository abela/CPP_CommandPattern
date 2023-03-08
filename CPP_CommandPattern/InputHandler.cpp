#include "InputHandler.h"
#include "CharacterJumpCommand.h"
#include "CharacterMovementCommand.h"
#include "CharacterShootCommand.h"

InputHandler::InputHandler()
{
	jumpCommand.reset(new CharacterJumpCommand());
	shootCommand.reset(new CharacterShootCommand());
	movementCommand.reset(new CharacterMovementCommand());
}

bool InputHandler::isButtonPressed(BUTTON_MAPPING buttonMapping)
{
	// implement platform specific code for detecting button pressing
	return false;
}

void InputHandler::handleInput()
{
	if (isButtonPressed(BUTTON_MAPPING::kButtonJump))
	{
		if (jumpCommand != nullptr)
		{
			jumpCommand->execute();
		}
	}

	if (isButtonPressed(BUTTON_MAPPING::kButtonMove))
	{
		if (movementCommand != nullptr)
		{
			movementCommand->execute();
		}
	}

	if (isButtonPressed(BUTTON_MAPPING::kButtonShoot))
	{
		if (shootCommand != nullptr)
		{
			shootCommand->execute();
		}
	}
}
