#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,K,X;
	cin>>T;
	while(T--)
	{
	   cin>>K>>X;
	   cout<<(K*7)-X<<endl;
	}
	return 0;
}