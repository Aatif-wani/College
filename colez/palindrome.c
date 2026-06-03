#include <stdio.h>
#include <math.h>

int main()
{
   int n,rev=0;
   printf("Enter the number: ");
  scanf(" %d", &n);
  for(int i=n;i>0;i /=10)
{
    rev =(rev *10) + (i % 10);

}
   printf("The reverse of number %d is %d\n ",n,rev);
 if (n == rev)
  {
    printf("Thus its a palindrome\n");
  }
  else
  {
    printf("Thus its not a palindrome\n");
  }
  return 0;
}
