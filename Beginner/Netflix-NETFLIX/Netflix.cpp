#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B,C,X;
	    cin>>A>>B>>C>>X;
	    (X<=A+B || X<=B+C || X<=A+C)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
