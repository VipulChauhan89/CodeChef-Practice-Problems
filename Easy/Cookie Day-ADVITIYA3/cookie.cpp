#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    int ans=INT_MAX;
	   cin>>N>>K;
	   vector<int> A(N);
	   for(int i=0;i<N;i++)
	   {
	       cin>>A[i];
	       if(A[i]/K>=1)
	       {
	           ans=min(ans,A[i]%K);
	       }
	   }
	   cout<<((ans==INT_MAX)?-1:ans)<<endl;
	}
	return 0;
}
