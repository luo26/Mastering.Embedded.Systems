#include <stdio.h>

int main()
{
	float a;
	printf("Enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	if (a>0)
	{
		printf("%.2f is positive",a)
	}
	else if(a<0)
	{
		printf("%.2f is negative",a);
	}
	else
		printf("You entered a zero");
}
