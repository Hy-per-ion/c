#include<stdio.h>
#include<ctype.h>
#define m 20
int s[m],t=-1;
void isempty()
{
  if (t==-1)
  {
    printf("Stack Underflow");
  }
}
void isfull()
{
  if(t==m)
  {
    printf("Stack Overflow");
  }
}
void push(int x)
{
  if(t==m)
  {
    isfull();
  }
  else
  {
    s[++t]=x;
  }
}
int pop()
{
  if(t==-1)
  {
    isempty();
  }
  else
  {
    return s[t--];
  }
}
int eval(char ex[])
{
  char *e;
  int n,a=0,b=0,r;
  e=ex;
  while(*e!='\0')
  {
    if(isdigit(*e))
    {
      n=*e-'0';
      push(n);
    }
    else
    {
      a=pop();
      b=pop();
      switch (*e)
      {
      case '+':r=a+b;
              break;
      case '-':r=a-b;
              break;
      case '*':r=a*b;
              break;
      case '/':r=a/b;
              break;
      default:printf("Unknown operator");
              break;
      }
      push(r);
    }
    e++;
  }
  return pop();
}
int main()
{
  int ch=1;
  char ex[m];
  printf("Enter the expression: ");
  scanf("%s",ex);
  printf("\nThe value of entered postfix expression is: %d\n",eval(ex));
  return 0;
}