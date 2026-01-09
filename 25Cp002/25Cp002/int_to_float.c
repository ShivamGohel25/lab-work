/*integer to float and float to integer*/
#include <stdio.h>
void main()
{
    int a;
    float b;
    a=2;
    b=1.2;
    printf("your float number %.2f is converted to integer %d", b, (int)b);
    printf("\nyour integer number %d is converted to float %.2f", a, (float)a);
}
