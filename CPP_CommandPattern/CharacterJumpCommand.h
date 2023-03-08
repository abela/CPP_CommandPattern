#pragma once
#include "ICommand.h"

class CharacterJumpCommand : public ICommand
{
private:
    void jump();
public:
    CharacterJumpCommand();
    virtual ~CharacterJumpCommand();
    virtual void execute() override;
};

