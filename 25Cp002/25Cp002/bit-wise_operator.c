//bit-wise operator
#include <stdio.h>
void main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("\n%d x 2 is %d", a,a<<1);
    printf("\n%d / 2 is %d", a,a>>1);
}
