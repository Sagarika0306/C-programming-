#include<stdio.h>
void main()
{
    int a,b,c,d,max;
    printf("\n Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=(d>c)?a:b;
    max=(d>c)?d:c;
    printf("The maximum of three numbers is:%d",max);
}