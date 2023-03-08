#pragma once
#include "ICommand.h"

class CharacterShootCommand : public ICommand
{
private:
    void shoot();
public:
    virtual ~CharacterShootCommand();
    virtual void execute() override;
};

