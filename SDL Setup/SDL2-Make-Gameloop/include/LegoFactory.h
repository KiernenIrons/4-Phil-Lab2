#pragma once
#include <iostream>
#include "../include/Factory.h"
#include "../include/LegoBrick.h"

class LegoFactory : public Factory
{
    public:
    LegoFactory(){};
    ~LegoFactory(){};
    std::vector<Brick*> getBricks(int m_amount, DrawAPI* m_drawAPI)
    {
        std::vector<Brick*> collection;

        for(int i = 0; i < m_amount; i++)
        {
            collection.push_back(new LegoBrick(m_drawAPI));
        }

         return collection;
    };
};