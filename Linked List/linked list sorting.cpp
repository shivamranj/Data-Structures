#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void insertNode();
void output(struct node *);
struct node
{
	int info;
	struct node *link;
	
};
struct node *Start=NULL;
struct node *createNode()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return n;
} 
void insertNode()
{
	struct node *temp,*t;
	temp=createNode();
	printf("Enter a number");
	scanf("%d",&temp->info);
	if(Start==NULL)
	{
		printf("nkkkk");
		Start=temp;
		temp->link=NULL;
	}
	else
	{
		printf("hkjnjj");
		t=Start;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
		temp->link=NULL;
	}
	
	}
	
	void output(struct node *node)
	{
		
		printf("traversing in forward direction");
		while(node!=NULL)
		{
			printf("%d",node->info);
			node=node->link;
		}
	}
int main()
{
	for(int i=0;i<4;i++)
	{
		insertNode();
	}
	
	output(Start);
	return 0;
	
}
