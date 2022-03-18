/*
  Chef has N empty bottles where each bottle has a capacity of X litres.
  There is a water tank in Chefland having K litres of water. Chef wants to fill the empty bottles using the water in the tank.
  Assuming that Chef does not spill any water while filling the bottles, 
  
  Program to find out the maximum number of bottles Chef can fill completely.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,X,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>K;
	    cout<<min(N,K/X)<<endl;
	}
	return 0;
}
