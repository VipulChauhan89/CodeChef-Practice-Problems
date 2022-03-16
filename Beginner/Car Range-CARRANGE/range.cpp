/*
  The fuel economy of a car is the distance which it can travel on one litre of fuel.
  The base fuel economy (i.e, its fuel economy when there is only one person - the driver - in the car) of a certain car is M kilometres per litre. 
  It was also observed that every extra passenger in the car decreases the fuel economy by 1 kilometre per litre.
  P people want to take this car for a journey. They know that the car currently has V litres of fuel in its tank.

  Program to find the maximum distance this car can travel under the given conditions, assuming that all P
 people always stay in the car and no refuelling can be done?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,P,M,V;
	cin>>T;
	while(T--)
	{
	    cin>>P>>M>>V;
	    cout<<(M-P+1)*V<<endl;
	}
	return 0;
}
