/*
  Vacations have arrived and Chef wants to go to his home in ChefLand. There are two types of routes he can take:

  Take a flight from his college to ChefArina which takes X minutes and then take a bus from ChefArina to ChefLand which takes Y minutes.
  Take a direct train from his college to ChefLand which takes Z minutes.
  Program to find which of these two options is faster?
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
	    if(X+Y<Z)
	    {
	        cout<<"PLANEBUS"<<endl;
	    }
	    else if(X+Y>Z)
	    {
	        cout<<"TRAIN"<<endl;
	    }
	    else
	    {
	        cout<<"EQUAL"<<endl;
	    }
	}
	return 0;
}
