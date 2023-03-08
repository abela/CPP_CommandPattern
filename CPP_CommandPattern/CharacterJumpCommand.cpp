#include "CharacterJumpCommand.h"

CharacterJumpCommand::CharacterJumpCommand() : ICommand()
{

}
CharacterJumpCommand::~CharacterJumpCommand()
{

}

void CharacterJumpCommand::jump()
{
	// implement jump functionality for character
}
void CharacterJumpCommand::execute()
{
	jump();
}