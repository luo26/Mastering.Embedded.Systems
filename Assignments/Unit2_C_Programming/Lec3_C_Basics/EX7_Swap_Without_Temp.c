#include <stdio.h>

int main()
{
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&b);
	a = a+b;
	b = a-b;
	a = a-b
	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f \n", b);
}


