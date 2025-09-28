#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter String:");
    scanf("%s",str);

    int count=0;
    while(str[count]!='\0')
    {
        count++;
    }
     
    char temp;
    for(int i=0;i<count/2;i++)
    {
       temp=str[i];
       str[i]=str[count-i-1];
       str[count-i-1]=temp;
    }

    printf("%s",str);
}