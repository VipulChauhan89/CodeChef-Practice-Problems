#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,A;
	cin>>T;
	while(T--)
	{
	    cin>>N>>A;
	    cout<<min(A,N-A)<<endl;
	}
	return 0;
}