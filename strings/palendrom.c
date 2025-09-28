#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter String:");
    scanf("%s",str);
    int counter=strlen(str);
    
    int  flag=0;
    for(int i=0;i<counter/2;i++)
    {
        if(str[i]!=str[counter-i-1])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("It is not Palendrom");
    }
    else
    {
        printf("It is Palendrom");
    }


}