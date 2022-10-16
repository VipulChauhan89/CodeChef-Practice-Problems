/*
    Chef has recently moved into an apartment. It takes 30 minutes for Chef to reach office from the apartment.
    Chef left for the office X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.
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
	    (X<30)?cout<<"NO"<<endl:cout<<"YES"<<endl;
	}
	return 0;
}