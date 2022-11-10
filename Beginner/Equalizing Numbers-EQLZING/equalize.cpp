/*
    Chef has two integers A and B. In one operation he can choose any integer d, and make one of the following two moves :
            Add d to A and subtract d from B.
            Add d to B and subtract d from A.
    Chef is allowed to make as many operations as he wants. Can he make A and B equal?
*/
#include <iostream>
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
	    if(A==B)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        (abs(A-B)%2==0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	    }
	}
	return 0;
}