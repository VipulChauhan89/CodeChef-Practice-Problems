/*
  You have three shoes of the same size lying around. Each shoe is either a left shoe (represented using 0) or a right shoe (represented using 1). 
  Given A, B, C, representing the information for each shoe.
  Program to find out whether you can go out now, wearing one left shoe and one right shoe.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    if((A==0 && (B==1 || C==1)) || (A==1 && (B==0 || C==0)))
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
