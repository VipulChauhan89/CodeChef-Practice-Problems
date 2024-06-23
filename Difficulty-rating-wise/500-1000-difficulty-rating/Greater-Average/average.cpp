#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    cout<<(((A+B)/2>C)?"YES":"NO")<<endl;
	}
	return 0;
}