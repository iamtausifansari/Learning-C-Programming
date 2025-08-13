#include<stdio.h>

int main()
{   
    int num=0;

    for(int i=1;i<=6;i++)
    {
        for(int u=1;u<=i;u++)
        {
          printf("%d ",num);
        }
        
        num++;
        printf("\n");
    }

    return 0;
}