/*fahrenheit to centigrade and centigrade to fehrenheit*/
#include <stdio.h>
void main()
{
    int a;
    printf("if you want to convert centigrade into fahrenheit, the press any non-zero number\n");
    printf("if you want to convert fahrenheit to centigrade, then press zero\n");
    scanf("%d", &a);
    if(a!=0)
    {
        float cent;
        printf("\n enter temperature in centigrade:");
        scanf("%f", &cent);
        printf("temperature in fahrenheit is:%.f\n", (cent)*(1.8)+32);
    }
    else
    {
        float fahr;
        printf("enter temperature in fahrenheit:\n");
        scanf("%f", &fahr);
        printf("temperature in centigrade is:%.f", (fahr-32)*5/9);
    }

}
