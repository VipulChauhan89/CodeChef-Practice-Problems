/*
  A new TV streaming service was recently started in Chefland called the Chef-TV.
  A group of N friends in Chefland want to buy Chef-TV subscriptions. We know that 6 people can share one Chef-TV subscription. 
  Also, the cost of one Chef-TV subscription is X rupees. Determine the minimum total cost that the group of N friends will incur so that everyone in the group is able to use Chef-TV.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    if(N%6==0)
	    {
	        cout<<(N/6)*X<<endl;
	    }
	    else
	    {
	        cout<<((N/6)+1)*X<<endl;
	    }
	}
	return 0;
}
