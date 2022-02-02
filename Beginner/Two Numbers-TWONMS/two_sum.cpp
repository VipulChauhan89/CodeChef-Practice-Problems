/*
  Alice and Bob are playing a game. 
  Alice initially has the number A and Bob has the number B. 
  There are a total of N turns in the game, and Alice and Bob alternatively take turns. 
  In each turn the player whose turn it is, multiplies his or her number by 2. 
  Alice has the first turn.

  Suppose after all the N turns, Alice's number has become C and Bob's number has become D. 
  You want to calculate the integer division of the maximum number among C and D by the minimum number among C and D.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,A,B,N;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>N;
	    if(N%2==1)
	    {
	        cout<<max(2*A,B)/min(2*A,B)<<endl;
	    }
	    else
	    {
	        cout<<max(A,B)/min(A,B)<<endl;
	    }
	}
	return 0;
}
