#include<stdio.h>
int q[10],f=-1,r=-1;
void enqueue()
{
  if (r==9)
  {
    printf("Queue is full");
  }
  if (f == -1 && r == -1) {
        f = r = 0;
    } else {
        r++;
    }
    printf("Enter the element to be enqueued: ");
    scanf("%d",q[r]);
}
void dequeue()
{
  if (f == -1) 
    {
      printf("Queue is empty!\n");
       return;
    }
    if (f == r) 
    {
      f=r=-1;
    } 
    else
    {
      f++;
    }
}
void display()
{
  if (f==-1)
  {
    printf("Queue is empty");
  }
  else
  {
    printf("\nElements of the queue are: ");
    for(int i=f;i<=r;i++)
    {
      printf("%d\t",q[i]);
    }
  }
}
int main()
{
  int ch=1;
  while(ch)
  {
    printf("\nEnter   1.Enqueue\n\t2.Dequeue\n\t3.Display: ");
    scanf("%d",&ch);
    if(ch==1)
    {
      enqueue();
    }
    else if(ch==2)
    {
      dequeue();
    }
    else if(ch==3)
    {
      display();
    }
  }
}