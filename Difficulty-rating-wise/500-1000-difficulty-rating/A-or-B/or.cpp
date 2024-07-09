#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<max(500-2*X+1000-4*(X+Y),1000-4*Y+500-2*(X+Y))<<endl;
	}
	return 0;
}