/*
  A single car can accommodate at most 4 people.
  N friends want to go to a restaurant for a party. 
  
  Program to find the minimum number of cars required to accommodate all the friends.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T;
	double N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<ceil(N/4)<<endl;
	}
	return 0;
}
