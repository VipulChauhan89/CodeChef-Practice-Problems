/*
  There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop. 
  In the shop, packets containing exactly 4 candies are available.
  Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children.
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
	    N=(N>X)?N-X:0;
	    (N%4!=0)?cout<<(N/4)+1<<endl:cout<<N/4<<endl;
	}
	return 0;
}
