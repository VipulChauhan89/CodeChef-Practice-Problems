/*
  Chef has two integers X and Y. Chef wants to perform some operations to make X and Y equal. In one operation, 
  Chef can either:
          set X:=X+1
          or set Y:=Y+2
  Find the minimum number of operations required to make X and Y equal.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,Z,ans;
	cin>>T;
	while(T--)
	{
	    ans=0;
	    cin>>X>>Y;
	    Z=X-Y;
	    if(Z<0)
	    {
	        ans=abs(Z);
	    }
	    else
	    {
	        ans=Z/2;
	        if(Z%2==1)
	        {
	            ans+=2;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
