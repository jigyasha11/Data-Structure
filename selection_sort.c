#include<stdio.h>
#define MAX 20
main()
{
    int arr[MAX],i,j,k,n,tmp,smallest;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    printf("Unsorted list: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        smallest=i;
        for(k=i+1;k<n;k++)
        {
            if(arr[smallest]>arr[k])
            smallest=k;
        }
        if(i!=smallest)
        {
            tmp=arr[i];
            arr[i]=arr[smallest];
            arr[smallest]=tmp;
        }
    }
    printf("Sorted list: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}