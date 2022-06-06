/*
  You are given an array A=[A1,A2,…,AN] of length N.
  You can right rotate it any number of times (possibly, zero). What is the maximum value of A1+AN you can get?
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	long int mx;
	cin>>T;
	while(T--)
	{
	   mx=0;
	   cin>>N;
	   vector<long int> A(N);
	   for(int i=0;i<N;i++)
	   {
	       cin>>A[i];
	       if(i>=1)
	       {
	           mx=max(A[i-1]+A[i],mx);
	       }
	   }
	   mx=max(mx,A[0]+A[N-1]);
	   cout<<mx<<endl;
	}
	return 0;
}
