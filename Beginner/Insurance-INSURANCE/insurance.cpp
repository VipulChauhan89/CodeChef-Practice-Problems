/*
  Chef bought car insurance. The policy of the insurance is:
        The maximum rebatable amount for any damage is Rs X lakhs.
        If the amount required for repairing the damage is ≤X lakhs, that amount is rebated in full.
  Chef's car meets an accident and required Rs Y lakhs for repairing. Determine the amount that will be rebated by the insurance company.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<min(X,Y)<<endl;
	}
	return 0;
}
