#include<stdio.h>
int main()
{    
    int i;
    struct stud
    {
        int roll_no;
        char name[20];
    };

    struct stud new={12,"apple"};
    struct stud new1={12,"apple"};
    i=new.roll_no==new1.roll_no;
    printf("%d",i);
}