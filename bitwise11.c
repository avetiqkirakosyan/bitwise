#include <stdio.h>
int main()
{
int num=0;
int mask=0;
int res=0;
int shift_mask=0;
printf("print the num: ");
scanf("%d", &num);
printf("print the mask: ");
scanf("%d", &mask);
printf("print your wanted mask left shift: ");
scanf("%d", &shift_mask);
mask=mask << shift_mask;
res=mask & num;
printf("%d", res);
return 0;







}
