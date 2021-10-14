#pragma once
#include "Brick.h"
#include "DrawAPI.h"
#include <vector>

class Factory
{
public:
    virtual std::vector<Brick*> getBricks(int m_amount, DrawAPI* m_drawAPI) = 0;
};