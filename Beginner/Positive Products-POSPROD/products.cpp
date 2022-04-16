/*
  You are given an array A of length N. Find the number of pairs of indices (i,j)such that
  1≤i<j≤N
  Ai⋅Aj>0
*/
#include <iostream>
using namespace std;
int main() 
{
	int T;
	long long int N,p,n,sum;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    p=0;
	    n=0;
	    cin>>N;
	    long int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]>0)
	        {
	            p++;
	        }
	        else if(A[i]<0)
	        {
	            n++;
	        }
	    }
	    n--;
	    p--;
	    sum+=(p*(p+1)/2);
	    sum+=(n*(n+1)/2);
	    cout<<sum<<endl;
	}
	return 0;
}
