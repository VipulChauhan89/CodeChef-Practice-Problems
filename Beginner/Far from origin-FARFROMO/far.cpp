#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int X1,X2,Y1,Y2;
	    cin>>X1>>Y1>>X2>>Y2;
	    double d1=sqrt((X1*X1)+(Y1*Y1));
	    double d2=sqrt((X2*X2)+(Y2*Y2));
	    if(d1<d2)
	    {
	        cout<<"BOB"<<endl;
	    }
	    else if(d1==d2)
	    {
	        cout<<"EQUAL"<<endl;
	    }
	    else
	    {
	        cout<<"ALEX"<<endl;
	    }
	}
	return 0;
}
