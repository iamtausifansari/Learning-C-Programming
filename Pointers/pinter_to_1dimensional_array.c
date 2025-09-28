#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int *ptr=&arr[0];
    for(int i=0;i<10;i++)
    {
        printf("Eelement:%d and Address:%p\n",*ptr,ptr);
        ptr++;
    }
}