/*
    Chef has two numbers A and B. In one operation, Chef can choose either A or B and multiply it by 2.
    Determine whether he can make both A and B equal after any number (possibly, zero) of moves.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,mn,mx;
	string ans;
	cin>>T;
	while(T--)
	{
	    ans="NO";
	    cin>>A>>B;
	    if(A==B)
	    {
	        ans="YES";
	    }
	    else
	    {
	        mn=min(A,B);
	        mx=max(A,B);
	        while(mn<mx)
	        {
	            mn*=2;
	            if(mn==mx)
	            {
	                ans="YES";
	                break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}