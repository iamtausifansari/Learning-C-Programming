#include<stdio.h>
int main()
{
    int num;
    static int sum;

    while(num!=0)
    {
        printf("Enter number:");
        scanf("%d",&num);
        sum=sum+num;
        printf("Total is:%d\n",sum);
    }
}