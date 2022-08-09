/*
	You are given an array A of length N. An element X is said to be dominant if the frequency of X in A is strictly greater than the frequency of any other element in the A. 
	For example, if A=[2,1,4,4,4] then 4 is a dominant element since its frequency is higher than the frequency of any other element in A. Find if there exists any dominant element in A.
*/
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num,mx,ans;
	cin>>T;
	while(T--)
	{
	    ans=0;
	    mx=0;
	    unordered_map<int,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num]++;
	        mx=max(mx,m[num]);
	    }
	    for(auto n:m)
	    {
	        if(mx==n.second)
	        {
	            ans++;
	        }
	    }
	    (ans==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}