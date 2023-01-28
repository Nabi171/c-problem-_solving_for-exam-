/*1+2+3+4+..N<*/
/*This program will print the sum of all natural numbers from 1 to N.*/
#include <stdio.h>

int main()
{
    int i, N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    /*print the sum*/

    printf("Sum of the series is: %d\n", sum);

    return 0;
}