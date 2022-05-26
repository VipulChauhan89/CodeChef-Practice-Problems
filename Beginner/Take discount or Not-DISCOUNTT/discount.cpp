/*
  There are N items in a shop. You know that the price of the i-th item is Ai. Chef wants to buy all the N items.
  There is also a discount coupon that costs X rupees and reduces the cost of every item by Y rupees. If the price of an item was initially ≤Y, it becomes free, i.e, costs 0.

  Determine whether Chef should buy the discount coupon or not. 
  Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,Y,sum,sum2;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    sum2=0;
	    cin>>N>>X>>Y;
	    vector<int>A(N+1,0);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        sum+=A[i];
	        if(A[i]<=Y)
	        {
	            sum2+=0;
	        }
	        else
	        {
	            sum2+=A[i]-Y;
	        }
	    }
	    (sum-X>sum2)?cout<<"COUPON"<<endl:cout<<"NO COUPON"<<endl;
	}
}
