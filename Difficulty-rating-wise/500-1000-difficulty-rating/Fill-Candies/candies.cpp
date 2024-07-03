#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double N,M,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K>>M;
	    cout<<ceil(N/(K*M))<<endl;
	    
	}
	return 0;
}