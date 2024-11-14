#include<stdio.h>
void main()
{
    int num1,num2,num3,greater,greatest;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
        greater=num1;
    else
        greater=num2;
    if(greater>num3)
        greatest=greater;
    else
        greatest=num3;
    printf("The maximum number is:%d",greatest);
}