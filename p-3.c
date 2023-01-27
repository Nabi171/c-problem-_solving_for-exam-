/*check the number is even or odd*/
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer num:");
    scanf("%d", &num);
    if (num % 2 == 1)
    {
        printf("odd number");
    }
    if (num % 2 == 0)
    {
        printf("even number");
    }

    return 0;
}