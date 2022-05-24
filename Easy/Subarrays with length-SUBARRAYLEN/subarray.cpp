/*
  You are given an array A of length N.
  Determine the count of subarrays of A which contain their length as an element.
  Formally, count the number of pairs (L,R) (1≤L≤R≤N) such that: (R−L+1)∈{AL,AL+1,…,AR}.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num,a;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    long long ans=(long long )N*(N+1)/2;
	    vector<vector <int>> A(N+1,vector<int>(1,-1));
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        A[num].push_back(i);
	    }
	    for(int i=1;i<=N;i++)
	    {
	        A[i].push_back(N);
	        int n=A[i].size();
	        for(int j=1;j<n;j++)
	        {
	            a=A[i][j]-A[i][j-1]-1;
	            ans-=max(0LL,(long long)a-i+1);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
