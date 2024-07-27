#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,winner=0,player1=0,player2=0,lead=0,p1,p2;
	cin>>T;
	while(T--)
	{
	    cin>>p1>>p2;
	    player1+=p1;
	    player2+=p2;
	    int diff=abs(player1-player2);
	    if(diff>lead)
	    {
	        lead=diff;
	        winner=((player1>player2)?1:2);
	    }
	}
	cout<<winner<<" "<<lead<<endl;
	return 0;
}