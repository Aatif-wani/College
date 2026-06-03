#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("Enter rows: ");
  scanf(" %d", &n);
  for (int i = 1; i <= n; i++)
  {
    int starSpace = 2 * i - 1;
    int totalSpace = 2 * n - 1;
    int left = (totalSpace - starSpace) / 2;
    for (int j = 0; j < left; j++)
      printf(" ");
    for (int j = 0; j < i; j++)
      printf("* ");
    printf("\n");
  }
  for (int i = n - 1; i >= 1; i--)
  {
    int starSpace = 2 * i - 1;
    int totalSpace = 2 * n - 1;
    int left = (totalSpace - starSpace) / 2;
    for (int j = 0; j < left; j++)
      printf(" ");
    for (int j = 0; j < i; j++)
      printf("* ");
    printf("\n");
  }
  return 0;
}
