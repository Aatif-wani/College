#include<stdio.h>
int main()
#define pi 3.141
{
    printf("1.Area of triangle\n");
    printf("2.Area of square\n");
    printf("3.Area of circle\n");
    printf("4.Volume of cube\n");
    printf("5.Volume of sphere\n");
int choice;
float b , h;

printf("Enter choice no.:");
scanf("%d",&choice);
switch(choice){
    case 1:
    printf("Enter Base:\n");
    scanf("%f",&b);
    printf("Enter Height:\n");
    scanf("%f",&h);
    double a = 0.5*(b*h);
    printf("The Area of triangle is %lf\n",a);
    break;
    case 2:
    printf("Enter Length:\n");
    scanf("%f",&b);
    printf("The Area of square is %lf\n",b*b);
    break;
    case 3:
    printf("Enter radius:\n");
    scanf("%f",&b);
    printf("The Area of circle  is %lf\n",pi * b*b);
    break;
    case 4:
    printf("Enter length:\n");
    scanf("%f",&b);
    printf("The volume of cube  is %lf\n", b* b*b);
    break;
    case 5:
    printf("Enter radius:\n");
    scanf("%f",&b);
    double c = (4.0*pi*b*b*b)/3;
    printf("The volume of sphere  is %lf\n",c);
    break;
    default:
    printf("INVALID CHOICE");


 }

}


