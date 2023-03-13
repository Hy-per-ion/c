#include<stdio.h>
#define r 3
#define c 3
int main()
{
  int m1[r][c],m2[r][c],s[r][c];
  printf("\nEnter the first matrix: \n");
  input(m1);
  printf("\nEnter the second matrix: \n");
  input(m2);
  sum(m1,m2,s);
  printf("Sum of the 2 matrices is: \n");
  print(s);
  return 0;
}
void input(int m[][c])
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("Enter thr element in %d row and %d column: ",i,j);
      scanf("%d",(*(m+i)+j));
    }
  }
}
void sum(int m1[][c],int m2[][c],int s[][c])
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      *(*(s+i)+j)=(*(*(m1+i)+j))+(*(*(m2+i)+j));
    }
  }
}
void print(int s[][c])
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d\t",*(*(s+i)+j));
    }
    printf("\n");
  }
}