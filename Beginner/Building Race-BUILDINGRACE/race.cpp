/*
    Two friends Chef and Chefina are currently on floors A and B respectively. They hear an announcement that prizes are being distributed on the ground floor and so decide to reach the ground floor as soon as possible. 
    Chef can climb down X floors per minute while Chefina can climb down Y floors per minute. Determine who will reach the ground floor first. In case both reach the ground floor together, print Both.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	float A,B,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>X>>Y;
	    A/=X;
	    B/=Y;
	    if(A==B)
	    {
	        cout<<"Both"<<endl;
	    }
	    else if(A<B)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else
	    {
	        cout<<"Chefina"<<endl;
	    }
	}
	return 0;
}