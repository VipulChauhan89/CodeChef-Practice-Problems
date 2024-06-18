#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
    double N;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    cout<<((X>=(N/2))?"YES":"NO")<<endl;
	}
	return 0;
}