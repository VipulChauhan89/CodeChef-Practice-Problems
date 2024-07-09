#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,P;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>P;
	    cout<<(((X*3)-(N-X)>=P)?"PASS":"FAIL")<<endl;
	}
	return 0;
}