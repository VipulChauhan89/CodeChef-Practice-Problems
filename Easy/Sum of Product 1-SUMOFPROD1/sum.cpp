/*
  For an array A of length N, let F(A) denote the sum of the product of all the subarrays of A. Formally,
        F(A)=∑L=1N∑R=LN(∏i=LRAi)
  For example, let A=[1,0,1], then there are 6 possible subarrays:
      Subarray [1,1] has product =1
      Subarray [1,2] has product =0
      Subarray [1,3] has product =0
      Subarray [2,2] has product =0
      Subarray [2,3] has product =0
      Subarray [3,3] has product =1
  So F(A)=1+1=2.
  Given a binary array A, determine the value of F(A).
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    long long int sum=0,count=0;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]==1)
	        {
	           count++;
	        }
	        else
	        {
	            sum+=(count*(count+1)/2);
	            count=0;
	        }
	    }
	    sum+=(count*(count+1)/2);
	    cout<<sum<<endl;
	}
	return 0;
}
