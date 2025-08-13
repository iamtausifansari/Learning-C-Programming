#include<stdio.h>
int main()
{
    int num;
    printf("Enter number counts:");
    scanf("%d",&num);
    int arr[num],sum=1;
    for(int i=0;i<num;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&arr[i]);
        sum=sum*arr[i];
    }

        printf("Total is:%d:",sum);
  
}