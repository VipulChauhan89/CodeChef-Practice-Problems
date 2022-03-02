/*
  Chef's phone shows a Battery Low notification if the battery level is 15% or less.
  Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.
  Program to output in a single line 𝚈𝚎𝚜, if the battery level is 15% or below. Otherwise, print No.
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
	    if(X<=15)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
