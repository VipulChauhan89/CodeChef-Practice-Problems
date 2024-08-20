#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C,D,E;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C>>D>>E;
	    cout<<(((A+B<=D && C<=E) || (B+C<=D && A<=E) || (A+C<=D && B<=E))?"YES":"NO")<<endl;
	}
	return 0;
}