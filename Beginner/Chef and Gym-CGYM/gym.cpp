/*
  Chef has decided to join a Gym in ChefLand and if possible, also hire a personal trainer at the gym. 
  The monthly cost of the gym is X and personal training will cost him an additional Y per month. Chef's total budget per month is only Z. 
  Print 1 if Chef can only join the gym, 2 if he can also have a personal trainer, and 0 if he can't even join the gym.
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
	        cout<<2<<endl;
	    }
	    else if(X<=Z)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
