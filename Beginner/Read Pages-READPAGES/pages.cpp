#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int N,X,Y;
	    cin>>N>>X>>Y;
	    (X*Y>=N)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
