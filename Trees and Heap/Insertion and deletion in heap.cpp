#include<iostream>
#include<stdlib.h>
using namespace std;
void insert(int);
void swap(int *,int *);
int parent(int);
void delete1();
void siftdown(int);
int leftnode(int);
int rightnode(int);
int heap[11];
int heap_size=0;	
int main()
{
insert(3);
insert(1);
insert(5);
insert(6);
insert(9);
insert(8);
delete1();
for(int i=0;heap[i]!=0;i++)
{
	cout<<heap[i]<<" ";
}
return 0;
}
void delete1()
{
	heap[0]=heap[heap_size-1];
	heap_size--;
	if(heap_size>0)
	{
		siftdown(0);
	}
	
}
void siftdown(int node)
{
	int left,right,mini,temp;
	left=leftnode(node);
	right=rightnode(node);
	if(right>=heap_size)
	{
		if(left>=heap_size)
		{
			return;
		}
		else
		{
			mini=left;
		}
	}
	else
	{
		if(heap[left]<heap[right])
		{
			mini=left;
		}
		else
		mini=right;
	}
	if(heap[node]>heap[mini])
	{
	swap(&heap[node],&heap[mini]);
	siftdown(mini);
}
}
int leftnode(int i)
{
	return ((2*i)+1);
}
int rightnode(int i)
{
	return ((2*i)+2);
}
	void insert(int k)
	{
		heap_size++;
		int i=heap_size-1;
		heap[i]=k;
		while(i!=0 && heap[parent(i)]>heap[i])
		{
			swap(&heap[i],&heap[parent(i)]);
			i=parent(i);
			
		}
	}
	int parent(int i)
	{
		return ((i-1)/2);
	}
	void swap(int *x,int *y)
	{
		int temp;
		temp=*x;
		*x=*y;
		*y=temp;
		}
	
