#include<stdio.h>
struct date
{
    int day,month,year;
};
struct Employee
{
    char name[50];
    int id;
    float salary;
    struct date birthday;
};
int main()
{
    int n;
    printf("Enter the number of Employee:");
    scanf("%d",&n);
    struct Employee e[n];
    for(int i=0;i<n;i++)
    {
        printf("Employee %d",i+1);
        printf("\nEnter the Name of Employee:");
        scanf("%s",e[i].name);
        printf("Enter his ID:");
        scanf("%d",&e[i].id);
        printf("Enter his salary:");
        scanf("%f",&e[i].salary);
        printf("Enter his year of birth:");
        scanf("%d",&e[i].birthday.year);
        printf("Enter his month of birth:");
        scanf("%d",&e[i].birthday.month);
        printf("Enter his Day of birth:");
        scanf("%d",&e[i].birthday.day);
        printf("\n\n\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("Employee %d",i+1);
        printf("\nName of Employee:%s",e[i].name);
        printf("\nHis Address:%d",e[i].id);
        printf("\nHis salary:%f",e[i].salary);
        printf("\nHis DOB:%d/%d/%d",e[i].birthday.day,e[i].birthday.month,e[i].birthday.year);
        printf("\n\n\n");
    }
    
}
