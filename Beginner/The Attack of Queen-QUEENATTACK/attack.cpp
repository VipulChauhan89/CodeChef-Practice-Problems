/*
  Chef has started developing interest in playing chess, and was learning how the Queen moves.
  Chef has an empty N×N chessboard. He places a Queen at (X,Y) and wonders - What are the number of cells that are under attack by the Queen?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T;
	long int N,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>Y;
	    cout<<2*(N-1)+min(X-1,Y-1)+min(X-1,N-Y)+min(Y-1,N-X)+min(N-Y,N-X)<<endl;
	}
	return 0;
}
