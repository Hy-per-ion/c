#include<stdio.h>
int s[10],t=-1;
void isempty()
{
  if(t==-1)
  {
    printf("Stack Underflow");
  }
}
void isfull()
{
  if(t==9)
  {
    printf("Stack Owerflow");
  }
}
void push()
{
  if(t==9)
  {
    isfull();
  }
  else
  {
    printf("\nEnter the element to be pushed: ");
    scanf("%d",&s[++t]);
  }
}
void pop()
{
  if(t==-1)
  {
    isempty();
  }
  else
  {
    printf("\nThe element popped: ",s[t--]);
  }
}
void display()
{
  if(t==-1)
  {
    printf("Stack is empty");
  }
  else
  {
    printf("\nElements of the stack are: ");
    for(int i=0;i<=t;i++)
    {
      printf("%d\t",s[i]);
    }
  }
}
int main()
{
  int ch=1;
  while(ch)
  {
    printf("\nEnter   1.Push\n\t2.Pop\n\t3.Display: ");
    scanf("%d",&ch);
    if(ch==1)
    {
      push();
    }
    else if(ch==2)
    {
      pop();
    }
    else if(ch==3)
    {
      display();
    }
  }
}