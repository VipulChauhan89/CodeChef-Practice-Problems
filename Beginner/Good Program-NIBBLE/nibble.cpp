/*
  In computing, the collection of four bits is called a nibble.
  Chef defines a program as:
      Good, if it takes exactly X nibbles of memory, where X is a positive integer.
      Not Good, otherwise.
  Given a program which takes N bits of memory, 
  Program to determine whether it is Good or Not Good.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    if(N%4==0)
	    {
	        cout<<"Good"<<endl;
	    }
	    else
	    {
	        cout<<"Not Good"<<endl;
	    }
	}
	return 0;
}
