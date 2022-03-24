/*
  Team RCB has earned X points in the games it has played so far in this year's IPL. 
  To qualify for the playoffs they must earn at least a total of Y points. 
  They currently have Z games left, in each game they earn 2 points for a win, 1 point for a draw, and no points for a loss.

  Is it possible for RCB to qualify for the playoffs this year?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    if(Y<=(X+(2*Z)))
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
