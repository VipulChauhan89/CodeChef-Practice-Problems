/*
	You are given 3 numbers A,B, and C. Determine whether the average of A and B is strictly greater than C or not?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
    double A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    ((A+B)/2>C)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}