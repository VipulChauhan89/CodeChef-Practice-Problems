#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X1,Y1,X2,Y2;
	cin>>T;
	while(T--)
	{
	    cin>>X1>>Y1>>X2>>Y2;
	    cout<<max(abs(X1-X2),abs(Y1-Y2))<<endl;
	}
	return 0;
}