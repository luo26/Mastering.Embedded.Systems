#include <stdio.h>


int main()
{
	setbuf(stdout, NULL);
	int k,l;
	printf("Enter rows and columns of matrix: ");
	scanf("%d %d",&k,&l);
	int a[k][l],b[l][k];
	printf("Enter elements of matrix: \n");
	for (int i=0;i<k;i++)
	{
		for (int j=0;j<l;j++)
		{
			printf("Enter element: a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	printf ("Entered matrix: \n");
	for (int i=0;i<k;i++)
	{
		printf("\n");
		for (int j=0;j<l;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf ("\nTranspose of matrix: ");
	for (int i=0;i<l;i++)
	{
		printf("\n");
		for (int j=0;j<k;j++)
		{
			printf("%d\t",b[i][j]);
		}
	}


	return 0;

}
