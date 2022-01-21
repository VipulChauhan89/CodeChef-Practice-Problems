//program to display the Ship Class depending on ID, in a new line.
#include <iostream>
using namespace std;

int main() 
{
	int T;
	char c;
	cin>>T;
	while(T--)
	{
	    cin>>c;
	    if(c=='B' || c=='b')
	    {
	        cout<<"BattleShip"<<endl;
	    }
	    else if(c=='C' || c=='c')
	    {
	        cout<<"Cruiser"<<endl;
	    }
	    if(c=='D' || c=='d')
	    {
	        cout<<"Destroyer"<<endl;
	    }
	    if(c=='F' || c=='f')
	    {
	        cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}
