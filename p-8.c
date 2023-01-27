/*write a c program for prime number*/
#include <stdio.h>

int main()
{
    int num, cout = 0, i;
    printf("Enter any postive number:");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            if (num % i == 0)
            {
                cout++;
                break;
            }
        }
        if (cout == 0)
        {
            printf("prime number\n");
        }
        else
        {
            printf("not prome number\n");
        }
    }
    getch();
}