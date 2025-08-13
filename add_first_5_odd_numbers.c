#include<stdio.h>
int main()
{
    int num=5,sum=0;
    int flag=num*2;
    for(int i=1;i<=flag;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }

    }

     printf("%d",sum);
}