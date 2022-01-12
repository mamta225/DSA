//First n even numbers
#include<bits/stdc++.h>
using namespace std;

int even(int n)
{
	if(n>=1)
	{
		even(n-1);
		cout<<2*n<<" ";
	}
	  
}

int main()
{
	int n;
	cin>>n;
	even(n);
	
}
