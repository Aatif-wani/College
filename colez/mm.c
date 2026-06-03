#include <stdio.h>
// int main()
// {
//   int a ;
//   printf("Enter number:");
//   scanf("%d",&a);
// // for(int j =1; j<=a;j++)
// // {
// //     int b = 1;
// //   for(int i = 1; i<=j; i++){
// //        b = b * i;

// // }
// int b = 1;
// for(int i = 1; i<=a; i++){

//         b = b * i;
//         printf("%d  %d\n",i,b);

// }

// }
//fibonacii
// int main()
// {
//     int n ;
//     printf("Enter number:");
//        scanf("%d",&n);
//     int a = 1;
//        int b= 1;
//        int sum;
//     //    printf("1 1 ");
//     for(int i = 0; i < n -2;i ++)
//     {
//         sum = a + b;
//         b = a;
//         a = sum;
// }
//      printf("%d \n",sum);

// }
//raised to power
// //armstrong
int main(){
    int a,b = 1,count = 0,sum = 0;
     printf("Enter number:");
       scanf("%d",&a);
  int flag = a;
       while(a>0)
       {
        a = a/10;
         count++;
       }
       a = flag;
while(a>0)
{
    int c = 1;
       b = a % 10;
       for(int i = 0;i<count;i++)
       {
          c = c * b;
       }
        sum = sum + c;
        a = a /10;

}

if(sum == flag)
{
    printf("The number %d is armstrong\n",flag);
}
else{
    printf("not an armstrong number\n");
}
}
