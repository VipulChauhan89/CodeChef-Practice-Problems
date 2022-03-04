/*
  The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(|X1−X2|,|Y1−Y2|).
  Program to find that distance.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,X1,Y1,X2,Y2;
	cin>>T;
	while(T--)
	{
	    cin>>X1>>Y1>>X2>>Y2;
	    cout<<max(abs(X1-X2),abs(Y1-Y2))<<endl;
	}
	return 0;
}
