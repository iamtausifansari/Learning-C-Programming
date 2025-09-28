#include<stdio.h>
void count(int);
int main()
{
    int num=1;
    count(num);
}
void count(int num)
{
    if(num>10)
    {
        return ;
    }
    else
    {
        printf("%d\n",num);
        num++;
        count(num);
    }
}
