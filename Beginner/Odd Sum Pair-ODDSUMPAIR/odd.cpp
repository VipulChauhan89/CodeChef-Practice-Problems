/*
    Chef has 3 numbers A,B and C. Chef wonders if it is possible to choose exactly two numbers out of the three numbers such that their sum is odd.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C,X;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    X=A%2+B%2+C%2;
	    (X!=0 && X<3)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}