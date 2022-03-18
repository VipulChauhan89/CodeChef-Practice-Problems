/*
  It is known that in regular dice, the sum of opposite faces is 7.
  A regular dice is rolled and you are given the value X showing on the top face. 
  
  Program to determine the value on the bottom face.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<7-X<<endl;
	}
	return 0;
}
