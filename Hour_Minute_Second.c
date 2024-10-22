#include<stdio.h>
void main()
{
    int h,m,s,ts;
    printf("\n Enter hour:");
    scanf("%d",&h);
    printf("\n Enter min:");
    scanf("%d",&m);
    printf("\n Enter sec:");
    scanf("%d",&s);
    ts=h*3600+m*60+s;
    printf("The total second is:%d",ts);
}