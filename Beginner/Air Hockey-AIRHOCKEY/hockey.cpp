/*
  Alice is playing Air Hockey with Bob. The first person to earn seven points wins the match. Currently, Alice's score is A and Bob's score is B.
  Charlie is eagerly waiting for his turn. Help Charlie by calculating the minimum number of points that will be further scored in the match before it ends.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    cout<<7-max(A,B)<<endl;
	}
	return 0;
}
