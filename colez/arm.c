#include <stdio.h>
#include <math.h>

int main()
{
   int a,n=0 , s=0;
   printf("Enter number: ");
  scanf(" %d", &a);
  int flag = a;
  while(a != 0)
   {
     a = a / 10;
     n++;
}
a = flag;
while(a !=0)
{
 int d = a %10;
  s = s + pow(d,n);
  a = a /10;
 }
if(s == flag)
{
  printf("The Number %d is an Armstrong number.\n",flag);
}
else{
    printf("The Number %d is not an Armstrong number.\n",flag);

}
}
