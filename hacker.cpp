#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {  
        cin>>arr[i];
    }
   
  int r = sizeof(arr)/sizeof(arr[0]);
 
    int max = arr[0];

    for (int i = 1; i < r; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
   
    
    int arr1[max+1];
    for(int i=0;i<max+1;i++)
    {
        arr1[i]=-1;
    }
  
    for(int i=0;i<max;i++)
    {
    	
        if(arr1[arr[i]]==0)
        
            count++;
        
    else
        arr1[arr[i]]++;
    
    }
    
    cout<<n-count;
    return 0;
}
