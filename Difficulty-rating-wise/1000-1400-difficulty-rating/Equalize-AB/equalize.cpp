#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,X;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>X;
	    cout<<(((abs(A-B)/X)%2==0 && (abs(A-B)%X==0))?"YES":"NO")<<endl;
	}
	return 0;
}