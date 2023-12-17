#include <stdio.h>

int main()
{
	float i,j;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f",&i);
	scanf("%f",&j);
	printf("Product: %f", i*j);
}
