#include shapes.h
#include shape.cpp
#include <string>
#include <iostream>

int main()
{
    Rectangle rec(4, 5);
    std::cout << rec.str() << std::endl;
}