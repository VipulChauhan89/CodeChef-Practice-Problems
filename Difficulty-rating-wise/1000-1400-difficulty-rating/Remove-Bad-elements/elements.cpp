#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <climits>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    unordered_map<int,int> m;
	    int ans=INT_MIN;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num]++;
	        ans=max(ans,m[num]);
	    }
	    cout<<N-ans<<endl;
	}
	return 0;
}