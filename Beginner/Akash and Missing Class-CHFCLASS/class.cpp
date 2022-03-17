/*
  Akash loves going to school, but not on weekends.
  A week consists of 7 days (Monday to Sunday). Akash takes a leave every Saturday.
  If a month consists of N days and the first-day of the month is Monday, 
  
  Program to find the number of days Akash would take a leave in the whole month.
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
	    cout<<(N+1)/7<<endl;
	}
	return 0;
}
