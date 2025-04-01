#include <stdio.h>
int main()

{

int a=0;
int b=0;
printf("print your number: ");
scanf("%d", &a);
while(a>0)
{
b+=a|1;
	a>>=1;

}
if (b%2==1)
{

printf("kent e");
}
else{
printf ("zuyg e");
}


}
