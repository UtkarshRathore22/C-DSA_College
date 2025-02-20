#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    char address[50];
    float sal;
};
int main()
{
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Employee %d",i+1);
        printf("\nEnter the First name of Employee:");
        scanf("%s",s[i].name);
        printf("Enter his  address:");
        scanf("%s",s[i].address);
        printf("Enter his salary:");
        scanf("%f",&s[i].sal);
        printf("\n\n\n");
    }
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(s[min].name,s[j].name)>0)
            {
                min=j;
            }
        }
        struct student temp=s[min];
        s[min]=s[i];
        s[i]=temp;        
    }
    for(int i=0;i<n;i++)
    {
        printf("Employee %d",i+1);
        printf("\nName of Employee:%s",s[i].name);
        printf("\nHis Address:%s",s[i].address);
        printf("\nHis salary:%f",s[i].sal);
        printf("\n\n\n");
    }
}
