/*
	On a certain train, Chef-the ticket collector, collects a fine of Rs. X if a passenger is travelling without a ticket. It is known that a passenger carries either a single ticket or no ticket.
	P passengers are travelling and they have a total of Q tickets. Help Chef calculate the total fine collected.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,P,Q;
	cin>>T;
	while(T--)
	{
	    cin>>X>>P>>Q;
	    cout<<(P-Q)*X<<endl;
	}
	return 0;
}