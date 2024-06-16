#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    cout<<((N<K)?"YES":"NO")<<endl;
	}
	return 0;
}