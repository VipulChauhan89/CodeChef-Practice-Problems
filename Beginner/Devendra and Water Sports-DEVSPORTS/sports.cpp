/*
Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget.

He had Rs. Z at the start of the trip and has already spent Rs. Y on the trip. 
There are three kinds of water sports one can enjoy, with prices Rs. A,B,and C. 
He wants to try each sport at least once.

If he can try all of them at least once output YES, otherwise output NO.
*/
#include <iostream>
using namespace std;
int main() 
{
	int T,Z,Y,A,B,C,sum;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>Z>>Y>>A>>B>>C;
	    sum=Y+A+B+C;
	    if(sum<=Z)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
