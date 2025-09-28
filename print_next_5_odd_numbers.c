// Write a program to print the first five odd numbers after any number input
//  from the keyboard.

#include<stdio.h>
int main()
{
    int  num;
    int counter=0;
    printf("Enter Number:");
    scanf("%d",&num);

    for(;counter<5;num=num+2)
    {
        if(num%2==0)
        {
            printf("%d ",num+1);
        }
        else
        {
            printf("%d ",num+2);
        }
        counter++;
    }
}