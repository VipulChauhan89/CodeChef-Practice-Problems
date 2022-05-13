/*
  In the medieval age, there were 3 kingdoms A, B, and C. The army of these kingdom had NA, NB, and NC soldiers respectively.
  You are given that an army with X soldiers can defeat an army with Y soldiers only if X>Y.

  An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom C's army will be dominant only if NC>NA+NB.
  Determine whether any of the armies is dominant or not.
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
	    (A>B+C || B>A+C || C>A+B)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
