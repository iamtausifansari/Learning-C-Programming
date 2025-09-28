#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter Phrase:");
    scanf("%s",&str);

    int count=0;
    while(str[count]!='\0')
    {
        count++;
    }
    int flag=0;
    for(int i=0;i<count/2;i++)
    {
        if(str[i]!=str[count-i-1])
        {
            flag=1;
            break;
        }
       
    }

    if(flag==0)
    {
        printf("It is Palendrom");
    }
    else
    {
        printf("Not a Palendrom");
    }
}