#include<stdio.h>
int main()
{
	int arr[5],i;
    printf("Enter the value:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
    int m,freq=0;
	printf("\nEnter the no. you want to count:");
	scanf("%d",&m);
	for(i=0;i<5;i++)
	{
	    if(arr[i]==m)
	    {
	    	freq++;
		}
	}
	printf("frequency of %d is:%d",m,freq);
	return 0;
}