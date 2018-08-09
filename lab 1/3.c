#include<stdio.h>
#include<math.h>
int first(int n)
{
   int a,b,c,d;
   a=n/1000;
   b=(n/100)%10;
   c=n%10;
   d=(n%100)/10;
   if(a==b&&c==d)
   return 1;
   else return 5;
}
int second(int n)
{
  if(sqrt(n)*sqrt(n)==n)
  return 1;
  else return 0;
}
int main()
{
  int i,j,a,x;
  for(i=1000;i<=9999;i++)
  {
     a=first(i);
     x=second(i);
     if(a==x)
       printf("%d\n",i);
   }
return 0;
}
