#include<stdio.h>
int main()
{
    float arr[3];
    int count_p=0,count_n=0;

    for(int i=0;i<3;i++)
    {
        printf("Enter value of %d:",i+1);
        scanf("%f",&arr[i]);
    }
    
    for(int i=0;i<3;i++)
    {
        if(arr[i]>0)
        {
            // printf("POsitive:%.2f\n",arr[i]);
            count_p++;
        }
        if(arr[i]<0)
        {
            // printf("Negative:%.2f\n",arr[i]);
            count_n++;
        }
    }

    printf("Positive number are:%d\n",count_p);
    printf("Negative number are:%d",count_n);

}