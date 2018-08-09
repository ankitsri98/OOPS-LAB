#include<bits/stdc++.h>
using namespace std;
struct automob{
	char sn[3];
	int year;
	int quant;
	char matter[100];
	
}a[10];
int main()
{
for(int i=0;i<60;i++)
{
    cout<<i+1<<"\n";
	cout<<"enter serial no\n";
	fflush(stdin);
	cin.get(a[i].sn,3);
	fflush(stdin);
	cout<<"enter the year\n";
	cin>>a[i].year;
	cout<<"enter the quantity \n";
	cin>>a[i].quant;
	cout<<"enter the matter \n";
	fflush(stdin);
	cin.get(a[i].matter,100);
	fflush(stdin);
}
for(int i=0;i<60;i++)
{

	cout<<"\n serial no:";
	cout<<a[i].sn;
	cout<<"\n year:";
	cout<<a[i].year;
	cout<<"\n quantity :";
	cout<<a[i].quant;
	cout<<"\n matter :";
	cout<<a[i].matter;
}
}
