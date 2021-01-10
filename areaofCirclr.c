#include<stdio.h>
//#define pi 3.14
main()
{
    float radius,area;
    const float pi = 3.14;
    printf("Enter radius of the circle:\n");
    scanf("%f",&radius);
    printf("Area of the circle of radius %f is %f",radius,pi*radius*radius);
}

