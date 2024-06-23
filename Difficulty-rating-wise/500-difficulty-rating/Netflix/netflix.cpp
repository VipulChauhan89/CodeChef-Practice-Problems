#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C,X;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C>>X;
	    int sum=A+B+C;
	    cout<<((sum-A>=X || sum-B>=X || sum-C>=X)?"YES":"NO")<<endl;
	}
	return 0;
}