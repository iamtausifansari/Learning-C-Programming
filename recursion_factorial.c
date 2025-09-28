#include <stdio.h>
int fact(int );
int main() {
    
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    printf("%d",fact(num));

}

int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
