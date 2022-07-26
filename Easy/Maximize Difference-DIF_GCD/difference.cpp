/*
  Chef has two numbers N and M. He calls a pair of numbers (A,B) good if it satisfies the following conditions:
      1≤A,B≤M
      gcd(A,B)≥N
  Chef wants to find a good pair (A,B) such that the value of |A−B| is maximized. Can you help Chef? (Here |X| represents the absolute value of X).
  If there are multiple good pairs for which the value of |A−B| is maximized, you can print any of them. It can be proved that under the given constraints, at least one good pair always exists.
*/
#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    if(M<2*N)
	    {
	        cout<<M<<" "<<M<<endl;
	    }
	    else if(M>=2*N && M%N==0)
	    {
	        cout<<M<<" "<<N<<endl;
	    }
	    else 
	    {
	        int a,b,n=M/2;
	        if(M>=2*N)
	        {
	            n=2*N;
	        }
	        int diff=INT_MIN;
	        for(int i=N;i<n;i++)
	        {
	            int d=M/i,cd=(i*d)-i;
	            if(cd>diff)
	            {
	                a=i;
	                b=i*d;
	                diff=cd;
	            }
	        }
	        cout<<a<<" "<<b<<endl;
	    }
	}
	return 0;
}
