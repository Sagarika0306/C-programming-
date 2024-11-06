#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number to check whether the number is positive or negative or zero: ");
    scanf("%d",&x);
    if (x>0)
    {
       printf("%d is a positive number.\n",x);
    }
    else if (x<0)
    {
       printf("%d is a negative number.\n",x);
    }
    else
    {
        printf("%d is zero.\n");
    }
}