#include <stdio.h>


int main()
{
	setbuf(stdout, NULL);
	int num,elem;
	printf("Enter no of elements: ");
	scanf("%d",&num);
	int arr[num];

	for (int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter element to be searched: ");
	scanf("%d",&elem);
	for (int i=0;i<num;i++)
	{
		if (arr[i]==elem)
		{
			printf("Number found at the location = %d ",i+1);
			break;
		}
	}
		return 0;

	}
