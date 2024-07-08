#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double A,X,B,Y;
	cin>>T;
	while(T--)
	{
	    cin>>A>>X>>B>>Y;
	    A/=X;
	    B/=Y;
	    cout<<((A>B)?"Alice":((A<B)?"Bob":"Equal"))<<endl;
	}
	return 0;
}