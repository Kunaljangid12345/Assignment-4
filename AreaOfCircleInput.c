#include<stdio.h>
int main()
{
    float radius;
    printf("Enter the radius :");
    scanf("%f",&radius);
    float pi = 3.1415;
    float A = pi*radius*radius;
    printf("The area of the circle is : %f",A);
    return 0;
    }
