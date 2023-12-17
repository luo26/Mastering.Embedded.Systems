#include <stdio.h>

int main()
{
	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);
	if (a%2==1)
		printf("%d is odd \n", a);
	else
		printf("%d is even \n", a);
}
