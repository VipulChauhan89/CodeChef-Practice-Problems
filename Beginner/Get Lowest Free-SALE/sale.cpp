/*
  Chef goes to the supermarket to buy some items. Luckily there's a sale going on under which Chef gets the following offer:
  If Chef buys 3 items then he gets the item (out of those 3 items) having the lowest price as free.
  
  Program to find the amount the chef need to pay
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
	    cout<<A+B+C-min(A,min(B,C))<<endl;
	}
	return 0;
}
