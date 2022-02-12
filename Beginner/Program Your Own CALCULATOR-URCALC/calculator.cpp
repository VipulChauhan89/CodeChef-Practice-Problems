#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double A,B;
	char C;
	cin>>A>>B>>C;
	if(C=='+')
	{
	    cout<<A+B<<endl;
	}
	else if(C=='-')
	{
	    cout<<A-B<<endl;
	}
	else if(C=='*')
	{
	    cout<<A*B<<endl;
	}
	else if(C=='/')
	{
	    cout<<fixed<<setprecision(6)<<A/B<<endl;
	}
	return 0;
}
