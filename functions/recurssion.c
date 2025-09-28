#include<stdio.h>
int name(int);
int main()
{
     int num;
     printf("Enter Digit:");
     scanf("%d",&num);

     printf("%d",name(num));
}

int name(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
      int sum;
      sum=num*name(num-1);
    }
    
}