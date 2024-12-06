#include<stdio.h>
int sumOfSquares(int n)
{
	int sum=0, digits;
	while(n!=0)
	{
		digits=n%10;
		sum+=digits*digits;
		n=n/10;
	}
	return sum;
}
int isHappy(int n)
{
	int slow=n, fast=sumOfSquares(n);
	
	while(slow!=fast && fast!=1)
	{
		slow=sumOfSquares(slow);
		fast=sumOfSquares(sumOfSquares(fast));
	}
	return fast==1;
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<1)
	{
		printf("The number is not a happy number");
	}
	else
	{
		if(isHappy(n))
		{
			printf("The number is a happy number");
		}
		else
		{
			printf("The number is not a happy number");
		}
	}
}
