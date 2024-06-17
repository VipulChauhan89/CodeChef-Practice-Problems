#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,N,M;
    cin>>X>>N>>M;
	cout<<((X+M>=N)?"YES":"NO")<<endl;
	return 0;
}