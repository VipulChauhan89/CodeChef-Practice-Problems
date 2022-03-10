/*
  After a very long time, the Chef has a vacation. 
  Chef has planned for two trips during this vacation - one with his family and the other with his friends. 
  The family trip will take X days and the trip with friends will take Y days. 
  Currently, the dates are not decided but the vacation will last only for Z days.

  Chef can be in at most one trip at any time and once a trip is started, Chef must complete it before the vacation ends. 
  Program to find will Chef be able to go on both these trips if he chooses the dates optimally?
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
	    if(X+Y<=Z)
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
