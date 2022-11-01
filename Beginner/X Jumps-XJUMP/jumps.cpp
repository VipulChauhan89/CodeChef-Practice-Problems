/*
    Chef is currently standing at stair 0 and he wants to reach stair numbered X. Chef can climb either Y steps or 1 step in one move.
    Find the minimum number of moves required by him to reach exactly the stair numbered X.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<(X/Y)+(X%Y)<<endl;
	}
	return 0;
}