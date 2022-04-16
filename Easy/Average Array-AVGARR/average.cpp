/*
  You are given two integers N and X. Output an array A of length N such that:
  −1000≤Ai≤1000 for all 1≤i≤N.
  All Ai are distinct.
  𝚖𝚎𝚊𝚗(A)=X.
  If there are multiple answers, print any. It is guaranteed that under the given constraints at least one array satisfying the given conditions exists.

  As a reminder, the mean of an array B of size M is defined as: 𝚖𝚎𝚊𝚗(B)=∑Mi=1Bi/M.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T,N,X,a;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    a=N/2;
	    if(N & 1)
	    {
	        for(int i=X-a;i<X+a+1;i++)
	        {
	            cout<<i<<" ";
	        }
	    }
	    else
	    {
	        for(int i=X-a;i<X+a+1;i++)
	        {
	            if(i!=X)
	            {
	                cout<<i<<" ";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
