/*
  You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to cross a bridge that can withstand a weight of Z kilograms.
  Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    cout<<ceil((Z-Y)/X)<<endl;
	}
	return 0;
}
