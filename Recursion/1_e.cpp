#include<bits/stdc++.h>
using namespace std;

bool is_prime(int i,int num)
{
	if(i==num)
	return true;
	if(num%i==0)
	return false;
	else 
	return is_prime(i+1,num);
	
}
int main()
{
	int i,n;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(is_prime(2,i))
		cout<<i<<endl;
	}	
	
}
