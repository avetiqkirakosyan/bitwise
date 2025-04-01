#include <stdio.h>
int main()
{
	int a=0;
		int b=0;
			int res=0;
				int c=0;
	printf("print your first number");
		scanf("%d", &a);
	printf("print your secnond number");
		scanf("%d", &b);
	printf("print your wanted bitwise opertaor\n");
printf("1 - |\n");
printf("2 - &\n");
printf("3 - ^\n");
printf("4 - <<\n");
printf("5 - >>\n");
	scanf("%d", &c);
			if(c == 1)
			{			
	res=a|b;
printf("%d", res);


	}
	else if(c==2)
	{
res=a&b;
	printf("%d", res);


	}	
	else if(c==3)
	{
	res = a ^ b;
	printf("%d\n", res);

		}
			else if(c==4)
	{
		res=a<<b;
	printf("%d", res);

			}
	else if(c==5)

	{	
	res=a>>b;
	printf("%d", res);


			}

return 0;
}
