#include<stdio.h>
void spiral_matrix(int a[][100],int row, int col)
{
	int top=0,left=0,right=row-1, bottom=col-1;
	while(top<=bottom && left<=right)
	{
		for(int i=left;i<right;i++)
		{
			printf("%d",a[top][i]);
		}top++;
		for(int i=top;i<bottom;i++)
		{
			printf("%d",a[i][right]);
		}right--;
		if(top<=bottom)
		{
			for(int i=right;i>=left;i--)
			{
				printf("%d",a[bottom][i]);
			}bottom--;
		}
		if(left<=right)
		for(int i=bottom;i>=top;i--)
		{
			printf("%d",a[i][left]);
		}left++;
	}
}
int main()
{
	int row, col;
	printf("Enter the size of row:");
	scanf("%d",&row); 
	printf("Enter the size of row:");
	scanf("%d",&row);
	printf("Enter the elements of matrix:");
	int a[100][100];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("%d",spiral_matrix(a,row,col));

	return 0;
}
