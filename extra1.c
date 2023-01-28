// take 2 number ,determine the summation,subtraction,division
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first interger number:");
    scanf("%d", &num1);
    printf("Enter the second  interger number:");
    scanf("%d", &num2);

    printf("the summation is :%d \n", num1 + num2);
    printf("the subtractrion is :%d\n", num1 - num2);
    printf("the division is :%d\n", num1 / num2);

    return 0;
}