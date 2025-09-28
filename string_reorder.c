#include<stdio.h>
int main()
{
    char arr[50];
    // for(int i=0;i<5;i++)
    // {
        printf("Enter Value:");
        scanf("%s",arr);
    // }
    int count=0;
    while(arr[count]!='\0')
    {
      count++;  
    }
    // printf("%d",count);
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(arr[i]>arr[j])
            {
                char tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    printf("%s",arr);
}