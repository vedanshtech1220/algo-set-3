#include<stdio.h>
int ORofSubarrays(int a[], int n)
{
	int result=0;
	for(int i=0;i<n;i++)
	{
		int current_or=0;
		for(int j=i;j<n;j++)
		{
			current_or|=a[j];
			result|=current_or;
		}
	}
	return result;
}
int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",ORofSubarrays(a,n));
}
