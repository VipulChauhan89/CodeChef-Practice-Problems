#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    long long ans=0;
	    cin>>N;
	    vector<int> A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(i!=0)
	        {
	            ans+=abs(A[i]-A[i-1]);
	        }
	    }
	    cout<<ans-N+1<<endl;
	}
	return 0;
}