//ternary operator
#include <stdio.h>
void main()
{
    float a,b;
    printf("enter the number a and b:\n");
    scanf("%f %f", &a,&b);
    printf("%.2f is maximum\n", (a<b)?b:a);
    printf("%.2f is minimum", (a>b)?b:a);
}
