#include <stdio.h>


int main()
{
	setbuf(stdout, NULL);
	int i;
	float sum,avg;
	printf("Enter numbers of data:");
	scanf("%d",&i);
	float x[i];
	for (int j=0;j<i;j++)
	{
	printf("%d. Enter number: ",j+1);
	scanf("%f",&x[j]);
	sum+=x[j];
	}
	avg=sum/i;
	printf("Average = %.2f",avg);


	return 0;
}
