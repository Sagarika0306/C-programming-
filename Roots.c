#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the values of a and b and c of a quadratic equation:");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots are %f and %f",r1,r2);
    }
    else
    {
        if(d==0)
        {
            r1=-b/(2*a);
            printf("The roots are %f and %f",r1,r1);
        }
        else
        {
            printf("The roots are imaginary");
        }
    }
}