/*check the number is positive or negative*/
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer number:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("positive number");
    }
    if (num < 0)
    {
        printf("Negative number");
    }

    return 0;
}