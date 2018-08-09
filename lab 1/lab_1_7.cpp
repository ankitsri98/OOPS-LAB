#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char x[100];
	cin>>x;
	int flag=0;
	int a=s.length();
	int b=strlen(x);
	for(int i=b-1;i>=0;i--)
	{
		if(s[a]==x[b])
		flag=1;
		else
		{
			flag=0;
			printf("0");
			break;
		}
		a--;
		b--;
	}
	if(flag==1)
	printf("1");
}
