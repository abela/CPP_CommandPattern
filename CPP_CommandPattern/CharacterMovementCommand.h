#pragma once
#include "ICommand.h"

class CharacterMovementCommand :  public ICommand
{
private:
    void move();
public:
    virtual ~CharacterMovementCommand();
    virtual void execute() override;
};

