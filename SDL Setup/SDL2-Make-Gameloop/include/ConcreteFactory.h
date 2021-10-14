#pragma once
#include <iostream>
#include "../include/Factory.h"
#include "../include/ConcreteBrick.h"

class ConcreteFactory : public Factory
{
    public:
    ConcreteFactory(){};
    ~ConcreteFactory(){};
    std::vector<Brick*> getBricks(int m_amount, DrawAPI* m_drawAPI)
    {
        std::vector<Brick*> collection;

        for(int i = 0; i < m_amount; i++)
        {
            collection.push_back(new ConcreteBrick(m_drawAPI));
        }

        return collection;
    };
};