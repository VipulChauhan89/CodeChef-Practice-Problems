#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,B1,B2,B3;
	cin>>T;
	while(T--)
	{
	    cin>>B1>>B2>>B3;
	    int sum=B1+B2+B3;
	    cout<<((sum<=1)?"Water filling time":"Not now")<<endl;
	}
	return 0;
}