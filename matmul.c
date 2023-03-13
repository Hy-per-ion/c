#include<stdio.h>
#define r 3
#define c 3
void input(int m[][c]);
void product(int m1[][c],int m2[][c],int pro[][c]);
void print(int pro[][c]);
int main()
{
  int m1[r][c],m2[r][c],pro[r][c];
  printf("\nEnter the First matrix:\n");
  input(m1);
  printf("\nEnter the Second matrix:\n");
  input(m2);
  product(m1,m2,pro);
  printf("Multiplication of the two matrices is: \n");
  print(pro);
  return 0;
}
void input(int m[][c])
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("Enter the element in %d row and %d column: ",i,j);
      scanf("%d",(*(m+i)+j));
    }
  }
}
void product(int m1[][c],int m2[][c],int pro[][c])
{
  int i,j,mul=0,k;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      for(k=0;k<c;k++)
      {
        mul+=(*(*(m1+i)+k))*(*(*(m2+k)+j));
      }
      *(*(pro+i)+j)=mul;
    }
  }
}
void print(int pro[][c])
{
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d\t",*(*(pro+i)+j));
    }
    printf("\n");
  } 
}