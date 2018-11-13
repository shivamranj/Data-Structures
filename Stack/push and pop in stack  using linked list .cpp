#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct ArrayStack
{
	int top;
	int capacity;
	int *array;
};
struct ArrayStack *stack;
void createStack(int cap)
{
stack=(struct ArrayStack *)malloc(sizeof(struct ArrayStack));
stack->top=-1;
stack->capacity=cap;
stack->array=(int *)malloc(sizeof(int)*stack->capacity);
}
int isFull()
{
	if(stack->top==stack->capacity)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(stack->top==-1)
	return 1;
	else
	return 0;
}
void push(int item)
{
	if(!isFull())
	{
		stack->top++;
		stack->array[stack->top]=item;
	cout<<stack->array[stack->top];
	}
}
void pop()
{
	int item;
	if(!isEmpty())
	{
		item=stack->array[stack->top];
		stack->top--;
	}
	cout<<"poped element is"<<item;
}
int main()
{
	createStack(5);
	push(4);
	push(3);
	push(2);
	push(1);
	pop();
}
