#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,A,K;
	cin>>T;
	while(T--)
	{
	    string ans="";
	    cin>>N>>K;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A;
	        ans+=((K-A>=0)?"1":"0");
	        K-=((K-A>=0)?A:0);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}