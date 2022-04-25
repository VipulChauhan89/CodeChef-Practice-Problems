/*
  Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. X. Chef can use one of the following two coupons to avail a discount.
  Get 10 percent off on the bill amount Get a flat discount of Rs. 100 on the bill amount
  What is the maximum discount Chef can avail?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<max(X/10,100)<<endl;
	}
	return 0;
}
