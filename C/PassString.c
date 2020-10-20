#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void)
{
    char buf[SIZE];
    float temp;
    char unit;

    setbuf(stdout, NULL);

    while (strncmp(buf, "quit", 4) != 0)
    {
        printf("Enter 'quit' to stor or enter a temperature");
        scanf("%s", buf);

        if (sscanf(buf, "%f%c", &temp, &unit) == 2)
        {
            printf("Temperature: %0.2f %c\n", temp, unit);
        }
        else if (strncmp(buf, "quit", 4) != 0)
        {
            printf("Invalid input \n");
        }
    }

    printf("Bye \n");
    return 0;
}