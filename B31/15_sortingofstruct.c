#include<stdio.h>
struct student
{
    char fname[50];
    char lname[50];
    int roll;
};
int main()
{
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("STUDENT %d",i+1);
        printf("\nEnter the First name of Student:");
        scanf("%s",s[i].fname);
        printf("Enter his Last name:");
        scanf("%s",s[i].lname);
        printf("Enter his roll no:");
        scanf("%d",&s[i].roll);
        printf("\n\n\n");
    }
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(s[min].roll>s[j].roll)
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
        printf("STUDENT %d",i+1);
        printf("\nName of Student:%s",s[i].fname);
        printf("\nHis marks:%s",s[i].lname);
        printf("\nHis roll no:%d",s[i].roll);
        printf("\n\n\n");
    }
}
