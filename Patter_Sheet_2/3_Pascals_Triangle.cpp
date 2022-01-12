//Pascal's Triangle
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,num,N,D;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=n-i-1;j>0;j--)
		{
			cout<<" ";	
		}
		num=1;
		N=i;
		D=1;
		for(j=0;j<=i;j++)
		{
			cout<<num<<" ";
			num=num*N;
			num=num/D;
			N--;
			D++;
		}
		cout<<endl;
	}
}
