/*
  An electronics shop sells red and blue lamps. A red lamp costs X rupees and a blue lamp costs Y rupees. Chef is going to buy exactly N lamps from this shop. 
  Find the minimum amount of money Chef needs to pay such that at least K of the lamps bought are red.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K>>X>>Y;
	    (X>Y)?cout<<((N-K)*Y)+(K*X)<<endl:cout<<N*X<<endl;
	}
	return 0;
}
