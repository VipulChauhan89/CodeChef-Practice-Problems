#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,Q;
	cin>>T;
	while(T--)
	{
	    string s;
	    int mxB=1,current=1;
	    cin>>N>>Q>>s;
	    for(int i=1;i<N;i++)
	    {
	        if(s[i-1]==s[i])
	        {
	            current++;
	        }
	        else
	        {
	            current=1;
	        }
	        mxB=max(mxB,current);
	    }
	    cout<<mxB<<" ";
	    char c,prev=s[N-1];
	    for(int i=0;i<Q;i++)
	    {
	        cin>>c;
	        if(prev==c)
	        {
	            current++;
	        }
	        else
	        {
	            current=1;
	        }
	        prev=c;
	        mxB=max(mxB,current);
	        cout<<mxB<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
