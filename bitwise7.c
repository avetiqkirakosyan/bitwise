#include <stdio.h>
int main()
{
int a=0;
int b=0;
printf("print your first number: ");
scanf("%d", &a);
printf("print your second number: ");
scanf("%d", &b);
 
a= a^b;
b= a^b;
a= a^b;

printf("swaped numbers: %d, %d", a, b);





}
