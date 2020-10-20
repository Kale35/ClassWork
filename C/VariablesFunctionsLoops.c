//Primary Data Type(int, char, float, double)
#include <stdio.h>

int main()
{
    int a = 1;
    char b = "G";
    double c = 3.14;
    printf("Welcome to Week 2 of Class!\n");

    //printing the variables defined above along with their sizes
    printf("Hey, I am a character. My value is %c and my size is %lu bytes .\n", b, sizeof(b));

    printf("Hey, I am an integer. My value is %d and my size is %lu bytes .\n", a, sizeof(a));

    printf("Hey, I am a double. My value is %lf and my size is %lu bytes .\n", c, sizeof(c));

    return (0);
}