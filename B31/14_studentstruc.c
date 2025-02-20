#include<stdio.h>
struct student
{
    char name[50];
    float marks;
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
        printf("\nEnter the name of Student:");
        scanf("%s",s[i].name);
        printf("Enter his marks:");
        scanf("%f",&s[i].marks);
        printf("Enter his roll no:");
        scanf("%d",&s[i].roll);
        printf("\n\n\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("STUDENT %d",i+1);
        printf("\nName of Student:%s",s[i].name);
        printf("\nHis marks:%.2f",s[i].marks);
        printf("\nHis roll no:%d",s[i].roll);
        printf("\n\n\n");
    }
}
