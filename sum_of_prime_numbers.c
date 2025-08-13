#include<stdio.h>
int prime_sum();
int main()
{ 
//    prime_sum(); 
 printf("%d",prime_sum());
}

int prime_sum()
{    
    int i,j;
    int num=50,sum=0,flag=0;
    
    for(i=2;i<=num;i++)
    {   
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            sum=sum+i;

        }
    }
    return sum;
}