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
	    int X,Y,H;
	    cin>>X>>Y>>H;
        X-=H;
        (X%Y)?cout<<(X/Y)+2<<endl:cout<<(X/Y)+1<<endl;
	}
	return 0;
}
