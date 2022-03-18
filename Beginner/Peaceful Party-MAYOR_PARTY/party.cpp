/*
  The mayor of your city has decided to throw a party to gather the favour of his people in different regions of the city.
  There are 3 distinct regions in the city namely A, B, C comprising of PA, PB and PC number of people respectively.
  However, the mayor knows that people of the region B are in conflict with people of regions A and C. 
  So, there will be a conflict if people from region B are present at the party along with people from region A or C.
  The mayor wants to invite as many people as possible and also avoid any conflicts. 
  
  Program to help him invite maximum number of people to the party.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    cout<<max(B,A+C)<<endl;
	}
	return 0;
}
