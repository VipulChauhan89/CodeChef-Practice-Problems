//Program to find the gcd and lcm of two numbers
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	long int T,A,B,gcd,lcm;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    gcd=__gcd(A,B);
	    lcm=(A*B)/gcd;
	    cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}
