#include<stdio.h>
int main()
{
    int arr[2][3];
    int sum=0;

    for(int i=0;i<2;i++)
    {   
       
        for(int j=0;j<3;j++)
        {
            printf("Enter Value:");
            scanf("%d",&arr[i][j]);
        }
        
    }

    for(int i=0;i<2;i++)
    {   
        sum=0;
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
             sum=sum+arr[i][j];
            
        }
         printf("=%d",sum);
         printf("\n");
    }
    
}