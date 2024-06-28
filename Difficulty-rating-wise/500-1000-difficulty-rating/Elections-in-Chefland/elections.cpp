#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,A,X;
	cin>>T;
	while(T--)
	{
	    int count=0;
	    cin>>N>>X;
	    while(N--)
	    {
	        cin>>A;
	        count+=((A>=X)?1:0);
	    }
	    cout<<count<<endl;
	}
	return 0;
}