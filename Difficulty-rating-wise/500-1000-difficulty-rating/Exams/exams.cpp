#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    cout<<((((X*Y)/2)<Z)?"YES":"NO")<<endl;
	}
	return 0;
}