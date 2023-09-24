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
	    int N,A,B;
	    cin>>N>>A>>B;
	    (N%2!=0)?cout<<(N/2)*A+((N/2)+1)*B<<endl:cout<<(N/2)*B+(N/2)*A<<endl;
	}
	return 0;
}
