
#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	printf("Largest number = %.2f", (a>b)? ((a>c)? a : c) : ((b>c)? b : c) );
}
