/*
  Chef has decided to go to a gold mine along with N of his friends (thus, total N+1 people including Chef go to the gold mine).

  The gold mine contains a total of X kg of gold. Every person has the capacity of carrying up atmost Y kg of gold.

  Program to find will Chef and his friends together be able to carry up all the gold from the gold mine assuming that they can go to the mine exactly once.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>Y;
	    if((N+1)*Y>=X)
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
