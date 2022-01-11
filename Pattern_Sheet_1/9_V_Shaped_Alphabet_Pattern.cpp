//V shape alphabet pattern
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p=1;
	int q=n*2-1;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n*2;j++)
		{
			if(j==p||j==q)
			{
				cout<<char(i+64);
			}
			else
			{
			   cout<<" ";	
			}
		}
		p++;
		q--;
		cout<<endl;
	}
	return 0;
}
