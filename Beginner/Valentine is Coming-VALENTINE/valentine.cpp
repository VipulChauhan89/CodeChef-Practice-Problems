/*
  Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special.
  Chef has a total of X rupees and one chocolate costs Y rupees. 
  Program to find the maximum number of chocolates Chef can buy?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<X/Y<<endl;
	}
	return 0;
}
