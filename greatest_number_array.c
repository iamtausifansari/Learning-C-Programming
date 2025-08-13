#include<stdio.h>

int main()
{
    int num[7]={1,4,-5,-99,19,5,-12};
    int max;

    max=num[5];

    for(int i=0;i<7;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }

    printf("Greatest Number is:%d",max);
}