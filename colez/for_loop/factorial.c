//to calculate factorial of anumber
#include<stdio.h>
int main()
{
    int a;
    int f = 1;
printf("Enter Number:");
scanf("%d",&a);
for(int i =a; i>0; i--)
{
   f = f * i;
}
printf("The Factorial of the number %d is %d\n",a,f);


}

#include<stdio.h>
int main ()
{
    int rows,coloumns;
    printf("Enter the No. of Rows:");
    scanf("%d",&rows);
    printf("Enter the No. of coloumns:");
    scanf("%d",&coloumns);
    for(int i= 0;i < rows; i++)
    {
        for (int j =coloumns - i; j > 0; j--)
        {
        printf("*");

        }
             printf("\n");


    }


}
