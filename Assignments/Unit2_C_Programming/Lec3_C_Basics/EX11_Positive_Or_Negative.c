#include <stdio.h>

int main()
{
	float a;
	printf("Enter a number:");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	a>0? printf("%.2f is positive",a):printf("%.2f is negative",a);
}
