#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>X>>Y;
	    if(A<=B)
	    {
	         if((A+X)>=B)
	         {
	             cout<<"YES"<<endl;
	         }
	         else
	         {
	             cout<<"NO"<<endl;
	         }
	     }
	     else if(A>B)
	     {
	         if((A-Y)<=B)
	         {
	             cout<<"YES"<<endl;
	         }
	         else
	         {
	             cout<<"NO"<<endl;
	         }
	     }
	}
	return 0;
}