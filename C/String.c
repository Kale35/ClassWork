#include <stdio.h>
#include <string.h>

int main(void)
{
    char stringA[] = "Hello World";
    char stringB[] = "Hello there";

    printf("String A: %s - %p\n", stringA, stringA);
    printf("String B: %s - %p\n", stringB, stringB);

    printf("%s he same.\n", (stringA == stringB) ? "T" : "Not T");

    return 0;
}