#include <iostream>
#include <string>

//Base class
class Vehicle
{
public:
    std::string brand = "Ferrari";

    void honk()
    {
        std::cout << "Tuut tuut!!! \n";
    }
};

//Derived Class
class FormulaOne : public Vehicle
{
public:
    std::string model = "SF90";
};

int main()
{
    FormulaOne myCar;
    myCar.honk();

    std::cout << myCar.brand + " " + myCar.model;
};