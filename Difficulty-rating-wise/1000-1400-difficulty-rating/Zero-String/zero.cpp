#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	string s;
	cin>>T;
	while(T--)
	{
	    cin>>N>>s;
	    int c=count(s.begin(),s.end(),'0');
	    cout<<((c<(N-c))?(c+1):(N-c))<<endl;
	}
	return 0;
}