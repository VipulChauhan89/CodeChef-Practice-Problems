#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    vector<int> V,even,odd;
	    for(int i=1;i<=K+1;i++)
	    {
	        V.push_back(i);
	    }
	    for(int i=K+2;i<=N;i++)
	    {
	        if(i%2==0)
	        {
	            even.push_back(i);
	        }
	        else
	        {
	            odd.push_back(i);
	        }
	    }
	    cout<<V[0]<<" ";
	    for(auto i:odd)
	    {
	        cout<<i<<" ";
	    }
	    cout<<V[1]<<" ";
	    for(auto i:even)
	    {
	        cout<<i<<" ";
	    }
	    for(int i=2;i<V.size();i++)
	    {
	        cout<<V[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
