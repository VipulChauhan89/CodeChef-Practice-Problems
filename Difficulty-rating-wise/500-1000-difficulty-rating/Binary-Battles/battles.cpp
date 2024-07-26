#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>N>>A>>B;
	    int i=0,j=0,x;
	    while(N/2!=1)
	    {
	        N=N/2;
	        i=i+A;
	        j=j+B;
	    }
	    cout<<i+j+A<<endl;
	}
	return 0;
}