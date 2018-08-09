#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[100];
	char *c;
	printf("enter the string\n");
	gets(x);
	c=x;
	int i;
	for(i=0;*(c+i)!='\0';i++);
	cout<<"length of string is>>"<<i;
	
}
