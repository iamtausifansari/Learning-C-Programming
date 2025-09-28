// Write a program to print the sum of the first five odd numbers using for
//  loop

#include<stdio.h>
int main()
{
    int sum=0;
    int counter=0;
    for(int i=0;counter<=4;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
            counter++;
            // if(counter==5)
            // {
            //     break;
            // }
        }
    }

    printf("%d",sum);
}