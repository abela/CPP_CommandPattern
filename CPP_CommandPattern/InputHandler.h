#pragma once
/*#include "CharacterJumpCommand.h"
#include "CharacterMovementCommand.h"
#include "CharacterShootCommand.h"
*/
#include <memory>
#include "ICommand.h"

class InputHandler
{
public:

	enum BUTTON_MAPPING
	{
		kButtonJump,
		kButtonShoot,
		kButtonMove
	};
	InputHandler();
	void handleInput();
	virtual bool isButtonPressed(BUTTON_MAPPING buttonMapping);
protected:
	std::unique_ptr<ICommand> jumpCommand;
	std::unique_ptr<ICommand> shootCommand;
	std::unique_ptr<ICommand> movementCommand;
};

