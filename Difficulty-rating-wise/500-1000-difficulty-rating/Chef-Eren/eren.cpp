#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>N>>A>>B;
	    cout<<((N%2!=0)?(N/2)*A+((N/2)+1)*B:(N/2)*B+(N/2)*A)<<endl;
	}
	return 0;
}