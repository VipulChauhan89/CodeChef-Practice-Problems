#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<ceil((Y-X)/8)<<endl;
	}
	return 0;
}