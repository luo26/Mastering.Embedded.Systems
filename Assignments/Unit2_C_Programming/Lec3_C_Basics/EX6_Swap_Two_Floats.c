#include <stdio.h>

int main()
{
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f \n", b);
}

