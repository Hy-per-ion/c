#include<stdio.h>
int sum(int n)
{
  if (n==0)
  {
    return 0;
  }
  else
  {
    printf("%d",n%10);
    return n%10+sum(n/10);
  }
}
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  printf("Reverse of %d is: ",n);
  printf("\nSum of digits of %d is: %d",n,sum(n));
  return 0;
}