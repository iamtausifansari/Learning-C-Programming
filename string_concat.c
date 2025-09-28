#include<stdio.h>
int main()
{
    char arr1[50];
    char arr2[50];

    printf("Enter String 1:");
    scanf("%s",arr1);
    printf("Enter String 2:");
    scanf("%s",arr2);

    int count=0;
    while(arr1[count]!='\0')
    {
        count++;
    }

    for(int i=0;arr2[i]!='\0';i++)
    {
        arr1[count]=arr2[i];
        count++;
        // if(arr2[i]=='\0')
        // {
        //     break;
        // }
    }
    arr1[count]='\0';
    printf("%s",arr1);

}