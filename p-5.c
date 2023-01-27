#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter First int number:");
    scanf("%d", &num1);
    printf("Enter second int number:");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("num1 is largest");
    }
    else
    {
        printf("num2 is largest");
    }
    return 0;
}