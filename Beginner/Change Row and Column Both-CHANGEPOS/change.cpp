/*
    There is a 10×10 grid with rows numbered 1 to 10 from top to bottom, and columns 1 to 10 from left to right. Each cell is identified by a pair (r, c) which means that the cell is located at row r and column c.
    If Chef's current location is (a,b), then in one move Chef can go to (c,d) if both of the following are satisfied:
                a ≠ c
                b ≠ d
    Determine the minimum number of moves required to go from(sx,sy) to (ex,ey).
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,a,b,c,d;
	cin>>T;
	while(T--)
	{
	    cin>>a>>b>>c>>d;
	    (a==c || b==d)?cout<<2<<endl:cout<<1<<endl;
	}
	return 0;
}