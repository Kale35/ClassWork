#include <strstream>
#include "shapes.h"

Rectangle::Rectangle(float Length, float width)
{
    this->length = length;
    this->width = width;
}

float Rectangle::getLength() const
{
    return length;
}

float Rectangle::getWidth() const
{
    return width;
}

float Rectangle::perimeter() const
{
    return 2 * length + 2 * width;
}

std::string Rectangle::str() const
{
    std::strstream out;
    //A rectangle width sides (3,4)
    out << "A rectangle width sides (" << length << "," << width << ")";
    return out.str;
}