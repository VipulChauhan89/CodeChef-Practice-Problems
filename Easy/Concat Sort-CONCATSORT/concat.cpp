/*
  JJ has an array A. He can perform the following operation on A:
        Divide A into two subsequences P and Q such that each Ai belongs to either P or Q.
        Set A:=P 𝚌𝚘𝚗𝚌𝚊𝚝 Q
  Here 𝚌𝚘𝚗𝚌𝚊𝚝 denotes the concatenation operation. For e.g. [2,1,5] 𝚌𝚘𝚗𝚌𝚊𝚝 [4,3]=[2,1,5,4,3].
  Is it possible to make A sorted in non-decreasing order after applying the above operation at most once?
  Note: An array X is a subsequence of an array Y if X can be obtained by deletion of several (possibly, zero or all) elements from Y.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    int i=0,j=0;
	    cin>>N;
	    vector<int> A(N);
	    for(i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    vector<int> B=A;
	    vector<int> C;
	    sort(B.begin(),B.end());
	    i=0;
	    while(i<N && j<N)
	    {
	        if(A[i]==B[j])
	        {
	            i++;
	            j++;
	        }
	        else
	        {
	            C.push_back(A[i]);
	            i++;
	        }
	    }
	    vector<int> D=C;
	    sort(D.begin(),D.end());
	    if(D==C)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
