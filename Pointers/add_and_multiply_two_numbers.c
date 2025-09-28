#include<stdio.h>
void fun(int a,int b,int *sum,int *prod);
int main()
{
    int a,b,sum,prod;
    printf("Enter Value of a:");
    scanf("%d",&a);
    printf("Enter Value of b:");
    scanf("%d",&b);
    fun(a,b,&sum,&prod);
    printf("Sum of a+b=%d\n",sum);
    printf("Product of a*b=%d",prod);
}

void fun(int a,int b,int *sum,int *prod)
{
    *prod=a*b;
    *sum=a+b;
   
}