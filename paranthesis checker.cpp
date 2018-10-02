#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char a[]="(a+b)+(a+b)+(a";
	int count=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(' || a[i]==')')
			count++;
	}
	
	if(count%2==0)
	cout<<"valid";
	else
	cout<<"invalid";
	
}
