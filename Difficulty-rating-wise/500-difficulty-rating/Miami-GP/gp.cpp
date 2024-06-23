#include <iostream>
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
	    cout<<((X*1.07>=Y)?"YES":"NO")<<endl;
	}
	return 0;
}