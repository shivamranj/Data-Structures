#include<iostream>
using namespace std;
int main()
{
	int arr[5],max=0,min;
	for(int i=0;i<5;i++)
	{
		cout<<"eneter a number";
		cin>>arr[i];
	min=arr[0];
	if(max<arr[i])	
	{
		max=arr[i];
	}
		
	
	if(min>arr[i])	
	{
		min=arr[i];
	}
	}
	cout<<max;
	cout<<min;
	return 0;
}
