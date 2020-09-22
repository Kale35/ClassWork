#include <stdio.h>

int main(void)
{
    int a = 7;
    int *aPtr = &a;

    printf("The value of a is %p\nThe address of a is %p\n", a, &a);

    printf("The value of aPtr is %p\nThe address of *aPtr is %p\n", aPtr, *aPtr);

    printf("Showing that * and & are compliments\n &*aPtr = %p\n *&aPtr = %p\n", &*aPtr, *&aPtr);
}