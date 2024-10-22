#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number to check whether it is even or odd: ");
    scanf("%d",&x);
    switch(x%2)
    {
        case 0:
        printf("%d is a even number.\n",x);
        break;
        case 1:
        printf("%d is a odd number.\n",x);
        break;
        default:
        printf("unexpected error.");
    }
}