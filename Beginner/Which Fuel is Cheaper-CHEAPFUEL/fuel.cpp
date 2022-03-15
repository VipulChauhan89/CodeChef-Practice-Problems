/*
  The current price of petrol is X rupees, and the current price of diesel is Y rupees. 
  At the start of each month, the price of petrol increases by A rupees and the price of diesel increases by B rupees.

  Chef is curious to know which fuel costs less at the end of the Kth month. If petrol is cheaper than diesel at the end of Kth month, then print 𝙿𝙴𝚃𝚁𝙾𝙻. 
  If diesel is cheaper than petrol at the end of the Kth month, then print 𝙳𝙸𝙴𝚂𝙴𝙻. If both the fuels have the same price at the end of the Kth month, then print  SAME PRICE.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y,A,B,K;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>A>>B>>K;
	    X=X+K*A;
	    Y=Y+K*B;
	    if(X==Y)
	    {
	        cout<<"SAME PRICE"<<endl;
	    }
	    else if(X<Y)
	    {
	        cout<<"PETROL"<<endl;
	    }
	    else
	    {
	        cout<<"DIESEL"<<endl;
	    }
	}
	return 0;
}
