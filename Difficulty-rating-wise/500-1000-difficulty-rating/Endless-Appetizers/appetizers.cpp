#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double X,Y,R;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>R;
	    cout<<ceil((X+R/30)/Y)<<endl;
	}
	return 0;
}