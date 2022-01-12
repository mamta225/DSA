//First n natural numbers in reverse order
#include<bits/stdc++.h>
using namespace std;

void nat(int n)
{
	if(n==0)
	   return;
	cout<<n<<" ";
	nat(n-1);
}

int main()
{
	int n;
	cin>>n;
	nat(n);
}
