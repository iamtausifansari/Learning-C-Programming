#include<stdio.h>
int main()
{
    struct employee
    {
        int id;
        char name[20];
        struct dob
        {
            int date;
            char month[10];
            int year;
        }d;
    
    }emp;

    printf("Enter birth month:");
    scanf("%s",emp.d.month); 
    printf("%s",emp.d.month);
}

