// Write a C program to take N integers from the user, store them in an array, and find:
// The largest element
// The smallest element

#include<stdio.h>
int main()
{
    int num,greatest,smallest;
    printf("How many numbers you want to enter:");
    scanf("%d",&num);
    
    int arr[num];

    for(int i=0;i<num;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    greatest=arr[0];
    smallest=arr[0];

    for(int i=0;i<num;i++)
    {
        if(arr[i]>greatest)
        {
            greatest=arr[i];
        }
         if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }

    printf("Smallest number is:%d\n",smallest);
    printf("Greatest number is:%d",greatest);
}

