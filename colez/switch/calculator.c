#include <stdio.h>

int main(void)
{
    double a, b,r;
    char opp;
    printf("Enter 2 numbers:\n");
    scanf("%lf%lf", &a,&b);
    printf("Enter the operator: ~");
    scanf(" %c", &opp);
//The space before %c tells scanf to skip any whitespace (including the leftover \n) before reading the character.
//This issue is specific to %c — other specifiers like %d, %f, %lf automatically skip leading whitespace on their own
// %c does not, because it's designed to read any character including whitespace.
    switch (opp)
    {
        case '+':
             r = a + b;
            break;
        case '-':
              r = a - b;
            break;
        case '/':
                    r = a / b;
                    break;
        case '*':
            r = a * b;
            break;
        case '%':
                     r = (int)a % (int)b;
                    break;
        default:
            printf("INVALID CHOICE");
            return -1;

    }
    printf("%lf %c %lf = %lf\n",a , opp ,b ,r);
    return 0;
}




