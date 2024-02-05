#include "geometry.hpp"

geometry::Rectangle::Rectangle()
{
    left = 200;
    top = 200;

    right = 400;
    bottom = 400;
}
geometry::Rectangle::Rectangle(int l, int t, int r, int b)
{
    left = l;
    top = t;
    
    right = r;
    bottom = b;
}
geometry::Rectangle::Rectangle(std::pair<int, int> l, std::pair<int, int> r)
{
    left = l.first;
    top = l.second;

    right = r.first;
    bottom = r.second;
}
void geometry::Rectangle::draw(HDC hdc)
{
    ::Rectangle(hdc, left, top, right, bottom);
}

geometry::Ellipse::Ellipse()
{
    left = 200;
    top = 400;

    right = 500;
    bottom = 200;
}
geometry::Ellipse::Ellipse(int left, int top, int right, int bottom)
{
    left = left;
    top = top;

    right = right;
    bottom = bottom;
}
geometry::Ellipse::Ellipse(std::pair<int, int> l, std::pair<int, int> r)
{
    left = l.first;
    top = l.second;

    right = r.first;
    bottom = r.second;
}
void geometry::Ellipse::draw(HDC hdc)
{
    ::Ellipse(hdc, left, top, right, bottom);
}