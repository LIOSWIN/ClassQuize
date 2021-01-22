#include<stdio.h>
main()
{   const float pi = 3.14;
    float radius;
    puts("Enter the radius of the sphere");
    scanf("%f",&radius);
    (radius<0)?printf("radius cant be negative\n"):printf("The area is ");
    while(radius<0)
    {
        puts("input new value\n");
        scanf("%f",&radius);
    }
    printf("%f",pi*radius*radius*4);
}
