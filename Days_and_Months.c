#include<stdio.h>
void main()
{
    int d,m,rd;
    printf("\n Enter the number of days:");
    scanf("%d",&d);
    m=d/30;
    rd=d%30;
    printf("\n The moths is:%d and Days are:%d",m,rd);
}