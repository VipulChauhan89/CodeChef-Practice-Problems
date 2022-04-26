/*
  An array A of length N is said to be pseudo-sorted if it can be made non-decreasing after performing the following operation at most once.
  Choose an i such that 1≤i≤N−1 and swap Ai and Ai+1
  Given an array A, determine if it is pseudo-sorted or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,count,prev;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N;
	    int A[N];
	    prev=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(int i=0;i<N-1;i++)
	    {
	        if(A[i]>A[i+1])
	        {
	            count++;
	        }
	        if(i<N-2 && A[i]>A[i+2])
	        {
	            count++;
	        }
	        if(count>1)
	        {
	            break;
	        }
	    }
	    (count<=1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
