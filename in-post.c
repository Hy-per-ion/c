#include<stdio.h>
#include<ctype.h>
#define m 15
char s[m],t=-1;
void isempty()
{
  if (t==-1)
  {
    printf("Stack Underflow");
  }
}
void isfull()
{
  if (t==m)
  {
    printf("Stack Overflow");
  }
}
void push(char x)
{
  char x;
  if(t==m)
    isfull();
  else
    s[++t]=x;
}
void pop()
{
  if(t==-1)
    isempty();
  else
    return s[t--];
}
int priority(char x)
{
  if(x=='(')
    return 0;
  if(x=='+'||x=='-')
    return 1;
  if(x=='*'||x=='/')
    return 2;
  if(x=='^')
    return 3;
}
int main()
{
  char a[m],*e,x;
  int ch=1;
  while (ch)
  {
    printf("\nEnter the infix expresion: ");
    scanf("%s",a);
    e=a;
    printf("\nThe postfix expresion: ");
    while(*e!='\0')
    {
      if(isalnum(*e))
        printf("%c",*e);
      else if(*e=='(')
        push(*e);
      else if (*e==')')
      {
        while (x==pop()&&x!='(')
        {
          printf("%c",x);
        }
      }
      else
      {
        while(priority(s[t])>=priority(*e))
          printf("%c",pop());
          push(*e);
      }
      e++;
    }
    while(t!=-1)
      {
        printf("%c\n",pop());
        break;
      }
  }
  return 0;
}