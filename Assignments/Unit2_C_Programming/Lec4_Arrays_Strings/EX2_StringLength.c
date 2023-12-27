#include <stdio.h>


void main()
{
	setbuf(stdout, NULL);
	char a[50]={0};
	int len;
	printf("Enter a string: ");
	gets(a);
	for(len=0;a[len]!=0;len++);
	printf("Length of string: %d",len);
}

