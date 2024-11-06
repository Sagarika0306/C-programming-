#include<stdio.h>
void main()
{
    int l,b,a1,c1;
    float r,a2,c2;
    printf("\n Enter length of a Rectangle:");
    scanf("%d",&l);
    printf("\n Enter breath of a Rectangle:");
    scanf("%d",&b);
    a1=l*b;
    c1=2*(l+b);
    printf("\n The area of the Rectangle is:%d and The perimeter of the Rectangle is:%d",a1,c1);
    printf("\n Enter radius of a Circle:");
    scanf("%f",&r);
    a2=3.14*r*r;
    c2=2*3.14*r;
    printf("\n The area of the Circle is:%f and The circumference of the Circle is:%f",a2,c2);
}