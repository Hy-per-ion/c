#include<stdio.h>
int sum(int a,int b)
{
  return a+b;
}
int diff(int a,int b)
{
  return a-b;
}
int mul(int a,int b)
{
  return a*b;
}
int div(int a,int b)
{
  return a/b;
}
int main()
{
  int a,b,n=1;
  char ch;
  while(n==1)
  {  
  printf("\n\nEnter   + for Addition\n\t- for Subtraction\n\t* for Multiplication\n\t/ for Division\n\te to Exit :");
  scanf("%s",&ch);
  if (ch=='e')
  {
    n=0;
    break;
  }
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  switch (ch)
  {
      case '+':printf("Sum of %d and %d = %d",a,b,sum(a,b));
               break;
      case '-':printf("Difference of %d and %d = %d",a,b,diff(a,b));
               break;
      case '*':printf("Multiplication of %d and %d = %d",a,b,mul(a,b));
               break;
      case '/':printf("Division of %d and %d = %d",a,b,div(a,b));
               break;
      default:printf("!!Invalid Choice!!");
              break;
  }
  }
  return 0;
}