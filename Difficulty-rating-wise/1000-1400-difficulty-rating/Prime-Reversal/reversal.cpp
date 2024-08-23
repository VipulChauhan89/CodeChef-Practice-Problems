#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,K;
	cin>>T;
	while(T--)
	{
	    cin>>K;
        string A,B;
        cin>>A>>B;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        cout<<((A==B)?"YES":"NO")<<endl;
	}
	return 0;
}