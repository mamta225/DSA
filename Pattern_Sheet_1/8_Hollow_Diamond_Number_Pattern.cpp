//Hollow diamond number pattern
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(j==n-(i-1)||j==n+(i-1))
			cout<<i;
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(j==i+1||j==2*n-1-i)
			cout<<n-i;
			else
			cout<<" ";
		}
		
		cout<<endl;
	}
	return 0;
}
