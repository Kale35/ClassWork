#include <stdio.h>
#include <float.h>

int main(void)
{
    //define an int called 'a' and initialize it as 0
    int a = 0;
    int b = 0;
    float c = 0.0;

    //read an integer from standard input. Note ampersand before 'a'
    printf("Enter an integer number: ");
    scanf("%d", &a);

    //read one int and one float from standard input
    printf("Enter one int and one float: ");
    scanf("%d %f", &b, &c);
    printf("You input integer = %d and float = %f \n", b, c);

    return (0);
}