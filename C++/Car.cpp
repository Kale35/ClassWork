#include <iostream>

class Car
{
public:
    int speed(int maxSpeed);
    int newSpeed;
};

int Car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{

    Car myObj;
    myObj.newSpeed = 2;
    std::cout << myObj.speed(200) << "\n";
    std::cout << myObj.newSpeed << std::flush;
}

//Capitalized variables are constants