#pragma once
#include "InputHandler.h"
class NintendoSwitchInputHandler :
    public InputHandler
{
public:
    NintendoSwitchInputHandler();
    virtual bool isButtonPressed(BUTTON_MAPPING buttonMapping) override;
};

