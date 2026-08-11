#include<stdio.h>
int main()
{
    int a[5], i, j, swap;
    printf("\nEnter Any 5 Array elements For Bubble Sort : ");
    for(i = 0; i < 5; i++)
    	{
        	scanf("%d", &a[i]);
    	}
    printf("\nArray Before Bubble Sort: ");
	for(i = 0; i < 5; i++)
		{
        	printf("%d ", a[i]);
		}
    for(i = 0; i < 4; i++)
    	{
        	for(j = 0; j < 4 - i; j++)
        		{
           			if(a[j] > a[j+1])
            			{
               				swap = a[j];
                			a[j] = a[j+1];
                			a[j+1] = swap;
            			}
        		}
    	}
    printf("\nArray After Bubble Sort: ");
	for(i = 0; i < 5; i++)
		{
        	printf("%d ", a[i]);
		}
}
