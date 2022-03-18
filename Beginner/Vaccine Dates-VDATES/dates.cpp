/*
  Chef has taken his first dose of vaccine D days ago. He may take the second dose no less than L days and no more than R days since his first dose.

  Program to determine if Chef is too early, too late, or in the correct range for taking his second dose.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,D,L,R;
	cin>>T;
	while(T--)
	{
	    cin>>D>>L>>R;
	    if(D<L)
	    {
	        cout<<"Too Early"<<endl;
	    }
	    else if(D>R)
	    {
	        cout<<"Too Late"<<endl;
	    }
	    else 
	    {
	        cout<<"Take second dose now"<<endl;
	    }
	}
	return 0;
}
