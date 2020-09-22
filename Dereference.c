#include <stdio.h>

int main()
{
    int a = 7, d;
    int *aPtr;

    aPtr = &a;
    d = *aPtr;

    printf("a= %p\naPtr= %p\n *aPtr= %p\n", a, aPtr, d);
}