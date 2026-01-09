#include <stdio.h>
void main()
{
    int a;
    float b;
    char c;
    printf("put value of integer:\n");
    scanf("%d",&a);
    printf("put the value of float:\n");
    scanf("%f",&b);
    printf("put the value of character:\n");
    scanf("%c",&c);
    c=getchar(); //character
    printf("value of integer is:%d\n",a);
    printf("value of float is:%.2f\n",b);
    printf("the character is:%c\n",c);

}
