/*
  You are given an array with N integers: A[1],A[2],…,A[N] (where N is even). You are allowed to permute the elements however you want. 
  Say, after permuting the elements, you end up with the array A′[1],A′[2],…,A′[N]. Your goal is to maximize the following sum:
        |A′[1]−A′[2]| + |A′[3]−A′[4]| + ... + |A′[N−1]−A′[N]|
  Here, |x| denotes the absolute value of x. You have to print the maximum sum achievable.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    long long int sum=0;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A,A+N);
	    for(int i=0;i<N/2;i++)
        {
            sum+=abs(A[N-i-1]-A[i]);
        }
	    cout<<sum<<endl;
	}
	return 0;
}
