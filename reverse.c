#include<stdio.h>
void main()
{
    int a,rev;
    printf("\n Enter a two digit number:");
    scanf("%d",&a);
    rev=(a%10)*10+(a/10);
    printf("\n After reversing,the new value is:%d",rev);
}