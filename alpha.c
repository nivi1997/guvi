#include <stdio.h>
#include<ctype.h>
main() 
{
char ch;
scanf("%c",&ch);
if(isalpha(ch))
printf("Alphabet");
else
printf("Not Alphabet");
}
