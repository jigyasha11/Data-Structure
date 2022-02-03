#include<stdio.h>
#include<stdlib.h>
main()
{
	int arr[25],n,i,item;
	printf("No. of elements you want to enter: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element: ");
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(item==arr[i])
		{
			printf("%d found at position %d",item,i+1);
			break;
		}
	}
	if(i==n)
	printf("Item %d not found in array",item);
}
