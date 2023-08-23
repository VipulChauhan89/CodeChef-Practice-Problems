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
	    int X,N;
	    cin>>N>>X;
	    cout<<N-X<<endl;
	}
	return 0;
}
