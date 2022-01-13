#include<bits/stdc++.h>
using namespace std;

void series(int n)
{
	if(n<1)
	return;
	series(n-1);
	cout<<"+"<<pow(2,n);
}
int main()
{
	int n;
	cin>>n;
	cout<<"1";
	series(n-1);
}
