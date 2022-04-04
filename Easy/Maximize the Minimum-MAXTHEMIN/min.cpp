/*
  JJ has an array A of size N. He can perform the following operations on the array at most K times:
  Set Ai:=Ai+1 where 1≤i≤N−1
  Set Ai:=Ai−1 where 2≤i≤N
  He wants to maximize the value of the minimum element of the array A. Formally, he wants to maximize the value of min1≤i≤NAi.

  Program to help him do so?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A,A+N);
	    cout<<A[min(K,N-1)]<<endl;
	}
	return 0;
}
