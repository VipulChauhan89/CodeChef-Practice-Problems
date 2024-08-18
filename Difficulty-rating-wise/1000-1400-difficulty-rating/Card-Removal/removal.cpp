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
	    int mx=INT_MIN;
	    unordered_map<int,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num]++;
	    }
	    for(auto &i:m)
	    {
	        mx=max(mx,i.second);
	    }
	    cout<<N-mx<<endl;
	}
	return 0;
}