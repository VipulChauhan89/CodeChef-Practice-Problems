/*
  Chef decided to redecorate his house, and now needs to decide between two different styles of interior design.
  For the first style, tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.
  For the second style, tiling the floor will cost X2 rupees and painting the walls will cost Y2 rupees.
  Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X1,Y1,X2,Y2;
	cin>>T;
	while(T--)
	{
	    cin>>X1>>Y1>>X2>>Y2;
	    cout<<min(X1+Y1,X2+Y2)<<endl;
	}
	return 0;
}
