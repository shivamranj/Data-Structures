#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void insertNode();
struct node
{
	int info;
	struct node *link;
	
};
struct node *Start=NULL;
struct node *createNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return(n);
}
void insertNode()
{
	printf("welcome");
	struct node *temp,*t;
	temp=createNode();
	printf("Enter a number");
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
void insertBeg(int a)
{
	struct node *temp,*t;
	temp=createNode();
	temp->info=a;
	t=Start;
	Start=temp;
	temp->link=t;
	
}
void insertatV(int a,int b)
{
	printf("shivam");
	struct node *temp,*t,*pre;
	temp=createNode();
	temp->info=a;
	t=Start;
	
	while(t->info!=b)
	{
		pre->link=t;
		t=t->link;
	}
	pre->link=temp;
	temp->link=t;
	
	
}
void del(int a)
{
	struct node *t,*prev,*temp;
	t=Start;
	while(t->info!=a)
	{
		prev=t;
		t=t->link;
	}
	temp=t;
	if(t->link==NULL);
	{
		prev->link=NULL;
	}
	t=t->link;
	prev->link=t;
	free(temp);
}
void printList(struct node *node)
{
    
    printf("\nTraversal in forward direction \n");
    while (node != NULL) {
        printf(" %d \n", node->info);
        
        node = node->link;
    }
}
void reverse()
{
	struct node *current,*prev,*next;
	current=Start;
	while(current!=NULL)
	{
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	Start=prev;
	struct node * node=Start;
	 printf("\nTraversal in backward direction \n");
    while (node != NULL) {
        printf(" %d \n", node->info);
        
        node = node->link;
	
}
}
 
int main()
{
int i;	
for(i=0;i<4;i++)
{
printf("hello");
insertNode();
}
insertBeg(6);
//insertatV(8,7);
del(4);
printList(Start);
reverse();
return 0;
}
