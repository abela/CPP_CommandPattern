#pragma once
#include "InputHandler.h"
class PS5InputHandler :
    public InputHandler
{
public:
    PS5InputHandler();

    virtual bool isButtonPressed(BUTTON_MAPPING buttonMapping) override;

};

