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
	    int X,Y,R;
	    cin>>X>>Y>>R;
	    (((R/30)+X)%Y==0)?cout<<((R/30)+X)/Y<<endl:cout<<(((R/30)+X)/Y)+1<<endl;
	}
	return 0;
}
