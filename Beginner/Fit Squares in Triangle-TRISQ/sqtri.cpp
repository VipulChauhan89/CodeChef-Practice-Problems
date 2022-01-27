/*
  program to find the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
  One side of the square must be parallel to the base of the isosceles triangle.
  Base is the shortest side of the triangle
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,B;
	cin>>T;
	while(T--)
	{
	    cin>>B;
	    B/=2;
	    B-=1;
	    cout<<B*(B+1)/2<<endl;
	}
	return 0;
}
