#include<stdlib.h>
#include<iostream>
using namespace std;
int a[6];
int front=-1,rear=-1;
int maxi=6;
void insertatB(int n)
{
 if(front==-1 && rear==-1)
 {
 	front=0;
 	rear=0;
 	a[rear]=n;
 }
 else if(rear==maxi-1)
 {
 	rear=0;
 	a[rear]=n;
 }
 else if(rear==maxi-1 && front==0)
	{
		cout<<"queue overflow";
	}
 else
 {
 	rear=(rear+1)%maxi;
 	a[rear]=n;
 }
}
void insertatE(int n)
{
	
	if(front==0)
	{
		front=maxi-1;
		a[front]=n;
	}
	else if(rear==maxi-1 && front==0)
	{
		cout<<"queue overflow";
	}
	else
	{
		front=(front-1)%maxi;
		a[front]=n;
	}
}
int deleteatB()
{
	int n;
	if(front==-1 && rear==-1)
	{
		cout<<"queue under flow";
		return 0;
	}
	else if(rear==0)
	{
		n=a[rear];
		rear=maxi-1;
		return n;
	}
	else
	{
		n=a[rear];
		rear=(rear-1)%maxi;
		return n;
	}
}
int deleteatE()
{
	int n;
	if(front==-1 && rear==-1)
	{
		cout<<"queue under flow";
		return 0;
	}
	else if(front==maxi-1)
	{
	   
		n=a[front];
		front=0;
		return n;
	}
	else
	{
		
		n=a[front];
		front=(front+1)%maxi;
		return n;
	}
}
int main()
{
	insertatB(4);
	insertatB(3);
	insertatB(2);
	insertatE(1);
	insertatE(5);
	insertatE(6);
	cout<<deleteatB()<<" ";
	cout<<deleteatB()<<" ";
	cout<<deleteatE()<<" ";
	cout<<deleteatE()<<" ";
	cout<<deleteatE()<<" ";
	cout<<deleteatE()<<" ";
	insertatB(10);
	insertatB(20);
	
	
	return 0;
}
