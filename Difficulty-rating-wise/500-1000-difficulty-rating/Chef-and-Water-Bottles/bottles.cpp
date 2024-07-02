#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>K;
	    cout<<((N>=K/X)?K/X:N)<<endl;
	}
	return 0;
}