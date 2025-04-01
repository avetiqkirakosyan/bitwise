#include <stdio.h>
int main()
{
int x=0;
printf("print your number: ");
scanf("%d", &x ); 
if((x&(x-1))==0)

{
printf ("its the power of two");

}
else{
printf("its not the power of two");

}
return 0;






}
