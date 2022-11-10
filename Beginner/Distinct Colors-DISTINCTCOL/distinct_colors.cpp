/*
    There are N different types of colours numbered from 1 to N. Chef has Ai, balls having colour (1≤i≤N).
    Chef will arrange some boxes and put each ball in exactly one of those boxes. Find the minimum number of boxes Chef needs so that no box contains two balls of same colour.
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
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    cout<<*max_element(A,A+N)<<endl;
	}
	return 0;
}