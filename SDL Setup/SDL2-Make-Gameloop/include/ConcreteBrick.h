#pragma once
#include <iostream>
#include "../include/Brick.h"

class ConcreteBrick : public Brick
{
    DrawAPI* api;
public:
    ConcreteBrick(DrawAPI* m_api) : api(m_api){};
    virtual ~ConcreteBrick(){};
    virtual void draw(){api->draw();};
};