//fibonacci half pyramid pattern
#include<bits/stdc++.h>
using namespace std;

void pyramid(int n)
{
	int a=0,b=1;
	int c=a+b;
	if(n==0)
	   return;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<c<<" ";
			c=a+b;
			a=b;
			b=c;
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	pyramid(n);
}
