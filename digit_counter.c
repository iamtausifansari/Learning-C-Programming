#include<stdio.h>
int main()
{
    int num;
    int counter=0;
    printf("Enter Number:");
    scanf("%d",&num);

    while(num!=0)
    {
        num=num/10;
        counter++;
    }

    printf("%d",counter);
}