#include <iostream>

class printData
{
public:
    void print(int i)
    {
        std::cout << "Printing int: " << i << std::endl;
    }
    void print(char *c)
    {
        std::cout << "Printing char:" << c << std::endl;
    }
};

int main()
{
    printData pd;

    pd.print(3);

    pd.print("h");
}