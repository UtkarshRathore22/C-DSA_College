// WAP to take ten integer input from usuer and store them in array and find their sum
#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0 ; i<10 ; i++)
    {
        printf("Enter the element number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum=sum+arr[i];
    }
    printf("Your array:\n");
    for(int i=0 ; i<10 ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nTheir sum:%d",sum);
    return 0;
}