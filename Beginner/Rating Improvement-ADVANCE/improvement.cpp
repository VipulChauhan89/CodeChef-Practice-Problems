/*
  Chef's current rating is X, and he wants to improve it. 
  It is generally recommended that a person with rating X should solve problems whose difficulty lies in the range [X,X+200], i.e, problems whose difficulty is at least X and at most X+200.

  You find out that Chef is currently solving problems with a difficulty of Y.Is Chef following the recommended practice or not?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    (Y>=X && Y<=X+200)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
