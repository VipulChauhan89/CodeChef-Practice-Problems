/*
  Vishesh has gone to watch the new Spider-Man movie, but he is having troubles choosing which Popcorn-and-Coke combo to buy.
  There are three combos A, B, and C available at the counter. You are given the time (in minute) for which each Popcorn bucket and Coke cup lasts. 
  Given that Vishesh's satisfaction from a combo is defined as the total lasting time (in minute) of the Popcorn bucket and the Coke cup, 
  
  Program to find the maximum satisfaction he can get by buying a single combo.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T;
	long long int A1,A2,B1,B2,C1,C2;
	cin>>T;
	while(T--)
	{
	    cin>>A1>>A2>>B1>>B2>>C1>>C2;
	    cout<<max({A1+A2,B1+B2,C1+C2})<<endl;
	}
	return 0;
}
