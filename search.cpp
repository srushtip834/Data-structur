#include<stdio.h>
int main()
{
	int arr[7],i,key,n = 5;
	int low,high,mid;
	
	printf("enter 5 elements in sort order:\n");
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("enter the element to be searched:\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while (low<=high){ 	
	 mid=(low+high)/2;
    if (arr[mid]==key)
	{
		printf("element found %d\n",mid);
		break;
	}
	else if(key<arr[mid])
		high=mid-1;
	
	else
		low=mid+1;
	
 }
 if(low>high)
 	printf("element is not found\n");
	 return 0;	
};