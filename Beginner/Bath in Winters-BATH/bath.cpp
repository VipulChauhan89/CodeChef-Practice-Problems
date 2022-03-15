/*
  A geyser has a capacity of X litres of water and a bucket has a capacity of Y litres of water.
  One person requires exactly 2 buckets of water to take a bath. 
  
  Program to find the maximum number of people that can take bath using water from one completely filled geyser.
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
	    cout<<X/(Y*2)<<endl;
	}
	return 0;
}
