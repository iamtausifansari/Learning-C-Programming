#include<stdio.h>
int main()
{
    float arr[3];
    int count_p=0,count_n=0;
    float arr_p[3],arr_n[3];
    float sum_p=0,sum_n=0;

    for(int i=0;i<3;i++)
    {
        printf("Enter value of %d:",i+1);
        scanf("%f",&arr[i]);
    }
    
    for(int i=0;i<3;i++)
    {
        if(arr[i]>0)
        {
            arr_p[count_p]=arr[i];
            count_p++;
        }
        if(arr[i]<0)
        {
            arr_n[count_n]=arr[i];
            count_n++;
        }
    }
    
    for(int i=0;i<count_p;i++)
    {
        sum_p=sum_p+arr_p[i];
        
    }
    for(int i=0;i<count_n;i++)
    {
        sum_n=sum_n+arr_n[i];
        
    }
    printf("Sum of Positive number are:%.2f\n",sum_p);
    printf("Sum of Negative number are:%.2f",sum_n);

}