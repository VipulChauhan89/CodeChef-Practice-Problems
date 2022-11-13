/*
    Chef has 2 numbers A and B (A<B).Chef will perform some operations on A. In the i the operation:
        Chef will add 1 to A if i is odd.
        Chef will add 2 to A if i is even.
    Chef can stop at any instant. Can Chef make A equal to B?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	long int A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    int C=B-A;
	    (C%3==0||C%3==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}