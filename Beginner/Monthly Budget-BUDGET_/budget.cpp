/*
  Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.
  Given that the current month has 30 days, 
  
  Program to find out if Akshat has enough money to meet his daily expenditures for this month.
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
	    (X>=30*Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
