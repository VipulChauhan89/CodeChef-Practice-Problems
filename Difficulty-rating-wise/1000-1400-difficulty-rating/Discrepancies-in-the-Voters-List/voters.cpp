#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int x,y,z,num;
	cin>>x>>y>>z;
	map<int,int>mp;
	for(int i=0;i<(x+y+z);i++)
	{
	    cin>>num;
	    mp[num]++;
	}
	vector<int>m;
	for(auto i:mp)
	{
	    if(i.second>=2)
	    {
	        m.push_back(i.first);
	    }
	}
	cout<<m.size()<<endl;
	for(int i=0;i<m.size();i++)
	{
	    cout<<m[i]<<endl;
	}
	return 0;
}