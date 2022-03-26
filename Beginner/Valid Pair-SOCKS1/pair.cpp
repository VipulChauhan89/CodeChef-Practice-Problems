/*
  Chef has three socks in his drawer. Each sock has one of 10 possible colours, which are represented by integers between 1 and 10. 
  Specifically, the colours of the socks are A, B, and C.
  Chef has to wear two socks which have the same colour. 
  
  Program to help Chef find out if that is possible or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int A,B,C;
	cin>>A>>B>>C;
	if(A==B || A==C || B==C)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	return 0;
}
