/*
  The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. 
  You are expected to be able to process at least 2.5MB of input data per second at runtime.
*/
#include <iostream> 
using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int count=0;

	for (int i=0;i<n;i++) 
	{
		int t;
		cin>>t;
		if(t%k==0)
		{
			count++;
		}		
	}
	cout<<count<<endl;	
	return 0;
}
