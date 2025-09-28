#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter:");
    scanf("%d",&a);
    printf("Enter:");
    scanf("%d",&b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("%d\n",a);
     printf("%d\n",b);
    
}