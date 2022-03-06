/*
  Chef opened a company which manufactures cars and bikes. Each car requires 4 tyres while each bike requires 2 tyres. 
  Chef has a total of N tyres (N is even). 
  He wants to manufacture maximum number of cars from these tyres and then manufacture bikes from the remaining tyres.

  Chef's friend went to Chef to purchase a bike. 
  If Chef's company has manufactured even a single bike then Chef's friend will be able to purchase it.

  Program to determine whether he will be able to purchase the bike or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    if(N%4>=2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
