#include <iostream>
#include <vector>
#include "geometry.hpp"


int main()
{
    HDC hdc = GetDC(nullptr);
    std::vector<geometry::GeometricalObject*> objs;

    objs.push_back(new geometry::Ellipse(100, 200, 300, 100`);
    objs.push_back(new geometry::Rectangle(400, 400, 150, 100));

    for (const auto& obj : objs)
    {
        obj -> draw(hdc);
        getchar();
    }

    ReleaseDC(nullptr, hdc);

    return 0;
}