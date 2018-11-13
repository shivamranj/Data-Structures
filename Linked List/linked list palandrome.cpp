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
int arr[20];
int arr1[20];
int count=0;
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
void printList(struct node *node)
{
    int i=0;
   // printf("\nTraversal in forward direction \n");
    while (node != NULL) {
       // printf(" %d \n", node->info);
        arr[i]=node->info;
        
        node = node->link;
        i++;
        count++;
    }
}
int palandrome()
{
    
    int flag=0;
    for(int i=0;i<count;i++)
    {
        if(arr[i]==arr[count-1-i])

        
            flag++;
        else
        break;
    }
    if(flag==count)
    {
      return 1;  
    }
    else
    {
        return 0;
    }
}

int main()
{
int i;	
for(i=0;i<3;i++)
{
printf("hello");
insertNode();
}

printList(Start);
int r=palandrome();
if(r==1)
{
    cout<<"it is palan";
}
else
{
    cout<<"it is not palan";
}
return 0;
}

