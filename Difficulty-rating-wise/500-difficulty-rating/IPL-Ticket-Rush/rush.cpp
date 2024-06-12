#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    int ans=N-M;
	    cout<<((ans<=0)?0:ans)<<endl;
	}
	return 0;
}