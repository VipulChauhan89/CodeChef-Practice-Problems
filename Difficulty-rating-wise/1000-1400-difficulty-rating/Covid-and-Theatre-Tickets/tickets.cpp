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
	    int count=0;
	    cin>>N>>M;
	    for(int i=0;i<N;i=i+2)
	    {
	        for(int j=0;j<M;j+=2)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}