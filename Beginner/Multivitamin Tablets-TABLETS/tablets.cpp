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
	    int X,Y;
	    cin>>X>>Y;
	    (X*3<=Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
