/*
  Chef has infinite coins in denominations of rupees 5 and rupees 10.

  Program to find the minimum number of coins Chef needs, to pay exactly X rupees. 
  If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X;
	cin>>T;
	while(T--)
	{
	   cin>>X;
	   if(X%5!=0)
	   {
	       cout<<-1<<endl;
	   }
	   else
	   {
	       cout<<X/10+(X%10)/5<<endl;
	   }
	}
	return 0;
}
