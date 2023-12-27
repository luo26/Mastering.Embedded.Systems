#include <stdio.h>


void main()
{
	setbuf(stdout, NULL);
	char a[50]={0},c;
	int freq=0;
	printf("Enter a string: ");
	gets(a);
	printf("Enter a character to find frequency: ");
	scanf("%c",&c);

	for(int i=0;i<50;i++)
	{
		if(a[i]==c)

			freq++;
	}
	printf("Frequency of %c = %d",c,freq);


}
