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
	    cout<<((K/X)>=N?"YES":"NO")<<endl;
	}
	return 0;
}