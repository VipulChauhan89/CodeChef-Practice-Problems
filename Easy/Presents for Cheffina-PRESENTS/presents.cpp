/*
  Chef has fallen in love with Cheffina, and wants to buy N gifts for her. On reaching the gift shop, Chef got to know the following two things:
            The cost of each gift is 1 coin.
            On the purchase of every 4th gift, Chef gets the 5th gift free of cost.
  
  What is the minimum number of coins that Chef will require in order to come out of the shop carrying N gifts?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T;
	long int N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<N-(N/5)<<endl;
	}
	return 0;
}
