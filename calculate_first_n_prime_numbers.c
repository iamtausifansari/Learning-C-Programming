#include<stdio.h>

int main()
{
    int num,flag,sum=0;
    printf("Enter Number:");
    scanf("%d",&num);

    for(int j=2;j<1000;j++)
    {  
       flag=0; 
      for(int i=2;i<j;i++)
      { 
        
        if(j%i==0)
        {
            flag=1;
            break;
        }
      }
      if(flag==0)
      {
        sum=sum+j;
        num--;
      }
       
      flag=0;
      if(num==0)
      {
        break;
      }

    }

    printf("%d",sum);
}
