/* check whether the programme is vowel or consonent using ifelse  */
#include <stdio.h>

int main()
{
    char ch;

    printf("enter any character:");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("vowel", ch);
    }
    else
    {
        printf("consonent");
    }

    return 0;
}
