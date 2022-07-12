/*
  Alice, Bob and Charlie are bidding for an artifact at an auction.Alice bids A rupees, Bob bids B rupees, and Charlie bids C rupees (where A,B,and C are distinct).
  According to the rules of the auction, the person who bids the highest amount will win the auction.Determine who will win the auction.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    int m=max({A,B,C});
	    if(A==m)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(B==m)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
