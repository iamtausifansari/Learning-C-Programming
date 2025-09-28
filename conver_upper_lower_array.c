#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter character:");
    scanf("%s",&str);

    int count=0;
    while(str[count]!='\0')
    {
        count++;
    }

    for(int i=0;i<count;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=str[i]+32;
        }
    }

    printf("%s",str);
}