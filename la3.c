#include <stdio.h>
main() 
{
int n1,n2,n3;
scanf("%d%d%d",&n1,&n2,&n3);
int l=n1;
if(l<n2)
l=n2;
if(l<n3)
l=n3;
printf("%d",l);
}
