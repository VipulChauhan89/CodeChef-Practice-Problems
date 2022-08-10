/*
    It's the sale season again and Chef bought items worth a total of X rupees. The sale season offer is as follows:
            if X≤100, no discount.
            if 100<X≤1000, discount is 25 rupees.
            if 1000<X≤5000, discount is 100 rupees.
            if X>5000, discount is 500 rupees.
    Find the final amount Chef needs to pay for his shopping.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	   cin>>X;
	   if(X<=100)
	   {
	       cout<<X<<endl;
	   }
	   else if(X>100 && X<=1000)
	   {
	       cout<<X-25<<endl;
	   }
	   else if(X>1000 && X<=5000)
	   {
	       cout<<X-100<<endl;
	   }
	   else
	   {
	       cout<<X-500<<endl;
	   }
	}
	return 0;
}