#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter benchmark amount to obtain discount:");
    scanf("%f",&c);

    printf("Enter discount percentage:");
    scanf("%f",&b);

    printf("Enter Total Amount:");
    scanf("%f",&a);


    switch((int)(a>c)){
        case 1:
        printf("Final Amount After %f percent discount is:%f\n",b,a - (a*b)/100);
        break;
        case 0:
        printf("You are not eligible for discount");

    }

}
