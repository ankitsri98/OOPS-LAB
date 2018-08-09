#include<bits/stdc++.h>
using namespace std;

void minmax(int[],int,int*,int*);


int main()
{
	int l,b[1000],mi,ma;
	printf("enter length of array\n");
	cin>>l;
	printf("enter array\n");
	for(int i=0;i<l;i++)
	cin>>b[i];
	minmax(b,l,&mi,&ma);
}
void minmax(int a[],int length,int *min,int *max)
{
	int x=0,y=100000;
	for(int i=0;i<length;i++)
	{
		if(a[i]>x)
		x=a[i];
		if(a[i]<y)
		y=a[i];
	}
	*min=y;
	*max=x;
	cout<<"minimum "<<*min<<endl;
	cout<<"maximum "<<*max<<endl;
	
}
