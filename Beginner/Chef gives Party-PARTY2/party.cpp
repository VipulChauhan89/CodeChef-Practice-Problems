/*
  Chef wants to give a burger party to all his N friends i.e. he wants to buy one burger for each of his friends.
  The cost of each burger is X rupees while Chef has a total of K rupees.
  Determine whether he has enough money to buy a burger for each of his friends or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,X,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>K;
	    (N*X<=K)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
