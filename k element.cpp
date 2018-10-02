#include<iostream>
using namespace std;
int main()
{
	int arr[5]={4,7,1,9,6},temp,k;
	cout<<"eneter k element";
	cin>>k;
	for(int i=0;i<5;i++)
	{
	for(int j=i+1;j<5;j++)
	{
		if(arr[i]>arr[j])
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;	
		}
		}	
	}
	
	cout<<arr[k-1];
	return 0;
}
