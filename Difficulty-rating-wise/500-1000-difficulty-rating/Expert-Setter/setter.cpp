#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double Y,X;
	cin>>T;
	while(T--)
	{
	    cin>>Y>>X;
	    cout<<(((Y/2)<=X)?"YES":"NO")<<endl;
	}
	return 0;
}