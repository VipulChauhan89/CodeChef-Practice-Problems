/*
  Janmansh received X coins of 10 rupees and Y coins of 5 rupees from Chingari. 
  Since he is weak in math, 
  
  Program to find out how much total money does he have?
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
	    cout<<(X*10)+(Y*5)<<endl;
	}
	return 0;
}
