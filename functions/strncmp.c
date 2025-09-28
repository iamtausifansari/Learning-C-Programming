#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="apple";
    char b[]="app";

    int re=strncmp(a,b,3);
    if(re==0)
    {
        printf("First 3 words are equal");
    }
    else
    {
        printf("First 3 words are not equal");
    }

}