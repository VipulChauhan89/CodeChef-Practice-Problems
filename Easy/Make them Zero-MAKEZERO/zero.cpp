/*
  You are given an array A of length N.
  You can perform the following operation on the array any number of times:
          Choose any subsequence S of the array A and a positive integer X such that X is a power of 2 and subtract X from all the elements of the subsequence S.
  Find the minimum number of operations required to make all the elements of the array equal to 0.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,j,ans,num;
	cin>>T;
	while(T--)
	{
	   ans=0;
	   cin>>N;
	   vector<int> A;
	   A.assign(32,0);
	   for(int i=0;i<N;i++)
	   {
	       j=0;
	       cin>>num;
	       while(num)
	       {
	           if(A[j]==0)
	           {
	                A[j]=num%2;
	           }
	           num/=2;
	           j++;
	       }
	   }
	   for(int i=0;i<32;i++)
	   {
	       ans+=A[i];
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
