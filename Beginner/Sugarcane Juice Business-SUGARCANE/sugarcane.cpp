/*
  While Alice was drinking sugarcane juice, she started wondering about the following facts:
          The juicer sells each glass of sugarcane juice for 50 coins.
          He spends 20% of his total income on buying sugarcane.
          He spends 20% of his total income on buying salt and mint leaves.
          He spends 30% of his total income on shop rent.
  Alice wonders, what is the juicer's profit (in coins) when he sells N glasses of sugarcane juice?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T;
	long int X;
	cin>>T;
	while(T--)
	{
	   cin>>X;
	   cout<<X*15<<endl;
	}
	return 0;
}
