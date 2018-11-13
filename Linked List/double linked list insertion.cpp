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
struct node *createNode()
{
struct node *n;
n=(struct node *)malloc(sizeof(struct node))	;
return(n);
}
void insertNode()
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
void printList(struct node *node)
{
    
    printf("\nTraversal in forward direction \n");
    while (node != NULL) {
        printf(" %d ", node->info);

        node = node->next_link;
    }
    
 }
  void insertAt(int a)
  {
      int count=0;
  	struct node *head,*temp,*prev;
  	temp=createNode();
  	head=Start;
  	temp->info=a;
  	while(head->info!=4)
  	{
  	    count++;
  		prev=head;
  		
  		head=head->next_link;
	  }
	  if(count==0)
	  {
	      Start=temp;
	      head->prev_link=temp;
	      temp->next_link=head;
	      temp->prev_link=NULL;
	  }
	  else
	  {
	  prev->next_link=temp;
	  head->prev_link=temp;
	  temp->next_link=head;
	  temp->prev_link=prev;
	  }
	  
  }
int main()
{
	for(int i=0;i<4;i++)
	{
	insertNode();
}
insertAt(7);
printList(Start);
	return 0;
}
