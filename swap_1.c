#include<stdio.h>
void main()
{
    int a,b,t;
    printf("/n Enter two numbers:");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d,b=%d",a,b);
}