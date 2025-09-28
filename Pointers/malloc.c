#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr,num;
  printf("Enter Number:");
  scanf("%d",&num);
  ptr=(int *)malloc(num*sizeof(int));
  
  for(int *i=ptr;i<ptr+num;i++)
  {
    printf("Enter Value for address %p:",i);
    scanf("%d",i);
  }


  
}