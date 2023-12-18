#include <stdio.h>

int main()
{
	int n,sum=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);
	if (n<0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else
	{
		for (int j=1;j<=n;j++)
			sum*=j;
		printf("Sum = %d", sum);
	}
}
