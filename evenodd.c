#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number to check wheter it is even or odd");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is even./n",x);
    }
    else
    {
        printf("%d is odd./n",x);
    }
}