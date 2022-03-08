/*
  Ash is trying to get visa to Chefland. For the visa to be approved, he needs to satisfy the following three criteria:

  Solve at least x1 problems on Codechef.
  Have at least y1 current rating on Codechef.
  Make his last submission at most z1 months ago.
  You are given the number of problems solved by Chef (x2), his current rating (y2) and the information that he made his last submission z2 months ago. 
  Program to determine whether he will get the visa.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,x1,x2,y1,y2,z1,z2;
	cin>>T;
	while(T--)
	{
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	    if(x1<=x2 && y1<=y2 && z1>=z2)
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
