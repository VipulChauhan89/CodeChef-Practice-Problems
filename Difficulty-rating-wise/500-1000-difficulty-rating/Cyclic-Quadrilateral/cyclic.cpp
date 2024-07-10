#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C,D;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C>>D;
	    cout<<(((A+C==180) && (B+D==180))?"YES":"NO")<<endl;
	}
	return 0;
}