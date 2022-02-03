#include<stdio.h>
#include<stdlib.h>
main()
{
	int arr[10],start,end,middle,n,i,item;
	printf("Enter no. of element in array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element: ");
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&item);
	start=0;
	end=n-1;
	middle=(start+end)/2;
	while(item!=arr[middle] && start<=end)
	{
		if(item>arr[middle])
			start=middle+1;
		else
			end=middle;
		middle=(start+end)/2;
	}
	if(item==arr[middle])
		printf("%d found at position %d",item,middle+1);
	if(start>end)
		printf("%d not found in array",item);
}
