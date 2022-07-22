/*
  You have a grid with N rows and M columns. You have two types of tiles — one of dimensions 2×2 and the other of dimensions 1×1. 
  You want to cover the grid using these two types of tiles in such a way that:
        Each cell of the grid is covered by exactly one tile; and
        The number of 1×1 tiles used is minimized.
  Find the minimum number of 1×1 tiles you have to use to fill the grid.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    cout<<(N%2)*M+(M%2)*N-(N*M)%2<<endl;
	}
	return 0;
}
