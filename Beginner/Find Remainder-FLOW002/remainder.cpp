/*
  program to print the remainder after dividing one number by another for n number of cases
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
		cout<<a%b<<endl;
	}
	return 0;
}
