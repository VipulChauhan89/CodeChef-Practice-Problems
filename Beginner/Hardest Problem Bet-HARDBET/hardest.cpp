/*
  You are given three integers SA,SB,SC which denotes the number of successful submissions of the problems A,B,C respectively. 
  It is guaranteed that each problem has a different number of submissions. Determine who wins the bet.

  If Alice wins the bet (i.e. problem C is the hardest), then output Alice.

  If Bob wins the bet (i.e. problem B is the hardest), then output Bob.

  If no one wins the bet (i.e. problem A is the hardest), then output Draw.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    if(A<B && A<C)
	    {
	        cout<<"Draw"<<endl;
	    }
	    else if(B<A && B<C)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Alice"<<endl;
	    }
	}
	return 0;
}
