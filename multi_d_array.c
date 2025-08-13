#include<stdio.h>
int main()
{
    int arr[2][1][2];

    for(int i=0;i<2;i++)
    {
       for(int j=0;j<1;j++)
       {
         for(int k=0;k<2;k++)
         {
            printf("Enter number:");
            scanf("%d",&arr[i][j][k]);
         }
       } 
    }

    for(int i=0;i<2;i++)
    {
       for(int j=0;j<1;j++)
       {
         for(int k=0;k<2;k++)
         {
            printf("%d",arr[i][j][k]);
         }
       } 
       printf("\n");
    }
}