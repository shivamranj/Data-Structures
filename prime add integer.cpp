#include<iostream>
using namespace std;
int main()
{
int n,count,flag,flag1,p1,p2;
cout<<"eneter number";
cin>>n;
for(int i=1;i<=n;i++)
{
	flag=0;
	flag1=0;
	count=n-i;
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	p1=i;
	for(int j=2;j<count;j++)
	{
		if(count%j==0)
		{
			flag1=1;
			break;
		}
	}
	if(flag1==0)
	{
	p2=count;
}
	
}
if(flag1==0 && flag==0)
	{
		cout<<p1<<"   "<<p2;
	break;	
	}
	}	
	return 0;
}
