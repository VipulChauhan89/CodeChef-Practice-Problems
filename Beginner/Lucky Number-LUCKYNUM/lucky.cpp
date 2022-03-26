/*
  Chef buys a lottery ticket that has a 3 digit code associated with it. He thinks that digit 7 is his lucky digit and brings him good luck. 
  Chef will win some amount in the lottery if at least one of the digits of the lottery ticket is 7.
  Given three digits A, B, and C of the lottery ticket, 
  
  Program to tell whether Chef wins something or not?
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
	    if(A==7 || B==7 || C==7)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
