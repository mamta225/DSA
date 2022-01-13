//insertion sort
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
  	temp=arr[i];
    j=i-1;
	while(j>=0 && arr[j]>temp)
	{
		arr[j+1]=arr[j];
	    j=j-1;	
	}
	arr[j+1]=temp;	
  }	
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertionsort(arr,n);
	printArray(arr,n);
	return 0;
}
