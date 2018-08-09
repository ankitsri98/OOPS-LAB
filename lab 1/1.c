#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
i=n%7;
n=n+(7-i);
printf("%d\n",n);
return 0;
}
