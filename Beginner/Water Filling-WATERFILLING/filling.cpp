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
	    int B1,B2,B3;
	    cin>>B1>>B2>>B3;
	    (B1+B2+B3<2)?cout<<"Water filling time"<<endl:cout<<"Not now"<<endl;
	}
	return 0;
}
