/*
  Chef's dog binary hears frequencies starting from 67 Hertz to 45000 Hertz (both inclusive).If Chef's commands have a frequency of X Hertz, find whether binary can hear them or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    (X>=67 && X<=45000)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}