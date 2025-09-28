#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter Value %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        for(int j=1+i;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
}