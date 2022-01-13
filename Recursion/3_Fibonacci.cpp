#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	
	if(n<=1)
	return n;
	
	return fib(n-1)+fib(n-2);
	
}

int main()
{
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	cout<<fib(i)<<" ";
}
