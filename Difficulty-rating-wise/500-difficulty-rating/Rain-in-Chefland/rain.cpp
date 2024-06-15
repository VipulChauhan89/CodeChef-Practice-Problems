#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	   cin>>X;
	   cout<<((X<3)?"LIGHT":((X>=3 && X<7)?"MODERATE":"HEAVY"))<<endl;
	}
	return 0;
}