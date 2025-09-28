#include<stdio.h>
void fun(int *num);
int main()
{
    int num=10;
    printf("%d\n",num);
    fun(&num);
    printf("%d",num);
}

void fun(int *num)
{
    *num=*num+10;
}