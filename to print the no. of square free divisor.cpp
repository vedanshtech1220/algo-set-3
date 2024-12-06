#include<stdio.h>
#include<math.h>
int isSquareFree(int n)
{
	int prime[]={2,3,5,7,11,13,17,19};
	for(int i=0;i<8;i++)
	{
		int p=prime[i];
		if(n%(p*p)==0)
		{
			return 0;
		}
	}
	return 1;
}
int CountDivisor(int n)
{
	int count=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(i!=1 && n%i==0)
		{
			if(isSquareFree(i))
			{
				count++;
			}
			if(i!=n && n/i!=1 && isSquareFree(n/i))
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("%d",CountDivisor(n));
}
