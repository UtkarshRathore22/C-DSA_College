#include<stdio.h>
struct employee
{
    char name[50];
    int age;
    float sal;
};
int main()
{
    int n;
    printf("Enter the number of employee:");
    struct employee e[n];
    for(int i=0;i<n;i++)
    {
        printf("EMPLOYEE %d",i+1);
        printf("\nEnter the name of Employee:");
        scanf("%s",e[i].name);
        printf("Enter his age:");
        scanf("%f",&e[i].age);
        printf("Enter his salarry:");
        scanf("%f",&e[i].sal);
        printf("\n\n\n");
    }
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+e[i].sal;
    }
    printf("Average salary:%f",(sum/n));
}
