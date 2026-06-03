#include<stdio.h>
int comb(int x, int y);
int fact(int a);
int main()
{
    int n = 10;
    int icj = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j= 0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int j =0;j<=i;j++)
        {
            int k = i -j;
              printf("%d ",icj);
             icj = comb(i,j);
        }
        printf("\n");
    }

}
int comb(int n, int r)
{
 int ncr = fact(n)/(fact(r)*fact(n-r));
 return ncr;
}
int fact(int a)
{
    int c= 1;
    for(int i = 1;i<=a;i++)
    {
        c = c * i;
    }
    return c;
}
