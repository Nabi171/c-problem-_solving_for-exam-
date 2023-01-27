/* check whether the programme is vowel or consonent using swItch  */
#include <stdio.h>
int main()
{
    char ch;

    printf("enter any alphabat:");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;

    default:
        printf("consonent:");
    }
    return 0;
}