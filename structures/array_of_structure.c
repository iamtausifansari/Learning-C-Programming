#include<stdio.h>
struct employee
    {
        int emp_id;
        int age;
        int salary;
    };

int main()
{
   struct employee emp[2];

   
    for(int j=0;j<2;j++)
    {
        printf("Enter Detail for Employee %d\n",j+1);
        printf("Enter Employee Id:");
        scanf("%d",&emp[j].emp_id);
        printf("Enter Age:");
        scanf("%d",&emp[j].age);
        printf("Enter Salary:");
        scanf("%d",&emp[j].salary);
    }

    for(int j=0;j<2;j++)
    {
        printf("Detail for Employee %d\n",j+1);
        printf("Employee Id:%d\n",emp[j].emp_id);
        printf("Age:%d\n",emp[j].age);
        printf("Salary:%d\n",emp[j].salary);
    }
   
}