#include <stdio.h>
int main(){
	float  a [2][2];
	float b[2][2];
	printf("enter the element of 1st matrix\n");
	for(int i =0;i<2;i++)
	{
		for(int j =0;j<2;j++)
		{
			printf("enter element %d%d: ",i+1,j+1);
					scanf("%f;",&a[i][j]);
		}
	}
	printf("enter the element of 2nd matrix\n");
	for(int i =0;i<2;i++)
	{
		for(int j =0;j<2;j++)
		{
			printf("enter element %d%d: ",i+1,j+1);
						scanf("%f;",&b[i][j]);
		}
	}
	printf("Sum of matrix:\n");
	for(int i =0;i<2;i++)
	{
		for(int j =0;j<2;j++)
		{
			printf("%.1f\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
