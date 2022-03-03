/*
  Chef has invented 1-minute Instant Noodles. 
  As the name suggests, each packet takes exactly 1 minute to cook.
  Chef's restaurant has X stoves and only 1 packet can be cooked in a single pan.
  Program to find how many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?
*/
#include <iostream>
using namespace std;

int main() 
{
	int X,Y;
	cin>>X>>Y;
	cout<<X*Y<<endl;
	return 0;
}
