#pragma once
#include <iostream>
#include "../include/Brick.h"

class ClayBrick : public Brick
{
    DrawAPI* api;
public:
    ClayBrick(DrawAPI* m_api) : api(m_api){};
    virtual ~ClayBrick(){};
    virtual void draw(){api->draw();};
};