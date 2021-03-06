//selection sort
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_idx=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
			    min_idx=j;
		    swap(arr[min_idx],arr[i]);
		}		
	}
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
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
	selectionSort(arr,n);
	printArray(arr,n);
	return 0;
}
