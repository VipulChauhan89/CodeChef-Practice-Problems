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
	    int N,M;
	    cin>>N>>M;
	    cout<<N*5+M*7<<endl;
	}
	return 0;
}
