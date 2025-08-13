#include<stdio.h>

int main()
{
    int num,flag=0;
    printf("Enter number:");
    scanf("%d",&num);

    for(int j=1;j<num;j++)
        {
            if(num%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("Prime");
        }
        else
        {
            printf("Not Prime");
        }
}