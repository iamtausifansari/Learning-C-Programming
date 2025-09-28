#include<stdio.h>
int main()
{
    FILE *ptr,*ptr1;
    ptr=fopen("apple.txt","r");
    ptr1=fopen("final.txt","w");
    

    // if(ptr!= NULL)
    // {
    //     printf("File open successful\n");
    // }
    // else
    // {
    //     printf("File open unsuccessful");
    // }

    int i=fgetc(ptr);
    while(i!=EOF)
    {
        fputw(i,ptr1);
        i=fgetc(ptr);
    }

    fclose(ptr);
    fclose(ptr1);
}