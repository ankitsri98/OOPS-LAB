#include<stdio.h>
int fac(int n)
{
   if(n==0)return 1;
   else
    return fac(n-1)*n;
}

int main()
{
  int n;
  scanf("%d",&n);
  n=fac(n);
  printf("%d",n);
  return 0;
}
