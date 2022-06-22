/*
  Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 2 consecutive serves before the service changes. 
  Alice makes the first serve of the match. Therefore the first 2 serves will be made by Alice, then the next 2 serves will be made by Bob and so on.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,P,Q;
	cin>>T;
	while(T--)
	{
	    cin>>P>>Q;
	    P+=Q;
	    (P%4==2 || P%4==3)?cout<<"Bob"<<endl:cout<<"Alice"<<endl;
	}
	return 0;
}
