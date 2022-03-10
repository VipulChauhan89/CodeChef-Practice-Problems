/*
  Some time ago, Chef bought X stocks at the cost of Rs. Y each. Today, Chef is going to sell all these X stocks at Rs. Z each. 
  Program to find Chef's total profit after he sells them?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    cout<<X*(Z-Y)<<endl;
	}
	return 0;
}
