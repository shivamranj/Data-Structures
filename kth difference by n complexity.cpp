#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[7]={1,2,3,4,5,6,7};
	int count=0,j=1;
	for(int i=0;i<6;i++)
	{
		if(count==1)
		{
			
			j++;
			count=0;
			i=0;
		}
		if(a[7-j]-a[i]==4)
		{
			count=1;
			cout<<a[i]<<" "<<a[7-j]<<"\n";
		}
	}
	return 0;
}
