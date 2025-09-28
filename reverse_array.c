// 2️⃣ Reverse an Array In-Place
// Write a C program to take N integers from the user, store them in an array, and then reverse the array without using another array
#include<stdio.h>
int main()
{
    int num,tmp;
    printf("How many number you want to print in reverse order:");
    scanf("%d",&num);

    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<num/2;i++)
    {
        tmp=arr[i];
        arr[i]=arr[num-i-1];
        arr[num-i-1]=tmp;
    }

    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }

}