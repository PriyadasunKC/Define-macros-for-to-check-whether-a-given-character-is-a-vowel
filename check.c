#include <stdio.h>
#define check(c) ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || \
                  (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U'))   \
                     ? printf("Vowel")                                                  \
                     : printf("Not a vowel")
int main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c", &ch);
    check(ch);

    return 0;
}
