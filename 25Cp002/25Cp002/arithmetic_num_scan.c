/*arithmetic operations by scanning numbers*/
#include <stdio.h>
void main()
{
    int a,b;
    printf("enter the number a:");
    scanf("%d", &a);
    printf("\nenter the number b:");
    scanf("%d", &b);
    printf("\nthe sum of a and b is:%d", a+b);
    printf("\nthe subtraction of a and b is:%d", a-b);
    printf("\nthe multiplication of a and b is:%d", a*b);
    printf("\nthe division of a and b is:%.2f", a/(float)b);
    printf("\nthe modulo of a and b is:%d", a%b);
}
