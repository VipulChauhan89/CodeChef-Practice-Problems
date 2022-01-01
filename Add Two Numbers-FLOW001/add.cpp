/*
  The task is very simple: given two integers A and B, write a program to add these two numbers and output it.
*/
#include <iostream> 
using namespace std;
int main() 
{
	int T,a,b;
	cin>>T;
	while (T--) 
	{
		cin>>a>>b;
		int ans=a+b;
		cout<<ans<<endl;
	}
	return 0;
}
