#include <stdio.h>
int main()
{
    char letter;
    printf("enter letter");
    scanf(" %c",&letter);
    letter=letter^32;
    printf("%c\n",letter);


}
