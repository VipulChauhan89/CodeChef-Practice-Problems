#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,p,s;
	cin>>T;
	while(T--)
	{
	    long long ans=0;
	    unordered_map<int,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>p>>s;
	        m[p]=max(m[p],s);
	    }
	    for(auto &i:m)
	    {
	        if(i.first<9)
	        {
	            ans+=i.second;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}