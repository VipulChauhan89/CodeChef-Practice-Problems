//Given an array A of size N, check if there exist any pair of index i,j such that Ai=Aj and i≠j
#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	string ans;
	cin>>T;
	while(T--)
	{
	    ans="No";
	    unordered_map<int,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num]++;
	    }
	    for(auto it:m)
	    {
	        if(it.second>1)
	        {
	            ans="Yes";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
