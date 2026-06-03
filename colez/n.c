#include <stdio.h>
int main ()
    {
char ch;
printf("Enter a char:");
scanf("%c", &ch);
if (ch >= 'A' && ch<='Z')
{
    ch = ch + 32;
}
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
 {
printf("%c is a VOWEL\n", ch);
 }
 else {
        printf("%c is NOT a vowel\n", ch);
    }
    }

