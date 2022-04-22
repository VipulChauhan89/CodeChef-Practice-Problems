/*
  Chef has his lunch only between 1 pm and 4 pm (both inclusive).
  Given that the current time is X pm, find out whether it is lunchtime for Chef.
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
	    (X>=1 && X<=4)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
