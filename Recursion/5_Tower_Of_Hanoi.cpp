//Tower Of Hanoi
#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char A,char B,char C)
{
	if(n==0)
	  return;
	TOH(n-1,A,C,B);
	cout<<"Move disk "<<n<<" from "<<A<<" to "<<B;
	cout<<endl;
	TOH(n-1,C,B,A);
}

int main()
{
	int n;
	cin>>n;
	TOH(n,1,2,3);
}
