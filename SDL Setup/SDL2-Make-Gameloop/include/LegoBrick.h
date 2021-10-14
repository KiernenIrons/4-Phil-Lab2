#pragma once
#include <iostream>
#include "../include/Brick.h"

class LegoBrick : public Brick
{
    DrawAPI* api;

public:
    LegoBrick(DrawAPI* m_api) : api(m_api){};
    virtual ~LegoBrick(){};
    virtual void draw(){api->draw();};
};