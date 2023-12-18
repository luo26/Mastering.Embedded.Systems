#include <stdio.h>

int main()
{
	char n;
	float op1,op2,result;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdout);
	scanf("%c",&n);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&op1,&op2);
	if(n=='+')
	{
		result = op1+op2;
	}
	else if (n=='-')
	{
		result = op1-op2;
	}
	else if(n=='*')
	{
		result = op1*op2;
	}
	else if(n=='/')
	{
		result = op1/op2;
	}
	printf(" %.1f %c %.1f = %.1f",op1,n,op2,result);
}
