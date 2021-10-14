#pragma once

#include "DrawAPI.h"
#include <string>
#include <iostream>

class DirectXDraw : public DrawAPI
{
    std::string m_brickType;
    GraphicProxy m_proxy;

    public:
    DirectXDraw(std::string m_brickName) : m_brickType(m_brickName)
    {

    }

    void draw()
    {
        m_proxy.Draw();
        std::cout << m_brickType << std::endl;
    }
};