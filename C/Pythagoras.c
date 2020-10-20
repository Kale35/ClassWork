#include <stdio.h>

int main()
{
    //Default values for base, perpendicular, and hypotenuse
    int b = 0;
    int p = 0;
    int h = 0;

    //User input for base, perpendicular, and hypotenuse
    printf("Enter a base");
    scanf("%d", &b);

    printf("Enter a perpendicular");
    scanf("%d", &p);

    printf("Enter a hypotenuse");
    scanf("%d", &h);

    //Uses formulas to determine triangle type and prints it
    if ((h * h) == (p * p) + (b * b))
    {
        printf("This is a right triangle");
    }
    else if ((h * h) > (p * p) + (b * b))
    {
        printf("This is an obtuse triangle");
    }
    else
    {
        printf("This is and acute triangle");
    }

    return (0);
}