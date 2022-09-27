/*
    There are three people sitting in a room - Alice, Bob, and Charlie. They need to decide on the temperature to set on the air conditioner. 
    Everyone has a demand each:
            Alice wants the temperature to be at least A degrees.
            Bob wants the temperature to be at most B degrees.
            Charlie wants the temperature to be at least C degrees.
    Can they all agree on some temperature, or not?
*/
#include <iostream>
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
	    if(B<A || B<C)
	    {
	        cout<<"No"<<endl;
	    }
	    else
	    {
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}