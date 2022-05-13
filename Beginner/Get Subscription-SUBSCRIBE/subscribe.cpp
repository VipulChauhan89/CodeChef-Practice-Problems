/*
  Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes.
  The meeting platform supports a meeting of maximum 30 minutes without subscription and a meeting of unlimited duration with subscription.
  Determine whether Chef needs to take a subscription or not for setting up the meet.
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
	   (X>30)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
