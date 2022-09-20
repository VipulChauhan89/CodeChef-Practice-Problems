/*
    Alice is driving from her home to her office which is A kilometers away and will take her X hours to reach.
    Bob is driving from his home to his office which is B kilometers away and will take him Y hours to reach.
    Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	float A,X,B,Y;
	cin>>T;
	while(T--)
	{
	    cin>>A>>X>>B>>Y;
	    A/=X;
	    B/=Y;
	    if(A==B)
	    {
	        cout<<"Equal"<<endl;
	    }
	    else if(A>B)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else
	    {
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}