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
	    (2*X>=Y)?cout<<Y*2+X*1<<endl:cout<<X*3<<endl;
	}
	return 0;
}
