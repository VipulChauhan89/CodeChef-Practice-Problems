/*
  You are given an array A containing N integers, and a positive integer M. Find the maximum value of Ai+Aj+((Ai−Aj) mod M) across all pairs 1≤i,j≤N.
  Note that x mod M refers to the smallest non-negative integer obtained as the remainder upon dividing x by M.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    vector<int> A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A.begin(),A.end());
	    A.erase(unique(A.begin(),A.end()),A.end());
	    N=A.size();
	    int a1=A[N-1];
	    int a2=A[N-2];
	    cout<<max(2*a1,a2+a1+M+(a2-a1)%M)<<endl;
	}
	return 0;
}
