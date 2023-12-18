#include <stdio.h>

int main()
{
	int n,sum=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);
	for (int j=0;j<=n;j++)
		sum+=j;
	printf("Sum = %d", sum);
}
