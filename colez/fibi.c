#include <stdio.h>
#include <math.h>

int main()
{
   int n,a=0 , b =1, s;
   printf("Enter number of terms: ");
  scanf(" %d", &n);
  printf("%d %d ", a , b);
 for(int i=2; i<n; i++)
{
    s = a + b;
    printf("%d ",s);
    a = b;
    b = s;

}
printf("\n");
return 0;
}
