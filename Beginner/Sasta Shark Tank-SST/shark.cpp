/*
  Devendra just had a million-dollar idea and he needs funds to startup. 
  He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).
  He was offered deals from two investors. The first investor offers A dollars for 10% of his company and the second investor offers B dollars for 20% of his company. 
  Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    A=A*10;
	    B=B*5;
	    if(A==B)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(A>B)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else
	    {
	        cout<<"SECOND"<<endl;
	    }
	}
	return 0;
}
