/*
    Chef has a square-shaped chart paper with the side length equal to N. He wants to cut out K×K squares from this chart paper.
    Find the maximum number of K×K squares he can cut from the entire chart paper.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    cout<<(N/X)*(N/X)<<endl;
	}
	return 0;
}