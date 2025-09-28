#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("start.txt","w");

    if(ptr==NULL)
    {
        printf("File Open Failed\n");
    }
    else
    {
        printf("File Open Success\n");
    }

    printf("Enter Numeric Value and type (-1) to stop:");
    int i;
    while(i!=-1)
    {
        scanf("%d",&i);
        fputc(i,ptr);
    }
    fclose(ptr);

    ptr=fopen("start.txt","r");
    i=fgetc(ptr);
    while(i!=EOF)
    {
        printf("%d",i);
        i=fgetc(ptr);

    }
    fclose(ptr);
}