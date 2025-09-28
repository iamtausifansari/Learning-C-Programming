//  Write a program in C to find the first five numbers divisible by 7 between 101
//  to 200 and break as soon the numbers are found

#include<stdio.h>
int main()
{
    int counter=0;
    for(int i=101;i<=200;i++)
    {
        if(i%7==0)
        {
            printf("%d ",i);
            counter++;
            if(counter==5)
            {
                break;
            }
        }
    }
}