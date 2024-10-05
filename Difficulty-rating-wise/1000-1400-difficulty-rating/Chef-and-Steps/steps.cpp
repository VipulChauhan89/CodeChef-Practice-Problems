#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K,D;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    for(int i=0;i<N;i++)
	    {
	        cin>>D;
	        cout<<((D%K==0)?1:0);
	    }
	    cout<<endl;
	}
	return 0;
}