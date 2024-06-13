#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,H;
	cin>>T;
	while(T--)
	{
	   cin>>X>>H;
	   cout<<((X>=H)?"YES":"NO")<<endl;
	}
	return 0;
}