/*
  Chef is fond of burgers and decided to make as many burgers as possible.
  Chef has A patties and B buns. To make 1 burger, Chef needs 1 patty and 1 bun.
  Find the maximum number of burgers that Chef can make.
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    cout<<min(A,B)<<endl;
	}
	return 0;
}
