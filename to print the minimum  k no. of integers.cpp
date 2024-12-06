#include<stdio.h>
int conquer(int a[],int low,int mid,int high)
{
	int length=high-low+1;
	int merged[length];
	int index1=low;
	int index2=mid+1;
	int x=0;
	while(index1<=mid && index2<=high)
	{
		if(a[index1]<=a[index2])
		{
			merged[x++]=a[index1++];
		}
		else
		{
			merged[x++]=a[index2++];
		}
	}
	while(index1<=mid)
	{
		merged[x++]=a[index1++];
	}
	while(index2<=high)
	{
		merged[x++]=a[index2++];
	}
	for(int i=0,j=low;i<length;i++,j++)
	{
		a[j]=merged[i];
	}
}
void divide(int a[], int low, int high)
{
	if(low>=high)
	{
		return ;
	}
	int mid= low+(high-low)/2;
	// (low+high)/2 has more space complexity because sometimes the returned value is out of range of int
	divide(a,low,mid);
	divide(a,mid+1,high);
	conquer(a,low,mid,high);
}
int product(int a[], int n, int k)
{
	divide(a,0,n-1);
	int product=1;
	for(int i=0;i<k;i++)
	{
		product*= a[i];
	}
	return product;
}
int main()
{
	int n,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the no. of integers to be multiplied:");
	scanf("%d",&k);
		printf("%d",product(a,n,k));
	
	
}
