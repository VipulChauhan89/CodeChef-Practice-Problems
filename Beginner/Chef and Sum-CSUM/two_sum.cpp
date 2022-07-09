/*
  Given an array A of size N and an integer K, check if there exist any pair of index i,j such that Ai+Aj=K and i≠j
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	string s;
	cin>>T;
	while(T--)
	{
	    s="No";
	    cin>>N>>K;
	    int arr[N];
	    unordered_map<int,int> m;
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(m.find(arr[i])!=m.end())
	        {
	            s="Yes";
	            break;
	        }
	        m[K-arr[i]]=K-arr[i];
	    }
	    cout<<s<<endl;
	}
	return 0;
}
