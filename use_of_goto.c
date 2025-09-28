// goto practice

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num;
  NUM:
  printf("Enter number:");
  scanf("%d",&num);
  if(num==0)
  {
    printf("0 is neither positive not negative");
     goto NUM;
  }
  else if(num>0)
  {
    printf("You have entered:%d",num);
  }
  else
  { 
    printf("You Entered a Negative number!\n");
    goto NUM;
  }
}