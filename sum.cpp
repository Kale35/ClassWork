#include <iostream>

int main()
{
    std::cout << "Enter first integer "; //prompt user for input
    int number1;
    std::cin >> number1; //Read integer from user into number1

    std::cout << "Enter second integer "; //prompt user for 2nd input
    int number2;
    std::cin >> number2;                        //Read int from user into number2
    int sum = number1 + number2;                //Adds number1 and number2 and stores them into sum
    std::cout << "Sum is " << sum << std::endl; //Prints sum
}

//<< is insertion operator
//>> is extraction operator