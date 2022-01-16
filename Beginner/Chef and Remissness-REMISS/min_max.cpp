/*
program to help the boss to count the minimum and maximum number of times Chef could have entered into the office building.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,a,b;
	cin>>T;
	while(T--)
	{
	    cin>>a>>b;
	    cout<<max(a,b)<<" "<<a+b<<endl;
	}
	return 0;
}
