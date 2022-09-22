/*
	Chef has an array A of size N and an integer M, such that 1≤Ai≤M for every 1≤i≤N. The distance of an array B from array A is defined as: d(A,B)=∑i=1N|Ai−Bi|
	Chef wants an array B of size N, such that 1≤Bi≤M and the value d(A,B) is as large as possible, i.e, the distance of B from A is maximum. Find the maximum distance for any valid array B.
*/
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	long long int N,M,num,ans;
	cin>>T;
	while(T--)
	{
	    ans=0;
	    cin>>N>>M;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        ans+=max(abs(num-1),abs(num-M));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}