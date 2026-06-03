#include<stdio.h>
int main(){
int n,m;
// printf("number of rows:");
// scanf("%d",&m);
 printf("number of columns:");
 scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
         for(int j = 1;j<=n;j++)
        {
            if(i==j)
            {
                printf("*");
             }
            else if(i+j == n +1)
            {
              printf("*");
             }
             else
             {
                printf(" ");
             }


        }
        printf("\n");

    }
}
