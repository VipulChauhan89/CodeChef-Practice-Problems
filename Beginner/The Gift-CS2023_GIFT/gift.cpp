#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int X,N,M;
	cin>>X>>N>>M;
	(N<=X+M)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}
