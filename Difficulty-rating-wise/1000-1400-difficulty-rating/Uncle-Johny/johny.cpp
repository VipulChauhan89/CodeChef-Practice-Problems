#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,K,N;
	cin>>T;
	while(T--)
	{
	    int ans=0;
	    cin>>N;
	    vector<int> A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    cin>>K;
	    int temp=A[K-1];
	    sort(A.begin(),A.end());
	    for(int i=0;i<N;i++)
	    {
	        if(A[i]==temp)
	        {
	            ans=i+1;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}