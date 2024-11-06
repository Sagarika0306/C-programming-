#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three number to check max:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d ia a maximum number",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is a maximum number",b);
    }
    else
    {
        printf("%d is a maximum number",c);
    }
}
