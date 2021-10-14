#pragma once
#include <iostream>
#include "../include/Factory.h"
#include "../include/ClayBrick.h"

class ClayFactory : public Factory
{
    public:
    ClayFactory(){};
    ~ClayFactory(){};
    std::vector<Brick*> getBricks(int m_amount, DrawAPI* m_drawAPI)
    {
        std::vector<Brick*> collection;

        for(int i = 0; i < m_amount; i++)
        {
            collection.push_back(new ClayBrick(m_drawAPI));
        }

        return collection;
    };
};