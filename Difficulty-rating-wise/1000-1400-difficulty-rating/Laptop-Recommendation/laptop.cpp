#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
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
	    vector<pair<int,int>> a;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num]++;
	    }
	    for(auto &i:m)
	    {
	        a.push_back({i.second,i.first});
	    }
	    sort(a.begin(),a.end());
	    int sz=a.size();
	    cout<<((a[sz-1].first!=a[sz-2].first)?to_string(a[sz-1].second):"CONFUSED")<<endl;
	}
	return 0;
}