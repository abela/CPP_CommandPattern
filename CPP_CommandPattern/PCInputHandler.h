#pragma once
#include "InputHandler.h"
class PCInputHandler :
    public InputHandler
{
public:
     PCInputHandler();
     virtual bool isButtonPressed(BUTTON_MAPPING buttonMapping) override;
};

