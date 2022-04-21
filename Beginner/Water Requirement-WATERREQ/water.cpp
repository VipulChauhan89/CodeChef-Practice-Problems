/*
  Finally, after purchasing a water cooler during the April long challenge, Chef noticed that his water cooler requires 2 liters of water to cool for one hour.
  How much water (in liters) would be required by the cooler to cool for N hours?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	   cin>>N;
	   cout<<N*2<<endl;
	}
	return 0;
}
