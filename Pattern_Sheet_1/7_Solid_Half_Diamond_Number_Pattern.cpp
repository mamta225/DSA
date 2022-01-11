//solid hald diamond number pattern
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			cout<<n-j+1;
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=0;j--)
		{
			cout<<j+i;
		}
		cout<<endl;
	}
	return 0;
}
