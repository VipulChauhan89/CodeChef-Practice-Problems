#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    long long sum=0;
	    vector<int> A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        sum+=max(abs(A[i]-M),abs(A[i]-1));
	    }
	    cout<<sum<<endl;
	}
	return 0;
}