/*
  You are given arrays A and B of length N each. Determine the number of good pairs.
  A pair (i,j) (1≤i,j≤N) is said to be good if all of the following conditions are satisfied:
          i<j;
          A[i]=B[j];
          A[j]=B[i];
*/
#include <iostream>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	long int N,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    map<pair<long int,long int>,long int> m;
	    cin>>N;
	    int A[N];
	    int B[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>B[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(m.find({A[i],B[i]})!=m.end())
	        {
	            count+=m[{A[i],B[i]}];
	        }
	        m[{B[i],A[i]}]++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
