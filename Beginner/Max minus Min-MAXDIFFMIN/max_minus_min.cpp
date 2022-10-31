/*
    Chef is given 3 integers A,B, and C such that A<B<C.Chef needs to find the value of max(A,B,C)−min(A,B,C).
    Here max(A,B,C) denotes the maximum value among A,B,C while min(A,B,C) denotes the minimum value among A,B,C.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    cout<<max({A,B,C})-min({A,B,C})<<endl;
	}
	return 0;
}