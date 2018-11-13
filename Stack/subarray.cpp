#include<iostream>
using namespace std;
int main()
{
	int arr[5]={4,2,-3,1,6},count=0;
	{
		for(int i=0;i<5;i++)
		{
			count=arr[i];
			for(int j=i+1;j<5;j++)
			{
			count=count+arr[j];
			if(count==0)
			{
				cout<<"true";
				break;
				}	
			}
		}
	}
}
