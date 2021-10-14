#include <iostream>

#include "../include/Game.h"
#include "../include/LegoFactory.h"
#include "../include/ClayFactory.h"
#include "../include/ConcreteFactory.h"

#include "../include/OpenGL.h"
#include "../include/VulkanDraw.h"
#include "../include/DirectX.h"

void drawBricks(std::vector<Brick*> m_brick)
{
    for(Brick* brick : m_brick)
    {
        brick->draw();
    }
}

void createBricks()
{
    Factory* factory = new LegoFactory();
    std::vector<Brick*> brick = factory->getBricks(10, new OpenGLDraw("Lego"));
    drawBricks(brick);
    factory = new ClayFactory();
    brick = factory->getBricks(10, new VulkanDraw("Clay"));
    drawBricks(brick);
    factory = new ConcreteFactory();
    brick = factory->getBricks(10, new DirectXDraw("Concrete"));
    drawBricks(brick);
}

int main(int argc, char** argv)
{
    createBricks();
    std::cin.get();
    return 0;
}