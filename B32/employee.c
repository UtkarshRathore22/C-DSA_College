//structure of employee-member name,address,age,salary take data of n employee and find avg salary
#include <stdio.h>

struct Employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    float total_salary = 0;

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %s", emp[i].name);  

        printf("Address: ");
        scanf(" %s", emp[i].address);  

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        total_salary += emp[i].salary;
    }

    printf("\nAverage Salary: %.2f\n", total_salary / n);
    return 0;
}


