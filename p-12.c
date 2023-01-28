/* check whether the programme is vowel or consonent using ternarry operator  */

#include <stdio.h>

int main()
{
    char ch;

    printf("enter any character:");
    scanf("%c", &ch);

    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? printf("vowel", ch)

                                                                    : printf("consonent");

    return 0;
}