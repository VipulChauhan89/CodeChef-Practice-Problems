/*
  Chef has a sequence of N integers, A1,A2,...,AN. He likes this sequence if it contains a subsequence of M integers, B1,B2,...,BM within it. 
  A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
  You will be given a sequence of N integers, A1,A2,...,AN followed by another sequence of M integers, B1,B2,...,BM. 
  Given these, you have to tell whether Chef likes the sequence of N integers(A1,A2,...,AN) or not.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    vector<int> A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    cin>>M;
	    vector<int> B(M);
	    for(int i=0;i<M;i++)
	    {
	        cin>>B[i];
	    }
	    int i=0,j=0;
	    while(i<N && j<M)
	    {
	        if(A[i]==B[j])
	        {
	            j++;
	        }
	        i++;
	    }
	    (j==M)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}
