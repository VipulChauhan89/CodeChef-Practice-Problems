/*
  Pooja would like to withdraw X $US from an ATM. 
  The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
  For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.
*/
#include <iostream>
#include<iomanip>
using namespace std;
int main(void) 
{
	int withdrawl;
	float bal;
	cin>>withdrawl>>bal;
	if(withdrawl+.5>bal || withdrawl%5!=0)
	{
	    cout<<fixed<<setprecision(2)<<bal<<endl;
	}
	else
	{
	    cout<<fixed<<setprecision(2)<<bal-withdrawl-.5<<endl;
	}
	return 0;
}
