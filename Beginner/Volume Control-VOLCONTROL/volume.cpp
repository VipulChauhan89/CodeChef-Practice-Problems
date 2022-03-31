/*
  Chef is watching TV. The current volume of the TV is X. 
  Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1. 
  Chef wants to change the volume from X to Y. 
  
  Program to find the minimum number of button presses required to do so.
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
	    cout<<abs(X-Y)<<endl;
	}
	return 0;
}
