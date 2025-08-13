#include<stdio.h>

int main()
{
    int num[7]={1,4,-5,-99,19,5,-12};
    int min;

    min=num[5];

    for(int i=0;i<7;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }

    printf("Smallest Number is:%d",min);
}