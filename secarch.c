#include<stdio.h>
int main()
{
  int i,n,a[100],ch,x,s;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the arrary elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched: ");
  scanf("%d",&x);
  printf("Enter   1.Linear Search\n\t2.Binary Search: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:s=linear(a,n,x);
           break;
    case 2:bsort(n,a);
           s=binary(a,0,n-1,x);
           break;
    default:printf("!!Invalid Choice!!");
            break;
  }
  if(s==-1)
  {
    printf("Element found at Index: %d",s);
  }
  else
  {
    printf("!!Element not found in the array!!");
  }
  printf("\nElements of the array: ");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  return 0;
}
int linear(int a[],int n,int e)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]==e)
    return i+1;
  }
  return -1;
}
int bsort(int n,int *p)
{
  int i,j,t;
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      if(*(p+j)<*(p+i))
      {
        t=*(p+j);
        *(p+i)=*(p+j);
        *(p+j)=t;
      }
    }
  }
}
int binary(int a[],int b,int l,int x)
{
  if(l>=b)
  {
    int m=(b+l)/2;
    if(a[m]==x)
      return m;
    if(a[m]>x)
      return binary(a,b,m-1,x);
      return binary(a,m+1,l,x);
  }
  return -1;
}