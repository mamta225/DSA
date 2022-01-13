//bubblesort: result after k th iteration
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n,int k)
{
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			    swap(arr[j],arr[j+1]);
		    }
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
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubblesort(arr,n,k);
	printArray(arr,n);
	return 0;
}
