#include<iostream>
using namespace std;
int a[100];
int top=-1,capacity=5;
void push(int x)
{
	if(top==capacity)
	cout<<"stack overflow";
	else
	{
		top++;
		a[top]=x;
	}
	
}
void pop()
{
	if(top==-1)
	cout<<"no element to pop";
	else
	{
		cout<<a[top];
		top--;
	}
}
int main()
{
	for(int i=0;i<3;i++)
	{
		push(i);
	}
	pop();
	return 0;
}
