#include<stdio.h>
int x=0;
int toh(int n, char a,char b,char c)
{
  printf("%d)",++x);
  if(n==1)
  {
    printf("Move disk 1 from peg %c to peg %c\n",a,c);
    return;
  }
  toh(n-1,a,c,b);
  printf("Move disk %d from peg %c to peg %c\n",n,a,c);
  toh(n-1,b,a,c);
}
int main()
{
  int n;
  printf("Enter the number of disks in the first peg: ");
  scanf("%d",&n);
  printf("\nSteps:\n");
  toh(n,'A','B','C');
  return 0;
}