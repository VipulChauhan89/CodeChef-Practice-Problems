/*
  There is a sale going on in Chefland. For every 2 items Chef pays for, he gets the third item for free (see sample explanations for more clarity).
  It is given that the cost of 1 item is X rupees. 
  
  Program to find the minimum money required by Chef to buy at least N items.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    cout<<(N/3)*2*X+(N%3)*X<<endl;
	}
	return 0;
}
