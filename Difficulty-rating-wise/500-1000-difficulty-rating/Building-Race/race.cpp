#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double A,B,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>X>>Y;
	    A/=X;
	    B/=Y;
	    cout<<((A<B)?"Chef":((A>B)?"Chefina":"Both"))<<endl;
	}
	return 0;
}