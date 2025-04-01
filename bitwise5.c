#include <stdio.h>
int main()
{
int a=0;
int b=0;
printf ("print your first number: ");
scanf("%d", &a);
	printf("print your second num:");
scanf("%d", &b);

a|=1<<b;
printf("%d", a);







}
