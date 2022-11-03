/*
    Chef has with him an array A of length N. In one move, he can delete any element from A. Find the minimum number of deletions Chef must make so that the following condition holds:
            Let B denote the resulting array, and M be the length of B.
            Then, Bi ⊕ Bj ≤ 1 for every 1 ≤ i,j ≤ M.
    Here, ⊕ denotes the bitwise XOR operation.
*/
#include <iostream>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int mn=INT_MAX;
	    map<int,int> m;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num]++;
	    }
	    for(auto i:m)
	    {
	        int val=0;
	        val=(i.first & 1)?i.first-1:i.first+1;
	        int ans=i.second;
	        if(m.find(val)!=m.end())
	        {
	            ans+=m[val];
	        }
	        mn=min(mn,N-ans);
	    }
	    cout<<mn<<endl;
	}
	return 0;
}
