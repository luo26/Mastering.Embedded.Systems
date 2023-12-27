#include <stdio.h>


void main()
{
	setbuf(stdout, NULL);
	float a[2][2],b[2][2],sum[2][2];
	printf("Enter the elements of the 1st matrix\n");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}

	}
	printf("Enter the elements of the 2nd matrix\n");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			scanf("%f",&b[i][j]);
		}

	}
	printf("\nSum of Matrix:");
	for (int i=0;i<2;i++)
	{
		printf("\n");
		for (int j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%.1f \t",sum[i][j]);
		}

	}

}
