#include<stdio.h>
void main()
{
    double f,c;
    printf("\n Enter Fahrenheit degree:");
    scanf("%lf",&f);
    c=((f-32)*5)/9;
    printf("Celcius Temperature:%lf",c);
}