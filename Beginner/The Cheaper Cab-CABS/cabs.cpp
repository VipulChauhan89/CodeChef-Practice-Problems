/*
  Chef has to travel to another place. For this, he can avail any one of two cab services.
  The first cab service charges X rupees.
  The second cab service charges Y rupees.
  Chef wants to spend the minimum amount of money. 
  
  Program to find which cab service should Chef take?
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
	    if(X<Y)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else if(X>Y)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
