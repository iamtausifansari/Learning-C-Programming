#include<stdio.h>
int main()
{
    struct stud
    {
        int roll_no;
        char name[20];
    };

    struct stud new={12,"apple"};
    struct stud *ptr=&new;

    // printf("%s",ptr -> name);
    printf("%d",(*ptr).roll_no);
}