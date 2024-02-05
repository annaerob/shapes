#ifndef _GEOMETRY_HPP_
#define _GEOMETRY_HPP_

#include <utility>
#include <windows.h>

namespace geometry
{
    class GeometricalObject
    {
    public:
        GeometricalObject() {};
        virtual ~GeometricalObject() {};

        virtual void draw(HDC hdc)=0;
    };

    class Shape : virtual public GeometricalObject 
    {
    public:
        Shape() {};
        ~Shape() {};
    };

    class Polygon : virtual public GeometricalObject
    {
    public:
        Polygon() {};
        ~Polygon() {};
    };

    class ClosedCurve : virtual public GeometricalObject
    {
    public:
        ClosedCurve() {};
    };

    class Rectangle : public Shape, public Polygon
    {
    public:
        Rectangle();
        Rectangle(int left, int top, int right, int bottom);
        Rectangle(std::pair<int, int>, std::pair<int, int>);

        ~Rectangle() {};

        void draw(HDC hdc) override;
    private:
        int left, top, right, bottom;
    };

    class Ellipse : public Shape, public ClosedCurve
    {
    public:
        Ellipse();
        Ellipse(int left, int top, int right, int bottom);
        Ellipse(std::pair<int, int>, std::pair<int, int>);

        ~Ellipse() {};

        void draw(HDC hdc) override;
    private:
        int left, top, right, bottom;
    };
}

#endif