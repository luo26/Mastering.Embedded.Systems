#include <stdio.h>

int main()
{
	char i;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&i);
	printf("ASCII value of %c = %d", i,i);
}
