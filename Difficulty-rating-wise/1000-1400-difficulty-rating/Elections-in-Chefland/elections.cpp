#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    cout<<((A>50)?"A":((B>50)?"B":((C>50)?"C":"NOTA")))<<endl;
	}
	return 0;
}