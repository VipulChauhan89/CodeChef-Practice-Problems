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
	    int N;
	    cin>>N;
	    (N%3==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
