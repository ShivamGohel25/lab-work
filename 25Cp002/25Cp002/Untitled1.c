#include<stdio.h>
 main()
{
int age;
float height;
char  grade;
printf("enter your age:");
scanf("%d",&age);

printf("enter your height:");
scanf("%f",&height);

printf("enter your grade:");
scanf(" %c",&grade);

printf("\n you entered:");
printf("\nAge = %d",age);
printf("\nheight =%.2f",height);
printf("\nGrade =%c",grade);

}
