//Checks if the file data.txt exists in the directory

#include <iostream>
#include <fstream>

int main()
{
    char filename[] = "data.txt";
    std::ifstream infile(filename);

    try
    {
        if (infile)
        {
            std::cout << infile.rdbuf();
        }
        else
        {
            throw 404;
        }
    }
    catch (int myNum)
    {
        std::cerr << "Oh no! File not found \n";
        std::cerr << "Error number: " << myNum;
        return 1;
    }
}