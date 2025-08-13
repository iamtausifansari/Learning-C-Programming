#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);

    for(int i=1;i<=5;i++)
    {
        if(num%2==0)
        {
            printf("%d\n",num+1);
            num=num+2;
        }
        else
        {
            printf("%d\n",num);
            num=num+2;
        }
    }
}