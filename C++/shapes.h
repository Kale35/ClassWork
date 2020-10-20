#include <string>
#define PI 3.14159

/*Shape class*/
class Shape
{
public:
    virtual float area() const = 0;
    virtual float perimeter() const = 0;
    virtual std::string str() const = 0;
};

/*Rectangle Class*/
class Rectangle : public Shape
{
public:
    Rectangle(float Length, float width);
    float getlength() const;
    float getwidth() const;
    float area() const;
    float perimeter() const;
    std::string str() const;

private:
    float length;
    float width;
};

/*Square Class*/
class Square : public Rectangle
{
public:
    Square(float side);
    std::string str() const;
}

/*Circle class*/
class Circle : public Shape
{
public:
    Circle(float radius);
    float getradius() const;
    float area() const;
    float perimeter() const;
    std::string str() const;

private:
    float radius;
};