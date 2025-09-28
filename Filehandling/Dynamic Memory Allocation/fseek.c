#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("start.txt","r");
    int chh;
    fseek(ptr,7,0);
    while((chh=fgetc(ptr))!=EOF)
    {
        printf("%c",chh);
    }
    
    printf("\n");
    printf("%d",ftell(ptr));
    // rewind(ptr);
    // fseek(ptr,7,0);
    // while((chh=fgetc(ptr))!=EOF)
    // {
    //     printf("%c",chh);
    // }
}
