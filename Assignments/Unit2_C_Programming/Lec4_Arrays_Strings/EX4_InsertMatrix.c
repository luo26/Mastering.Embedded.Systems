#include <stdio.h>


int main()
{
	setbuf(stdout, NULL);
	int num,elem,loc;
	printf("Enter no of elements: ");
	scanf("%d",&num);
	int arr[num+1];

	for (int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter element to be inserted: ");
	scanf("%d",&elem);

	printf("Enter the location: ");
	scanf("%d",&loc);

	for (int i=num;i>=loc-1;i--)
	{
		arr[i]=arr[i-1];
	}
		arr[loc-1]=elem;

	for (int i=0;i<num+1;i++)
	{
		printf("%d ",arr[i]);
	}


	return 0;

}
