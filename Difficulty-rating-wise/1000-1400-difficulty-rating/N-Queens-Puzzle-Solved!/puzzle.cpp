#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double X;
	cin>>T;
	while(T--)
	{
        cin>>X;
        X=round(pow((.143*X),X));
        cout<<((int)X)<<endl;
	}
	return 0;
}