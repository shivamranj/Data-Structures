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
	else if(front==0 && rear==maxi-1)
	{
		cout<<" queue overflow ";
	}
	else if(front!=0 && rear==maxi-1)
	{
		rear=0;
		a[0]=n;
	}
	else if(front==rear+1)
	{
			cout<<"queue overflow";
	}
	else
	{
		rear=rear+1;
		a[rear]=n;
	}
}
int pop()
{
	int num=a[front];
	front=front+1;
	return num;
}
int main()
{
	for(int i=0;i<=7;i++)
	{
		push(i);
	}
	cout<<pop()<<" ";
	cout<<pop()<<" ";
	cout<<pop()<<" ";
	push(8);
	push(9);
	push(10);
	push(11);
	cout<<"\n";
	cout<<"Queue is: ";
	for(int i=0;i<=7;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
