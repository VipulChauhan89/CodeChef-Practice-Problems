/*
  A bulb company claims that the average lifetime of its bulbs is at least X units.
  The company ran a test on N bulbs. You are given the lifetime of N−1 of these bulbs. 
  
  What is the minimum non-negative integer value of lifetime the remaining bulb can have, such that the claim of the company holds true?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,X,sum;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>N>>X;
	    int A[N-1];
	    for(int i=0;i<N-1;i++)
	    {
	        cin>>A[i];
	        sum+=A[i];
	    }
	    sum=N*X-sum;
	    (sum>0)?cout<<sum<<endl:cout<<0<<endl;
	}
	return 0;
}
