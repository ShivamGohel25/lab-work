#include <stdio.h>
int main()
{
    float r,pi,area;
    pi = 3.14;
    printf("enter the value of radious:");
    scanf("%f",&r);
    area = pi*r*r;
    printf("area of the circle is:%.2f",area);
}
