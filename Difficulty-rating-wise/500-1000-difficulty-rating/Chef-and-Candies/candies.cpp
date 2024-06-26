#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    cout<<((N>X)?ceil((N-X)/4):0)<<endl;
	}
	return 0;
}