#include<stdio.h>
int main()
{
    int arr[3][4]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
    };

    int prr[4][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }

    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            prr[j][i]=arr[i][j];
        }
 
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",prr[i][j]);
        }

        printf("\n");
    }

}