/*
  Alice and Bob were having an argument about which of them is taller than the other. 
  Charlie got irritated by the argument, and decided to settle the matter once and for all.
  Charlie measured the heights of Alice and Bob, and got to know that Alice's height is X centimeters and Bob's height is Y centimeters. 
  Help Charlie decide who is taller.
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
	    (X>Y)?cout<<"A"<<endl:cout<<"B"<<endl;
	}
	return 0;
}
