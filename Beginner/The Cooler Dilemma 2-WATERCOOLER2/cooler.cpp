/*
  The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:
  Rent a cooler at the cost of X coins per month.
  Purchase a cooler for Y coins.
  Chef wonders what is the maximum number of months for which he can rent the cooler such that the cost of renting is strictly less than the cost of purchasing it.
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
	    if(X==Y)
	    {
	        cout<<0<<endl;
	    }
	    else if(Y%X==0)
	    {
	        cout<<(Y/X)-1<<endl;
	    }
	    else
	    {
	        cout<<Y/X<<endl;
	    }
	}
	return 0;
}
