//apply divide and conquer method and design a c program to search an element in a the given array and compute the time complexity
#include<stdio.h>
#include<time.h>
int bs(int arr[],int l, int r,int x);
int main()
{
	int a[100],n,x,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter %d elements into the array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&x);
	int res=bs(a,0,n-1,x);
	if (res==-1)
		printf("Element is not present in the array");
	else
		printf("Element is present in the array");
}
int bs(int arr[],int l, int r,int x)
{
	if(r>=1)
	{
		int mid =l+(r-l)/2;
		if (arr[mid]==x)
			return mid;
		if (arr[mid]>x)
			return bs(arr,l,mid-1,x);
			return bs(arr,mid+1,r,x);
	}
		return -1;
}
