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
	int i,n,x,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		x=fib(i);
		sum=sum+x;
	}
	cout<<sum;
	return 0;
}
