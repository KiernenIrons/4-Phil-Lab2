#pragma once
#include <iostream>

class IGraphic
{
public:
    IGraphic(){};
    virtual void Draw() = 0;
};

class Graphic : public IGraphic
{
public:
    Graphic(){};
    ~Graphic(){};
    void Draw()
    {
        std::cout << "Graphic Draw" << std::endl;
    };
};

class GraphicProxy : public IGraphic
{
public:
    GraphicProxy(){};
    ~GraphicProxy(){};
    void Draw()
    {
        getInstance()->Draw();
        std::cout << "Graphic Proxy Draw" << std::endl;
    };

private:
    Graphic* graphic;
    Graphic* getInstance(void)
    {
        if(!graphic)
        {
            graphic = new Graphic();
        }
        return graphic;
    };
};