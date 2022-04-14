/*
  JJ gives Chef a number X and challenges Chef to come up with three distinct numbers A, B, and C such that:
        0≤A,B,C<230;
        (A⊕B)+(B⊕C)+(C⊕A)=X.
  Help Chef come up with three such numbers or determine that no such tuple exists.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T;
	unsigned long long int X,A;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    A=X & ~(X-1);
	    (X==A||X&1)?cout<<-1<<endl:cout<<A/2<<" "<<(X-A)/2<<" "<<X/2<<endl;
	}
	return 0;
}
