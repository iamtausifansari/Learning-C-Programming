#include<stdio.h>
int main()
{
    char arr[]="apple";
    char *a;
    a=&arr[0];
    while(*a!='\0')
    {
      printf("%c",*a);
      a++;
    }
    
}