/*
  Chef has N slippers, L of which are left slippers and the rest are right slippers. 
  Slippers must always be sold in pairs, where each pair contains one left and one right slipper. If each pair of slippers cost X rupees.
  
  Program to find the maximum amount of rupees that Chef can get for these slippers?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,L,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>L>>X;
	    cout<<X*min(L,N-L)<<endl;
	}
	return 0;
}
