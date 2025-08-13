#include<stdio.h>
int main()
{
    int a[5],b[5],small,greatest;

    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];

    }
    small=a[2];
    greatest=a[3];

     for(int i=0;i<5;i++)
    {
       if(a[i]<=small)
       {
        small=a[i];
       }
       if(a[i]>=greatest)
       {
        greatest=a[i];
       }

    }

    printf("Smallest Number is:%d\n",small);
    printf("Greatest Number is:%d",greatest);
}