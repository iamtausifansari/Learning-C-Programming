#include<stdio.h>
int add(int num[],int a);
int main()
{
    int num[5]={1,2,3,4,5};
    printf("%d",add(num,5));
}

int add(int num[],int a)
{
    int sum=0;
    for(int i=0;i<a;i++)
    {
        sum=sum+num[i];
    }

    return sum;
}