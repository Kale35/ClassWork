#include <stdio.h>

int main()
{
    int a = 7;
    int *aPtr;
    aPtr = &a;

    printf("a= %d\naPtr= %p\n", a, aPtr);
}