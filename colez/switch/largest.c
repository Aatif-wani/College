#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter 4 numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c , &d);

    switch ((int)(a > b))
    {
        case 1:
            switch ((int)(a > c))
            {
                case 1:

                switch ((int)(a > d)){
                 case 1:
                    printf("%d is largest\n", a);
                    break;
                case 0:
                printf("%d is largest\n", d);
                break;
                }
                break;
                case 0:

                switch((int)(c > d))
                {
                case 1:
                    printf("%d is largest\n", c);
                    break;
                case 0:
                    printf("%d is largest\n", d);
                    break;
                }
                break;

            }
            break;

        case 0:
            switch ((int)(b > c))
            {
                case 1:
                switch((int)(b>d)){
                case 1:
                    printf("%d is largest\n", b);
                    break;
                case 0:
                    printf("%d is largest\n", d);
                    break;
                }
                break;
                case 0:
                switch(((int)(c > d))){
                    case 1:
                    printf("%d is largest\n", c);
                    break;
                    case 0:
                    printf("%d is largest\n", d);
                    break;


                }
                break;
            }
            break;
    }

    return 0;
}
