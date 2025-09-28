#include<stdio.h>
int main()
{
    int num,num1;
    int a,b,c;
    // int count=0;
    printf("Enter Number:");
    scanf("%d",&num);
    num1=num;
   

   a=num%10;
   a=a*a*a;
   num=num/10;

   b=num%10;
   b=b*b*b;
   num=num/10;

   c=num%10;
   c=c*c*c;
   num=num/10;

   if(num1==a+b+c)
   {
    printf("It is Armstrong number");
   }
   else
   {
    printf("It is not Armstrong number");
   }
   
   return 0;
}