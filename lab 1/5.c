#include<stdio.h>
int main()
{
  char a[100];
  int i,j,k,x;
  j=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  j++;

  printf("%d",j);
  return 0;
  }
