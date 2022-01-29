/*
  For each test case, output the package size that will maximize the number of leftover cupcakes. 
  If multiple package sizes will result in the same number of leftover cupcakes, print the largest such size.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<N/2+1<<endl;
	}
	return 0;
}
