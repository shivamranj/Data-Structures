#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void insertNode();
struct	int info;
 node
{
	struct node *link;
	
};
struct node *Start=NULL;
struct node *head=NULL;
struct node *createNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return(n);
}
void insertNode1()
{
	printf("welcome");
	struct node *temp,*t;
	temp=createNode();
	printf("Enter a number in list1 ");
	scanf("%d",&temp->info);
	if(Start==NULL)
	{
		
		Start=temp;
		temp->link=NULL;
		
	}
	else
	{
		t=Start;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
		temp->link=NULL;
	}
}
void insertNode2()
{
	printf("welcome");
	struct node *temp,*t;
	temp=createNode();
	printf("Enter a number in list 2 ");
	scanf("%d",&temp->info);
	if(head==NULL)
	{
		
		head=temp;
		temp->link=NULL;
		
	}
	else
	{
		t=head;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
		temp->link=NULL;
	}
}
void sort()
{
	struct node *node1,*node2,*i,*j;
	
	node1=head;
	node2=Start;
	int a[100],a1[100],k=0,count=0;
	for(i=node2;i!=NULL;i=i->link)
	{
		for(j=node1;j!=NULL;j=j->link)
		{
			if(i->info==j->info)
			{
			a[k]=i->info;
			k++;
			count++;
			}
		}
	}
	for(int l=0;l<100;l++)
	{
		a1[l]=-1;
	}
	for(int l=0;l<count;l++)
	{
		if(a1[a[l]]==-1)
		{
			cout<<a[l]<<" ";
			a1[a[l]]=0;
		}
		
	}
	
}
int main()
{
insertNode1();
insertNode1();
insertNode1();
insertNode1();
insertNode1();
insertNode2();
insertNode2();
insertNode2();
sort();
}
