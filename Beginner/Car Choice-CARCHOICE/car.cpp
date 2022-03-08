/*
  Chef is planning to buy a new car for his birthday. After a long search, he is left with 2 choices:
  Car 1: Runs on diesel with a fuel economy of x1 km/l
  Car 2: Runs on petrol with a fuel economy of x2 km/l
  Chef also knows that the current price of diesel is y1 rupees per litre the current price of petrol is y2 rupees per litre
  
  If it is better to choose Car 1, print −1
  If both the cars will result in the same expenses, print 0
  If it is better to choose Car 2, print 1

*/
#include <iostream>
using namespace std;

int main() 
{
	int T;
	float x1,x2,y1,y2,car1,car2;
	cin>>T;
	while(T--)
	{
	    cin>>x1>>x2>>y1>>y2;
	    car1=y1/x1;
	    car2=y2/x2;
	    if(car1<car2)
	    {
	        cout<<-1<<endl;
	    }
	    else if(car1>car2)
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
