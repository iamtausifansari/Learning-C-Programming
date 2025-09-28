#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("apple.txt","r");

    if(ptr!= NULL)
    {
        printf("File open successful\n");
    }
    else
    {
        printf("File open unsuccessful");
    }

    int i=fgetc(ptr);
    while(i!=EOF)
    {
        printf("%c",i);
        i=fgetc(ptr);
    }

    fclose(ptr);
}