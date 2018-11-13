#include<iostream>
#include<conio.h>
using namespace std;
int partition(int[],int,int);
void swap(int* , int*);
void quicksort(int arr[],int low,int high)
{
	int pi;
	if(low<high)
	{
		pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
	
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++)
	{
	if(arr[j]<=pivot);
	{
		cout<<"hello ";
	i++;
	swap(&arr[i],&arr[j]);
	}
	}
	cout<<"\n";
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void swap(int *p,int *p2)
{
	int temp;
	temp=*p;
	*p=*p2;
	*p2=temp;
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

int main()
{
	int a[6]={45,48,541,21,1,8};
	quicksort(a,0,5);
	print(a,6);
	return 0;
}
