#include<stdio.h>
int main()
{
    int base;
    int power;
    int result=1;
    int i=1;
    

    printf("Enter Base:");
    scanf("%d",&base);
    printf("Enter Power:");
    scanf("%d",&power);
    

    while(i<=power)
    {
       result=result*base;
       i++;
    }
    printf("%d",result);


}