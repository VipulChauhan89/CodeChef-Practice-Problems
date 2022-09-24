/*
	A person is said to be sleep deprived if he slept strictly less than 7 hours in a day. Chef was only able to sleep X hours yesterday. Determine if he is sleep deprived or not.
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
	    (X<7)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}