/*
  There are N bikes and M cars on the road.

  Each bike has 2 tyres.
  Each car has 4 tyres.
  Program to find the total number of tyres on the road.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    cout<<N*2+M*4<<endl;
	}
	return 0;
}
