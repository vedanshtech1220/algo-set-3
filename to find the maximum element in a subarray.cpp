#include<stdio.h>
#include<limits.h>
void maximum_subarray_element(int a[],int n,int k)
{
	int max;
	for(int i=0;i<=n-k;i++)
	{
		max=INT_MIN;
		for(int j=i;j<i+k;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
			}
		}
		printf("%d ",max);
	}
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
	printf("Enter the size of subarray:");
	scanf("%d",&k);
	maximum_subarray_element(a,n,k);
}
