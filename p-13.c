#include <stdio.h>

int main()
{
    int a, b, c;
    int x, y;
    printf("enter three number=");
    scanf("%d %d %d", &a, &b, &c);
    x = max(a, b, c);
    y = min(a, b, c);
    printf("%d is maximum", x);
    printf("\n %d is minimum", y);

    return 0;
}
int max(int a, int b, int c)
{
    int result;
    if (a > b && a > c)
    {
        result = a;
        }
    else if (b > a && b > c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    return result;
}
int min(int a, int b, int c)
{
    int result;
    if (a < b && a < c)
    {
        result = a;
    }
    else if (b < a && b < c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    return result;
}
