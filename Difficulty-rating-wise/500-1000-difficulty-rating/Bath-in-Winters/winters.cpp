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
	    cout<<floor(X/(Y*2))<<endl;
	}
	return 0;
}