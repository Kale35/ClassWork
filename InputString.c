#include <stdio.h>

int main(void)
{
    char message[20];
    printf("Enter a string");
    scanf("%s", message);

    printf("%s\n", message);
    return 0;
}