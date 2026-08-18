#include<stdio.h>
int main()
{
	int a[]={5 ,3, 8, 1 ,2};
	int i, j,temp,min;
	int n=5;
	
	printf("enter the no.of element");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
	{
		min=i;
		
	for(j=i+1; j<n; j++){
		if(a[j]<a[min])
		{
			min=j;
		}
	 }
	   temp=a[i];
	   a[i]=a[min];
	   a[min]=temp;
	}
	printf("Sorted array:");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
}