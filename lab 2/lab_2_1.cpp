#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	char *a[50];
	int temp;
int ch=10;
	do
	{
		cout<<"enter your choice\n1.enter student name\n2.delete student name\n3.print names\n0.exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
			cout<<"Enter the no. of student\n";
			int n;
			cin>>n;
			temp=n;
			for(int i=1;i<=n;i++)
    		{
    			a[i]=(char*)malloc(50);
				fflush(stdin);
				gets(a[i]);
				fflush(stdin);
			}
			break;
		    }
			case 2:
			{
			cout<<"Enter the student no. to delete\n";
			int y;
			cin>>y;
			for(int i=y;i<=temp;i++)
    		{
						*(a+i)=*(a+i+1);
			}
			temp=temp-1;
			break;
		    }
			case 3:
				{
				
				for(int i=1;i<=temp;i++)
				{
					cout<<a[i]<<endl;
				}
				break;
			}
		}
		
		
	}while(ch!=0);
}
