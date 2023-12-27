#include <stdio.h>
#include <string.h>

void main()
{
	setbuf(stdout, NULL);
	char a[50],b[50];
	printf("Enter the string: ");
	gets(a);
	int i=strlen(a)-1;
	for (int j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	b[strlen(a)]=0;
	printf("Reverse string is : %s",b);
}

