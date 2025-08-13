#include <stdio.h>

int main()
{
    int num;
    printf("Type Your number:");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("It is Even number");
    }
    else
    {
        printf("It is odd number");
    }

    return 0;
}