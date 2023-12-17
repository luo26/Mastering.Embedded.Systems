#include <stdio.h>

int main()
{
	char a;
	printf("Enter an alphabet: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&a);
	if (a=='u' || a=='i' || a=='o' || a=='e' || a=='a' || a=='U' || a=='I' || a=='O' || a=='E' || a=='A')
		printf("%c is a vowel \n", a);
	else
		printf("%c is a consonant \n", a);
}
