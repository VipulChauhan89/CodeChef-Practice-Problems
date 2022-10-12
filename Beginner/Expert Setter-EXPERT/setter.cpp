/*
    A problem setter is called an expert if at least 50% of their problems are approved by Chef.
    Munchy submitted X problems for approval. If Y problems out of those were approved, find whether Munchy is an expert or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	float X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    (X/2<=Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}