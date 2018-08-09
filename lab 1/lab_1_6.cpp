#include<bits/stdc++.h>
using namespace std;

int main()
{
char a[1000],b[1000],*c,*d;
cin>>a>>b;
c=a;
d=b;
while(*c!='\0')
{
   c++;
}	
while(*d!='\0')
{
*c=*d;
c++;
	d++;
}
c='\0';
printf("%s",a);
}
