#include<stdio.h>
int main()
{
    int arr[6],even=0,odd=0;

    for(int i=0;i<6;i++)
    {
        printf("Enter Value %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+arr[i];
           
        }
        else
        {
            odd=odd+arr[i];
            
        }
        
    }
  

      printf("ODD:%d\n",odd);
      printf("EVEN:%d",even);
    
}