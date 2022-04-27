/*
  You are given an array A of length N containing the elements −1 and 1 only. 
  Determine if it is possible to rearrange the array A in such a way that Ai is not the geometric mean of Ai−1 and Ai+1, for all i such that 2≤i≤N−1.

  Y is said to be the geometric mean of X and Z if Y2=X⋅Z.
*/
#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int T,N,x;
	cin>>T;
	while(T--)
	{
	    map<int,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>x;
	        m[x]++;
	    }
	    if(abs(m[-1]-m[1])==2)
	    {
	        (m[-1]%2==1)?cout<<"NO"<<endl:cout<<"YES"<<endl;
	    }
	    else if(abs(m[-1]-m[1])<2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
