#include <stdio.h>

int main()
{
    //For loop
    for (int a = 10; a < 20; a++)
    {
        printf("a=%d\n", a);
    }

    //While loop
    int b = 10;
    while (b < 20)
    {
        printf("b=%d\n", b);
        b++;
    }

    //Do loop
    int c = 10;
    do
    {
        printf("c=%d\n", c);
        c++;
    } while (c < 20);

    //Break and continue in loop
    for (int d = 10; d < 20; d++)
    {
        printf("d=%d\n", d);
        if (d == 12)
        {
            continue;
        }

        if (d == 15)
        {
            break;
        }
    }

    return (0);
}