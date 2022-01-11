//full pyramid number pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(int k=p;k>=1;k--)
	    {
	    	cout<<k;
		}
		p+=2;
		cout<<endl;
	}
	return 0;
}
