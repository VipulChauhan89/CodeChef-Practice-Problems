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
	    int A1,A2,B1,B2;
	    cin>>A1>>A2>>B1>>B2;
	    (((A1-A2)+(B1-B2))*-1>0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
