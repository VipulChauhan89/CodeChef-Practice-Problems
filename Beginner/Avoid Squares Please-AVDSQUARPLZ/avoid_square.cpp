/*
    You are given an integer N. Print a permutation P of [1,2,…,N] such that the following condition holds:
    For any index i (1≤i<N), Pi × Pi+1 is not a perfect square. If there are multiple correct answers, you may print any of them.
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
	    cin>>N;
	    for(int i=1;i<=N;i++)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}