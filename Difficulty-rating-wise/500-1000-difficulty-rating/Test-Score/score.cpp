#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,Y;
	cin>>T;
	while(T--)
	{
	    string ans="NO";
	    cin>>N>>X>>Y;
	    for(int i=0;i<=N;i++)
	    {
	        if(X*i==Y)
	        {
	            ans="YES";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}