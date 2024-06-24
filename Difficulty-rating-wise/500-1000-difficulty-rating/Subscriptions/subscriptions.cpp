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
	    cout<<((N<6?X:ceil(N/6)*X))<<endl;
	}
	return 0;
}