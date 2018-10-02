#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int a[8];
int maxi=8;
int rear=-1,front=-1;
void push(int n)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		a[0]=n;
		
	}
	else if(rear==maxi-1 && front==0)
	{
		cout<<"queue overflow";
	}
	else if(front==rear+1)
	{
	    cout<<"queue overflow";
	}
	else
	{
		rear=(rear+1)%maxi;
		a[rear]=n;
		
	}
}
int pop()
{
    int num;
    
	num=a[front];
	front=(front+1)%maxi;
	return num;
    
}
int main()
{
	for(int i=0;i<8;i++)
	{
		push(i);
	}
	cout<<pop()<<" ";
	cout<<pop()<<" ";
	cout<<pop()<<" ";
	push(10);
	push(11);
	push(12);
	push(13);
	for(int i=0;i<8;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}

