#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void insertNode();
struct node
{
	int info;
	struct node *prev_link;
		struct node *next_link;
	
};
	struct node *Start=NULL;
	struct node *head=NULL;
struct node *createNode()
{
struct node *n;
n=(struct node *)malloc(sizeof(struct node))	;
return(n);
}
void insertNode1()
{
    struct node *t,*temp;
	temp=createNode();
	
	printf("enter a number");
	scanf("%d",&temp->info);	
	if(Start==NULL)
	{
	    
	temp->prev_link=Start;
	Start=temp;
	temp->next_link=NULL;
}
else
{
	t=Start;
	while(t->next_link!=NULL)
	{
	    

t=t->next_link;
}

t->next_link=temp;
temp->prev_link=t;
temp->next_link=NULL;
}
}

void insertNode2()
{
    struct node *t,*temp;
	temp=createNode();
	
	printf("enter a number");
	scanf("%d",&temp->info);	
	if(head==NULL)
	{
	    
	temp->prev_link=head;
	head=temp;
	temp->next_link=NULL;
}
else
{
	t=head;
	while(t->next_link!=NULL)
	{
	    

t=t->next_link;
}

t->next_link=temp;
temp->prev_link=t;
temp->next_link=NULL;
}
}
void merge()
{
	struct node *node,*prev;
	node=Start;
	while(node!=NULL)
	{
		prev=node;
		node=node->next_link;
	}
	prev->next_link=head;
	head->prev_link=prev;
}
void printList(struct node *node)
{
    
    printf("\nTraversal in forward direction \n");
    while (node != NULL) {
        printf(" %d ", node->info);

        node = node->next_link;
    }
    
 }
int main()
{
	for(int i=0;i<3;i++)
	{
		insertNode1();
	}
	for(int i=0;i<3;i++)
	{
		insertNode2();
	}
	merge();
	printList(Start);
	return 0;
}
