/*
  Bob has X rupees and goes to a market. The cost of apples is Rs. A per kg and the cost of oranges is Rs. B per kg.
  Determine whether he can buy at least 1 kg each of apples and oranges.
*/
#include <iostream>
using namespace std;

int main() 
{
	int X,A,B;
	cin>>X>>A>>B;
	(X>=A+B)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	return 0;
}
