//first n odd numbers
#include<bits/stdc++.h>
using namespace std;

void odd(int n)
{
   if(n>=1)
   {
   	odd(n-1);
   	cout<<2*n-1<<" ";
   }
}

int main()
{
	int n;
	cin>>n;
	odd(n);
}
